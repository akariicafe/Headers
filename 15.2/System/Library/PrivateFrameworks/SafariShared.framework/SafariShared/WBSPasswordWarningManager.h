@class NSString, WBSSavedPasswordAuditor, WBSPasswordBreachHelperProxy, NSArray, WBSPasswordWarningTopFraudTargetsManager, WBSPasswordEvaluator, WBSSavedPasswordStore, WBSHistory, NSObject, NSMutableSet, NSUserDefaults, NSMapTable;
@protocol OS_dispatch_queue;

@interface WBSPasswordWarningManager : NSObject <WBSRemotePlistControllerDelegate> {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    WBSHistory *_historyStore;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _passwordEvaluatorLock;
    WBSPasswordEvaluator *_passwordEvaluator;
    WBSSavedPasswordStore *_passwordStore;
    NSUserDefaults *_userDefaults;
    WBSPasswordWarningTopFraudTargetsManager *_topFraudTargetsManager;
    WBSPasswordBreachHelperProxy *_passwordBreachHelperProxy;
    NSMutableSet *_historyHighLevelDomains;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cachedDataLock;
    BOOL _updateInProgress;
    NSArray *_cachedWarnings;
    NSMapTable *_cachedWarningsForSavedPasswords;
}

@property (readonly, nonatomic) WBSSavedPasswordAuditor *passwordAuditor;
@property (readonly, nonatomic) WBSPasswordEvaluator *passwordEvaluator;
@property (readonly, nonatomic) long long numberOfWarningsWithSpecifiedPriority;
@property (readonly, nonatomic) BOOL hasUnacknowledgedHighPriorityWarnings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)getAllWarningsForcingUpdate:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)_getBreachResultRecordsForPasswords:(id)a0 startSessionIfNecessary:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (id)_scoredWarningForSavedPassword:(id)a0 topFraudTargets:(id)a1 contextKitCategories:(long long)a2 breachResultRecord:(id)a3;
- (void)_scoreWarnings:(id)a0 contextKitCategoryMap:(id)a1 topFraudTargets:(id)a2;
- (void)_sortWarningsBySeverity:(id)a0 intoHighPriorityBucket:(id)a1 intoStandardPriorityBucket:(id)a2 unspecifiedSeverityBucket:(id)a3 savedPasswordMap:(id)a4 highPriorityWarningHashes:(id)a5;
- (void)_updateUserDefaultsWithWarningHashes:(id)a0;
- (unsigned long long)_issuesForPassword:(id)a0 withWeakPasswordEvaluation:(id)a1 breachResultRecord:(id)a2;
- (id)_warningForSavedPassword:(id)a0 breachResultRecord:(id)a1;
- (long long)_scoreForSavedPassword:(id)a0 issueTypes:(unsigned long long)a1 topFraudTargets:(id)a2 contextKitCategories:(long long)a3;
- (BOOL)_historyContainsItemForDomain:(id)a0;
- (id)_passwordBreachHelperProxy;
- (id)initWithSavedPasswordStore:(id)a0 autoFillQuirksManager:(id)a1 userDefaults:(id)a2 history:(id)a3;
- (void)preWarmWarningsWithCompletionHandler:(id /* block */)a0;
- (void)getWarningForSavedPassword:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeWarningForSavedPassword:(id)a0;
- (void)acknowledgeHighPriorityWarnings;

@end
