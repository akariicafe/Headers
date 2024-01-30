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

- (BOOL)isConcurrent;
- (BOOL)isFinished;
- (void)_finishWithError:(id)a0;
- (void)start;
- (BOOL)isExecuting;
- (void)main;
- (void).cxx_destruct;
- (id)init;
- (id)_recordTypes;
- (void)cancel;
- (void)_processResults:(id)a0;
- (id)_processResults:(id)a0 class:(Class)a1;
- (id)initWithSource:(id)a0 query:(id)a1 resultsBlock:(id /* block */)a2;

@end
