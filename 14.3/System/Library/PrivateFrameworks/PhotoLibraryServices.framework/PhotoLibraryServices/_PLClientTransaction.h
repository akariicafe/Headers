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
- (void).cxx_destruct;
- (void)completeTransactionScope:(id)a0;
- (id)changeScopes;
- (void)dealloc;
- (void)abortTransaction;
- (void)addChangeScopes:(id)a0;
- (id)description;
- (id)generateChangeScopesDescription;
- (void)completeTransaction;
- (void)persistTransactionScopes:(id)a0;
- (void)pushChangeScopesBatch;
- (void)_updateChangeScopesDescriptionSnapshot;
- (BOOL)isClientTransaction;
- (void)popChangeScopesBatch;

@end
