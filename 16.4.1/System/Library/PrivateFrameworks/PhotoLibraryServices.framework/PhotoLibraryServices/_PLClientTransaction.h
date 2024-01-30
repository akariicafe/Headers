@class NSString, NSSet, NSObject;
@protocol OS_dispatch_semaphore;

@interface _PLClientTransaction : PLClientServerTransaction {
    id _processAssertion;
    NSSet *_changeScopes;
    long long _addChangeScopesBatch;
    NSSet *_batchScopes;
}

@property (nonatomic) int fileDescriptor;
@property (retain, nonatomic) NSString *path;
@property (weak, nonatomic) NSObject<OS_dispatch_semaphore> *fdResourceSemaphore;
@property (copy) NSString *changeScopesDescriptionSnapshot;

+ (id)_fdIsolationQueue;
+ (id)_fdResourceSemaphore;

- (void)persistTransactionScopes:(id)a0;
- (void)abortTransaction;
- (void)completeTransactionScope:(id)a0;
- (void)pushChangeScopesBatch;
- (id)initWithPathManager:(id)a0;
- (void)dealloc;
- (id)changeScopes;
- (void)completeTransaction;
- (BOOL)isClientTransaction;
- (id)initWithPathManager:(id)a0 identifier:(const char *)a1;
- (void)_updateChangeScopesDescriptionSnapshot;
- (void)popChangeScopesBatch;
- (id)description;
- (void)addChangeScopes:(id)a0;
- (void).cxx_destruct;
- (id)generateChangeScopesDescription;

@end
