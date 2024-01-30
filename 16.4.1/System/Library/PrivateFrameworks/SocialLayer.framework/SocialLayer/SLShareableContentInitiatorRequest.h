@class NSString, _SWCollaborationMetadata, NSURL, CKContainerSetupInfo;

@interface SLShareableContentInitiatorRequest : NSObject <BSXPCSecureCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) CKContainerSetupInfo *containerSetupInfo;
@property (readonly, nonatomic) _SWCollaborationMetadata *collaborationMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithFileURL:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithContainerSetupInfo:(id)a0;
- (id)initWithCollaborationMetadata:(id)a0;
- (id)initWithFileURL:(id)a0 containerSetupInfo:(id)a1 collaborationMetadata:(id)a2;

@end
