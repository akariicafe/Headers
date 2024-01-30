@class NSString;

@interface ICDelegationServiceSecuritySettings : NSObject

@property (readonly, nonatomic) long long securityMode;
@property (readonly, copy, nonatomic) NSString *password;

+ (void)getDeviceReceiverSettingsWithCompletion:(id /* block */)a0;
+ (void)getDeviceSenderSettingsForReceiverName:(id)a0 securityMode:(long long)a1 completion:(id /* block */)a2;

- (id)description;
- (void).cxx_destruct;
- (id)_init;

@end
