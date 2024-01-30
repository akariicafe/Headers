@class ELSSnapshot, NSUserDefaults;

@interface ELSManager : NSObject

@property (retain, nonatomic) ELSSnapshot *snapshot;
@property (retain, nonatomic) NSUserDefaults *defaults;

+ (id)sharedManager;

- (void)finish;
- (void)beginUpdates;
- (void).cxx_destruct;
- (void)dealloc;
- (void)transactionWithBlock:(id /* block */)a0;
- (void)flush;
- (void)finishWithCompletion:(id /* block */)a0;
- (void)refreshWithCompletion:(id /* block */)a0;
- (void)flushWithCompletion:(id /* block */)a0;
- (id)initSingleton;
- (void)transactionWithBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)commitBatchTransaction:(id)a0;
- (BOOL)commitStatusTransaction:(id)a0;
- (BOOL)commitConsentTransaction:(id)a0;
- (BOOL)commitDatesTransaction:(id)a0;
- (BOOL)commitQueueTransaction:(id)a0;
- (BOOL)commitRetriesRemainingTransaction:(id)a0;
- (BOOL)commitIdentifiersToRetryTransaction:(id)a0;
- (BOOL)commitMetadataTransaction:(id)a0;
- (BOOL)commitUploadCompletedPercentage:(id)a0;
- (BOOL)commitFollowUpOptions:(id)a0;
- (BOOL)object:(id)a0 isEqualToObject:(id)a1;
- (void)getBugSessionActivityWithCompletion:(id /* block */)a0;

@end
