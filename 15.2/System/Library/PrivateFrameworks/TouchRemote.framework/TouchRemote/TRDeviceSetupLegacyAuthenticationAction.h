@class NSString;

@interface TRDeviceSetupLegacyAuthenticationAction : TRDeviceSetupConnectAction

@property (retain, nonatomic) NSString *deviceGUID;
@property (retain, nonatomic) NSString *userAgent;

- (id)deviceName;
- (id)propertyListRepresentation;
- (void).cxx_destruct;

@end
