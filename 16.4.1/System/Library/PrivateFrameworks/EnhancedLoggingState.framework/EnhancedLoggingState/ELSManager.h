@class ELSSnapshot, NSUserDefaults;

@interface ELSManager : NSObject

@property (retain, nonatomic) ELSSnapshot *snapshot;
@property (retain, nonatomic) NSUserDefaults *defaults;

+ (id)sharedManager;

- (void)finish;
- (void)flushWithCompletion:(id /* block */)a0;
- (void)flush;
- (void)finishWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)refreshWithCompletion:(id /* block */)a0;
- (id)initSingleton;
- (void).cxx_destruct;
- (void)beginUpdates;
- (void)transactionWithBlock:(id /* block */)a0;
- (BOOL)object:(id)a0 isEqualToObject:(id)a1;
- (BOOL)commitSessionDeviceTransaction:(id)a0;
- (void)commitBatchTransaction:(id)a0;
- (BOOL)commitConsentDataTransaction:(id)a0;
- (BOOL)commitConsentHandlesTransaction:(id)a0;
- (BOOL)commitConsentTransaction:(id)a0;
- (BOOL)commitDatesTransaction:(id)a0;
- (BOOL)commitFollowUpOptions:(id)a0;
- (BOOL)commitIdentifiersToRetryTransaction:(id)a0;
- (BOOL)commitMetadataTransaction:(id)a0;
- (BOOL)commitQueueTransaction:(id)a0;
- (BOOL)commitRetriesRemainingTransaction:(id)a0;
- (BOOL)commitStatusTransaction:(id)a0;
- (BOOL)commitUploadCompletedPercentage:(id)a0;
- (void)finishWithFailure;
- (void)finishWithFailureBlock:(id /* block */)a0;
- (void)getBugSessionActivityWithCompletion:(id /* block */)a0;
- (void)transactionWithBlock:(id /* block */)a0 completion:(id /* block */)a1;

@end
