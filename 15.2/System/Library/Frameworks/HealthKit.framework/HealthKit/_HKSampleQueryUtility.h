@class HKQueryAnchor, NSMutableArray, HKHealthStore, NSPredicate, HKAnchoredObjectQuery, HKSampleType;

@interface _HKSampleQueryUtility : NSObject {
    HKHealthStore *_healthStore;
    HKSampleType *_sampleType;
    NSPredicate *_predicate;
    HKAnchoredObjectQuery *_query;
    HKQueryAnchor *_queryAnchor;
    NSMutableArray *_samples;
}

@property (copy, nonatomic) id /* block */ updateHandler;
@property (nonatomic) BOOL sortStartDateAscending;

- (void)execute;
- (id)initWithHealthStore:(id)a0 sampleType:(id)a1 predicate:(id)a2 resultsHandler:(id /* block */)a3;
- (void)setupQueryWithCompletionHandler:(id /* block */)a0;
- (id)initWithHealthStore:(id)a0 sampleType:(id)a1 predicate:(id)a2 completionHandler:(id /* block */)a3 updateHandler:(id /* block */)a4;
- (void)handleAddedObjects:(id)a0 deletedObjects:(id)a1 queryAnchor:(id)a2 error:(id)a3 resultsHandler:(id /* block */)a4;
- (id)initWithHealthStore:(id)a0 sampleType:(id)a1 predicate:(id)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;
- (void)stop;

@end
