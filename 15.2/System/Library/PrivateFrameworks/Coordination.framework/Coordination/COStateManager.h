@class NSArray, NSDictionary, NSXPCConnection, NSString, NSSet, NSObject;
@protocol COStateManagerConnectionProvider, OS_dispatch_queue;

@interface COStateManager : NSObject <COStateManagerClientInterface> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (weak, nonatomic) NSXPCConnection *lastConnection;
@property (copy, nonatomic) NSDictionary *state;
@property (copy, nonatomic) NSArray *observers;
@property (copy, nonatomic) NSArray *mediaStateObservers;
@property (readonly, nonatomic) id<COStateManagerConnectionProvider> provider;
@property (readonly, copy, nonatomic) NSString *suite;
@property (readonly, copy, nonatomic) NSSet *clusters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stateManagerForMediaSystem;

- (id)_sanitizeChanges:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_invalidate;
- (void)_lostConnectionToService;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_withLock:(id /* block */)a0;
- (BOOL)isMediaSystemLeader;
- (id)initWithConnectionProvider:(id)a0 suite:(id)a1 clusters:(id)a2;
- (void)_onqueue_setDictionary:(id)a0 clusters:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeObjectsForKeyPaths:(id)a0 clusters:(id)a1 completionHandler:(id /* block */)a2;
- (void)_onqueue_removeObjectsForKeyPaths:(id)a0 clusters:(id)a1 completionHandler:(id /* block */)a2;
- (void)_onqueue_registerObserver:(id)a0;
- (id)_remoteInterfaceWithErrorHandler:(id /* block */)a0 checkinWithServer:(BOOL)a1;
- (BOOL)_onqueue_clustersValid:(id)a0;
- (void)roleOfMember:(id)a0 inCluster:(id)a1 didChangeTo:(id)a2;
- (void)mediaSystemLeaderDidChangeTo:(BOOL)a0 callback:(id /* block */)a1;
- (void)changesObserved:(id)a0 forPredicate:(id)a1;
- (id)initWithSuiteName:(id)a0 clusters:(id)a1;
- (void)setBool:(BOOL)a0 forKeyPath:(id)a1 clusters:(id)a2 completionHandler:(id /* block */)a3;
- (void)setNumber:(id)a0 forKeyPath:(id)a1 clusters:(id)a2 completionHandler:(id /* block */)a3;
- (void)setString:(id)a0 forKeyPath:(id)a1 clusters:(id)a2 completionHandler:(id /* block */)a3;
- (void)setDate:(id)a0 forKeyPath:(id)a1 clusters:(id)a2 completionHandler:(id /* block */)a3;
- (void)setDictionary:(id)a0 clusters:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeObjectForKeyPath:(id)a0 clusters:(id)a1 completionHandler:(id /* block */)a2;
- (id)addObserverForKeyPathUsingPredicate:(id)a0 queue:(id)a1 usingBlock:(id /* block */)a2;
- (id)addMediaSystemLeaderObserverToDispatchQueue:(id)a0 block:(id /* block */)a1;
- (void)removeMediaSystemLeaderObserver:(id)a0;
- (void)fetchCompositionForCluster:(id)a0 dispatchQueue:(id)a1 block:(id /* block */)a2;
- (void)delayForDoorbellChimeWithCompletionHandler:(id /* block */)a0;

@end
