@class PFSerialQueue, PGManager, PGGraphUpdateManager, NSConditionLock, PFWeakContainer, PFDirectMessagingMulticaster, PHAManager, NSMutableSet;
@protocol PHAGraphManagerClientMessagesMulticaster;

@interface PHAGraphManager : NSObject <PFMulticasterDelegate, PFWeakContainerNilNotificationDelegate> {
    PFDirectMessagingMulticaster<PHAGraphManagerClientMessagesMulticaster> *_clientMulticaster;
    NSMutableSet *_clientsWantingUpdates;
    long long _updateManagerSuspendCount;
    BOOL _rebuildInProgress;
    PFSerialQueue *_serializer;
    PGManager *_graphManager;
    PFWeakContainer *_graphMonitor;
    NSConditionLock *_graphLoadedCondition;
}

@property (readonly, nonatomic) PGGraphUpdateManager *updateManager;
@property (retain, nonatomic) PHAManager *photoAnalysisManager;

- (id)initWithManager:(id)a0;
- (void)unloadGraph;
- (void)shutdown;
- (void)performFullRebuildWithProgressBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_performRebuildFullRebuild:(BOOL)a0 withProgressBlock:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (void)_startListeningWithClient:(id)a0;
- (void)dealloc;
- (id)loadGraphWithProgressBlock:(id /* block */)a0;
- (id)registerGraphClient:(id)a0 progressBlock:(id /* block */)a1;
- (void)unregisterGraphClient:(id)a0;
- (void)_stopUpdateManager;
- (void)suspendGraphUpdateAndPerformBlock:(id /* block */)a0;
- (void)_configureGraphManagerWithProgressBlock:(id /* block */)a0;
- (void)weakReferenceBecameNil:(id)a0;
- (void)_stopListeningWithClient:(id)a0;
- (BOOL)graphNeedsRebuild;
- (id)statusAsDictionary;
- (void)_graphBecameReady:(id)a0;
- (void)performLightWeightRebuildWithProgressBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (void)_startUpdateManager;
- (void)multicasterHasNoReceivers:(id)a0 invalidateBlock:(id /* block */)a1;

@end
