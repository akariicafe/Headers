@interface HMDNetworkRouterProfile : HMDAccessoryProfile

@property (nonatomic) unsigned long long networkStatus;
@property (nonatomic) unsigned long long wanStatus;
@property (nonatomic) long long routerStatus;

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;

- (void)registerForMessages;
- (void)dealloc;
- (void)unconfigure;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)runtimeState;
- (void)handleAccessoryConnected:(id)a0;
- (void)handleCharacteristicsChangedNotification:(id)a0;
- (id)initWithRouterService:(id)a0 msgDispatcher:(id)a1;
- (void)handleInitialState;
- (void)handleNetworkRouterSatelliteAddedOrRemoved:(id)a0;
- (void)__notifyClientsOfNetworkStatus:(unsigned long long)a0;
- (void)_updateWANStatus:(unsigned long long)a0;
- (void)_updateRouterStatus:(long long)a0;
- (void)__handleNetworkAccessViolationUpdate:(id)a0;

@end
