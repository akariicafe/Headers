@class NSData, NSUUID, NSString, NSURL, CKShare, CKContainerSetupInfo, NSNumber;

@interface SFCollaborationCloudSharingMailRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *collaborationItemIdentifier;
@property (readonly, nonatomic) NSURL *fileOrFolderURL;
@property (readonly, nonatomic) CKShare *share;
@property (readonly, nonatomic) CKContainerSetupInfo *setupInfo;
@property (readonly, nonatomic) NSURL *sharingURL;
@property (readonly, nonatomic) NSNumber *accessType;
@property (readonly, nonatomic) NSNumber *permissionType;
@property (readonly, nonatomic) NSNumber *allowOthersToInvite;
@property (readonly, copy, nonatomic) NSString *appName;
@property (readonly, nonatomic) NSData *appIconData;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCloudSharingRequest:(id)a0 result:(id)a1;
- (id)initWithCollaborationItemIdentifier:(id)a0 fileOrFolderURL:(id)a1 share:(id)a2 setupInfo:(id)a3 sharingURL:(id)a4 accessType:(id)a5 permissionType:(id)a6 allowOthersToInvite:(id)a7 appName:(id)a8 appIconData:(id)a9;

@end
