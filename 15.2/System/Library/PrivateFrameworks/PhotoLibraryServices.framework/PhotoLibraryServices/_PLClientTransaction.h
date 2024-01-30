@class NSString, NSSet, NSObject;
@protocol OS_dispatch_semaphore;

@interface _PLClientTransaction : PLClientServerTransaction {
    NSSet *_changeScopes;
    long long _addChangeScopesBatch;
    NSSet *_batchScopes;
}

@property (nonatomic) int fileDescriptor;
@property (retain, nonatomic) id processAssertion;
@property (retain, nonatomic) NSString *path;
@property (weak, nonatomic) NSObject<OS_dispatch_semaphore> *fdResourceSemaphore;
@property (copy) NSString *changeScopesDescriptionSnapshot;

+ (id)_fdResourceSemaphore;
+ (id)_fdIsolationQueue;

- (id)initWithPathManager:(id)a0;
- (void)persistTransactionScopes:(id)a0;
- (void)pushChangeScopesBatch;
- (id)generateChangeScopesDescription;
- (void)completeTransaction;
- (void)addChangeScopes:(id)a0;
- (id)description;
- (void)_updateChangeScopesDescriptionSnapshot;
- (void).cxx_destruct;
- (void)popChangeScopesBatch;
- (BOOL)isClientTransaction;
- (void)abortTransaction;
- (void)completeTransactionScope:(id)a0;
- (void)dealloc;
- (id)changeScopes;

@end
