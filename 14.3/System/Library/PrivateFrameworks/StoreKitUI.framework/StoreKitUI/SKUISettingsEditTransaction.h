@class NSSet, NSLock, NSMutableSet;
@protocol SKUISettingsEditTransactionDelegate;

@interface SKUISettingsEditTransaction : NSObject {
    NSSet *_all;
    id /* block */ _commitBlock;
    NSLock *_lock;
    NSMutableSet *_pending;
    BOOL _success;
}

@property (weak, nonatomic) id<SKUISettingsEditTransactionDelegate> delegate;

- (void)beginTransaction;
- (void).cxx_destruct;
- (void)rollbackTransaction;
- (BOOL)isValid;
- (void)commitTransaction;
- (BOOL)isCommiting;
- (void)cancelTransaction;
- (id)initWithSettingDescriptions:(id)a0;
- (void)_delegateWillBeginTransaction;
- (void)_delegateDidFailTransaction;
- (void)_delegateWillCommitTransaction;
- (void)_settingDescription:(id)a0 completedWithSuccess:(BOOL)a1;
- (void)_delegateDidCompleteTransaction;
- (void)_finalizeCommit;

@end
