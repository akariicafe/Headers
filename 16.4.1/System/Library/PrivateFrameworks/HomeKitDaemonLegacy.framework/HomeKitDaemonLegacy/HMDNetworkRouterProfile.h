@interface HMDNetworkRouterProfile : HMDAccessoryProfile

@property (nonatomic) unsigned long long networkStatus;
@property (nonatomic) unsigned long long wanStatus;
@property (nonatomic) long long routerStatus;

+ (BOOL)supportsSecureCoding;
+ (id)logCategory;

- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)registerForMessages;
- (void)unconfigure;
- (void)__notifyClientsOfNetworkStatus:(unsigned long long)a0;
- (void)__handleNetworkAccessViolationUpdate:(id)a0;
- (void)_updateRouterStatus:(long long)a0;
- (void)_updateWANStatus:(unsigned long long)a0;
- (void)handleAccessoryConfigured:(id)a0;
- (void)handleAccessoryIsReachable:(id)a0;
- (void)handleCharacteristicsChangedNotification:(id)a0;
- (void)handleInitialState;
- (void)handleNetworkRouterSatelliteAddedOrRemoved:(id)a0;
- (id)initWithRouterService:(id)a0 msgDispatcher:(id)a1;
- (id)runtimeState;

@end
