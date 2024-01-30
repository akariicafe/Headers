@class NSObject, NSUUID, PCHomeKitIdentifier, NSOrderedSet, PCDisambiguationContext, NSMutableArray, PCRemoteActivityClient;
@protocol OS_dispatch_queue;

@interface HFProxControlActivityClientManager : NSObject

@property (retain, nonatomic) PCRemoteActivityClient *proxControlActivityClient;
@property (retain, nonatomic) NSUUID *homeID;
@property (retain, nonatomic) NSUUID *accessoryID;
@property (retain, nonatomic) NSMutableArray *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataModelUpdateQueue;
@property (nonatomic) BOOL hasStartedMonitoringUpdates;
@property (retain, nonatomic) PCHomeKitIdentifier *lastIdentifier;
@property (copy, nonatomic) NSOrderedSet *lastActivities;
@property (retain, nonatomic) PCDisambiguationContext *lastDisambiguationContext;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)_setupProxControlClient;
- (void)_notifyObserversForUpdatedActivities:(id)a0 forProxControlID:(id)a1 disambiguationContext:(id)a2;
- (void)userTappedCloseButton;
- (id)startMonitoringUpdatesForMediaRemoteIdentifier:(id)a0;
- (id)startMonitoringUpdatesForAccessoryID:(id)a0 homeID:(id)a1;
- (void)userTappedDisambiguationButtonForContext:(id)a0;
- (void)_resetProxClient;

@end
