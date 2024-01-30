@interface HMNetworkConfigurationWiFiOptions : HMFObject

@property (readonly, nonatomic) long long credentialType;
@property (nonatomic) BOOL rotate;

- (id)description;
- (id)initWithCredentialType:(long long)a0;

@end
