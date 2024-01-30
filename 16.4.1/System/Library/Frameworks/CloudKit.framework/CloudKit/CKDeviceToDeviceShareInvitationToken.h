@class NSData, NSURL, NSString;

@interface CKDeviceToDeviceShareInvitationToken : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *sharingInvitationData;
@property (readonly, copy, nonatomic) NSURL *shareURL;
@property (readonly, copy, nonatomic) NSString *participantID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)CKPropertiesDescription;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSharingInvitationData:(id)a0 shareURL:(id)a1;
- (id)initWithSharingInvitationData:(id)a0 shareURL:(id)a1 participantID:(id)a2;

@end
