@class NSUUID, NSString;

@interface DAKeyInvitationRequestConfig : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *sharingSessionIdentifier;
@property (readonly, nonatomic) NSString *ownerIdsIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSharingSessionIdentifier:(id)a0 ownerIdsIdentifier:(id)a1;

@end
