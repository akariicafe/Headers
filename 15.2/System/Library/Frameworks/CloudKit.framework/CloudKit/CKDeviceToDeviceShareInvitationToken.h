@class NSData, NSURL;

@interface CKDeviceToDeviceShareInvitationToken : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *sharingInvitationData;
@property (readonly, copy, nonatomic) NSURL *shareURL;

- (id)CKPropertiesDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithSharingInvitationData:(id)a0 shareURL:(id)a1;

@end
