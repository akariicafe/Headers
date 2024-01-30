@interface HMDNetworkRouterSatelliteProfile : HMDAccessoryProfile

@property (nonatomic) long long satelliteStatus;
@property (nonatomic) unsigned long long networkStatus;

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;

- (void)_registerForNotifications;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (void)unconfigure;
- (void)registerForMessages;
- (void)_updateNetworkStatus;
- (id)runtimeState;
- (void)handleAccessoryConnected:(id)a0;
- (void)handleCharacteristicsChangedNotification:(id)a0;
- (id)initWithRouterSatelliteService:(id)a0 msgDispatcher:(id)a1;
- (void)handleInitialState;
- (void)_handleCharacteristicChanges:(id)a0;
- (void)__notifyClientsOfNetworkStatusUpdate:(unsigned long long)a0;
- (void)__updateSatelliteStatus:(id)a0;
- (void)_handleCharacteristicsChangedPayload:(id)a0;
- (void)__handleAccessoryConnected;

@end
