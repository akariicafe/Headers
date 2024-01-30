@class NSString, EKDirectorySearchResultSet, EKDirectoryGroup;

@interface EKGroupExpansionOperation : NSOperation {
    BOOL _isFinished;
    BOOL _isExecuting;
    NSString *_accountID;
    EKDirectoryGroup *_group;
    id /* block */ _completionBlock;
    EKDirectorySearchResultSet *_resultsSet;
}

- (BOOL)isConcurrent;
- (BOOL)isFinished;
- (void)_finishWithError:(id)a0;
- (void)start;
- (BOOL)isExecuting;
- (void)main;
- (void).cxx_destruct;
- (id)initWithSource:(id)a0 group:(id)a1 completionBlock:(id /* block */)a2;
- (void)_processResults:(id)a0;
- (id)_processResults:(id)a0 class:(Class)a1;

@end
