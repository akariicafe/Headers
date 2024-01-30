@class NSError, NSString, EKDirectorySearchQuery;

@interface EKDirectorySearchOperation : NSOperation {
    BOOL _isFinished;
    BOOL _isExecuting;
    NSString *_accountID;
    EKDirectorySearchQuery *_query;
    id /* block */ _resultsBlock;
    id _searchID;
}

@property (nonatomic) BOOL numberOfMatchesExceededLimit;
@property (retain, nonatomic) NSError *error;

+ (BOOL)isSupported;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)_finishWithError:(id)a0;
- (void)main;
- (id)_recordTypes;
- (void)_processResults:(id)a0;
- (BOOL)isExecuting;
- (id)_processGroupsInResults:(id)a0;
- (id)_processLocationsInResults:(id)a0;
- (id)_processResourcesInResults:(id)a0;
- (id)_processPeopleInResults:(id)a0;
- (id)initWithSource:(id)a0 query:(id)a1 resultsBlock:(id /* block */)a2;
- (BOOL)isFinished;
- (void)start;
- (BOOL)isConcurrent;

@end
