@interface HMDNetworkRouterSatelliteProfile : HMDAccessoryProfile

@property (nonatomic) long long satelliteStatus;
@property (nonatomic) unsigned long long networkStatus;

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;

- (void)_registerForNotifications;
- (void)registerForMessages;
- (void)dealloc;
- (void)unconfigure;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_updateNetworkStatus;
- (id)runtimeState;
- (void)handleAccessoryConnected:(id)a0;
- (void)handleCharacteristicsChangedNotification:(id)a0;
- (id)initWithRouterSatelliteService:(id)a0 msgDispatcher:(id)a1;
- (void)handleInitialState;
- (void)__handleAccessoryConnected;
- (void)__notifyClientsOfNetworkStatusUpdate:(unsigned long long)a0;
- (void)__updateSatelliteStatus:(id)a0;
- (void)_handleCharacteristicChanges:(id)a0;
- (void)_handleCharacteristicsChangedPayload:(id)a0;

@end
