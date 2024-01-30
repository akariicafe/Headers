@class RTDefaultsManager, RTDistanceCalculator, NSArray, RTPersistenceManager, NSObject;
@protocol OS_dispatch_queue;

@interface RTLearnedLocationReconcilerPerVisit : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) RTPersistenceManager *persistenceManager;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (retain) NSArray *reconciliationModels;

+ (void)submitMetricsOnReconciledGraphDensity:(id)a0 algorithm:(unsigned long long)a1 persistenceManager:(id)a2 managedObjectContext:(id)a3;

- (id)init;
- (void).cxx_destruct;
- (id)_currentModel;
- (id)_findWinner:(id)a0 currentVisit:(id)a1 model:(id)a2 modelContext:(id)a3;
- (void)_performReconciliationWithHandler:(id /* block */)a0;
- (void)_reconcileVisits:(id)a0 context:(id)a1 handler:(id /* block */)a2;
- (void)_reconcileVisits:(id)a0 handler:(id /* block */)a1;
- (void)_reconcileVisitsWithContext:(id)a0 handler:(id /* block */)a1;
- (id)_visitFollowingVisit:(id)a0 visits:(id)a1;
- (id)_visitsWithContext:(id)a0 predicate:(id)a1 sortDescriptors:(id)a2 error:(id *)a3;
- (void)collapseReconciledVisitsToLocationsOfInterest:(id)a0 context:(id)a1 handler:(id /* block */)a2;
- (void)collapseVisits:(id)a0 context:(id)a1;
- (id)initWithPersistenceManager:(id)a0 defaultsManager:(id)a1;
- (id)initWithPersistenceManager:(id)a0 defaultsManager:(id)a1 distanceCalculator:(id)a2 reconciliationModels:(id)a3;
- (void)performReconciliationWithHandler:(id /* block */)a0;
- (void)reconcileVisits:(id)a0 context:(id)a1 handler:(id /* block */)a2;
- (void)reconcileVisits:(id)a0 handler:(id /* block */)a1;

@end
