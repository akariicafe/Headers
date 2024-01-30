@class NSString;

@interface FCRegisterDeviceTokenCommand : FCCommand

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *deviceToken;
@property (copy, nonatomic) NSString *storefrontID;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)executeWithContext:(id)a0 delegate:(id)a1 qualityOfService:(long long)a2;
- (id)initWithUserID:(id)a0 deviceToken:(id)a1 storefrontID:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
