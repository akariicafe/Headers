@interface SADeviceMyriadConfiguration : SABaseClientBoundCommand

@property (nonatomic) double deviceAdjustment;
@property (nonatomic) double deviceClass;
@property (nonatomic) double deviceDelay;
@property (nonatomic) double deviceTrumpDelay;
@property (nonatomic) double deviceVTEndtimeDistanceThreshold;

+ (id)deviceMyriadConfiguration;
+ (id)deviceMyriadConfigurationWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
