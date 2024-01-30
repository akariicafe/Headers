@class PCDisambiguationContext, NSUUID, NSOrderedSet, NSHashTable, PCRemoteActivityClient, NSObject;
@protocol OS_dispatch_queue;

@interface HFProxControlActivityClientManager : NSObject

@property (retain, nonatomic) PCRemoteActivityClient *proxControlActivityClient;
@property (retain, nonatomic) NSUUID *homeID;
@property (retain, nonatomic) NSUUID *accessoryID;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataModelUpdateQueue;
@property (nonatomic) BOOL hasStartedMonitoringUpdates;
@property (retain, nonatomic) NSObject *lastIdentifier;
@property (copy, nonatomic) NSOrderedSet *lastActivities;
@property (retain, nonatomic) PCDisambiguationContext *lastDisambiguationContext;
@property (nonatomic) BOOL useSAConfig;

+ (id)sharedInstance;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)invalidateProxClient;
- (id)startMonitoringUpdatesForAccessoryID:(id)a0 homeID:(id)a1;
- (id)startMonitoringUpdatesForMediaRemoteIdentifier:(id)a0;
- (void)userTappedCloseButton;
- (void)userTappedDisambiguationButtonForContext:(id)a0;
- (void)_notifyObserversForUpdatedActivities:(id)a0 forProxControlID:(id)a1 disambiguationContext:(id)a2;
- (void)_resetProxClient;
- (id)_setupProxControlClient;

@end
