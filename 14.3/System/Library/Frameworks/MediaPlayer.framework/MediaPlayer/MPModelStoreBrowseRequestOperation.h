@class NSMapTable, NSOperationQueue, NSOperation, NSObject;
@protocol OS_dispatch_group;

@interface MPModelStoreBrowseRequestOperation : MPStoreModelRequestOperation {
    BOOL _didInitializeTimeoutIntervalAdditions;
    BOOL _errorReportingDisabled;
    NSOperation *_individualPendingNestedRequestOperation;
    NSObject<OS_dispatch_group> *_nestedRequestOperationsGroup;
    NSOperationQueue *_nestedRequestsOperationQueue;
    unsigned long long _requestType;
    NSMapTable *_sectionsToPendingNestedRequestOperations;
    double _timeoutIntervalAdditions;
}

- (void)cancel;
- (void)_produceCarPlayResponseWithParser:(id)a0 withNestedRequestsForEmptyBrickSectionsInOperationQueue:(id)a1 completion:(id /* block */)a2;
- (id)configurationForLoadingModelDataWithStoreBagDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)execute;
- (void)produceResponseWithLoadedOutput:(id)a0 completion:(id /* block */)a1;
- (id)_nestedRequestsOperationQueue;
- (double)adjustTimeoutInterval:(double)a0;
- (void)_produceRegularResponseWithParser:(id)a0 completion:(id /* block */)a1;
- (void)_produceResponseWithParser:(id)a0 results:(id)a1 changeDetails:(id)a2 completion:(id /* block */)a3;

@end
