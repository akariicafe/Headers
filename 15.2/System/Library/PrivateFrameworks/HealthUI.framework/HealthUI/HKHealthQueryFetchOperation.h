@class NSArray, HKHealthStore;

@interface HKHealthQueryFetchOperation : HKChartCacheFetchOperation {
    HKHealthStore *_healthStore;
    id /* block */ _clientCompletion;
    id /* block */ _fetchOperationManager;
}

@property (retain, nonatomic) NSArray *queries;

- (void)stopOperation;
- (void)completedWithResults:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)initWithHealthStore:(id)a0 operationDescription:(id)a1 completion:(id /* block */)a2;
- (void)startOperationWithCompletion:(id /* block */)a0;

@end
