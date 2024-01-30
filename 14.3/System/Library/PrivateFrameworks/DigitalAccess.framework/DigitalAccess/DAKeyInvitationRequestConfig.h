@class NSUUID, NSString;

@interface DAKeyInvitationRequestConfig : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *sharingSessionIdentifier;
@property (readonly, nonatomic) NSString *ownerIdsIdentifier;

- (void).cxx_destruct;
- (id)initWithSharingSessionIdentifier:(id)a0 ownerIdsIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
