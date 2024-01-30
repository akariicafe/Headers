@class NSObject, NSUUID, NSOrderedSet, PCDisambiguationContext, NSMutableArray, PCRemoteActivityClient;
@protocol OS_dispatch_queue;

@interface HFProxControlActivityClientManager : NSObject

@property (retain, nonatomic) PCRemoteActivityClient *proxControlActivityClient;
@property (retain, nonatomic) NSUUID *homeID;
@property (retain, nonatomic) NSUUID *accessoryID;
@property (retain, nonatomic) NSMutableArray *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataModelUpdateQueue;
@property (nonatomic) BOOL hasStartedMonitoringUpdates;
@property (retain, nonatomic) NSObject *lastIdentifier;
@property (copy, nonatomic) NSOrderedSet *lastActivities;
@property (retain, nonatomic) PCDisambiguationContext *lastDisambiguationContext;

+ (id)sharedInstance;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_setupProxControlClient;
- (void)_notifyObserversForUpdatedActivities:(id)a0 forProxControlID:(id)a1 disambiguationContext:(id)a2;
- (void)userTappedCloseButton;
- (id)startMonitoringUpdatesForMediaRemoteIdentifier:(id)a0;
- (id)startMonitoringUpdatesForAccessoryID:(id)a0 homeID:(id)a1;
- (void)userTappedDisambiguationButtonForContext:(id)a0;
- (void)_resetProxClient;

@end
