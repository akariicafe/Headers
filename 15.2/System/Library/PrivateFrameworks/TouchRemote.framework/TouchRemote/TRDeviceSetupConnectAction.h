@class NSString;

@interface TRDeviceSetupConnectAction : TRDeviceSetupAction

@property (readonly, copy, nonatomic) NSString *deviceName;
@property (readonly, copy, nonatomic) NSString *networkSSID;
@property (readonly, copy, nonatomic) NSString *networkPassword;

- (id)init;
- (id)initWithDeviceName:(id)a0 networkSSID:(id)a1 networkPassword:(id)a2;

@end
