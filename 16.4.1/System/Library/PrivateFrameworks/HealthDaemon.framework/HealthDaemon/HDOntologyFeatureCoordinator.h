@class NSString, NSDictionary, NSMutableDictionary, HDOntologyUpdateCoordinator, NSObject, NSArray;
@protocol OS_dispatch_queue;

@interface HDOntologyFeatureCoordinator : NSObject <HDDatabaseProtectedDataObserver, HDHealthDaemonReadyObserver, HDProfileManagerObserver, HDProfileReadyObserver> {
    NSObject<OS_dispatch_queue> *_observationQueue;
    NSMutableDictionary *_observationQueue_isProfileReady;
    NSArray *_featureEvaluators;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDictionary *_lock_shardRequirementStatuses;
}

@property (readonly, weak, nonatomic) HDOntologyUpdateCoordinator *updateCoordinator;
@property (readonly, copy, nonatomic) NSDictionary *shardRequirementStatuses;
@property (copy, nonatomic) id /* block */ unitTesting_willInsertEntry;
@property (nonatomic) double unitTesting_minimumTimeToLive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)profileListDidChange;
- (void)profileDidBecomeReady:(id)a0;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)daemonReady:(id)a0;
- (id)initWithOntologyUpdateCoordinator:(id)a0;
- (BOOL)markShardsWithIdentifiers:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (void)evaluteRequiredShardsForEvalulator:(id)a0 reason:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
