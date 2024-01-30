@class WBSPasswordBreachQueuedPasswordBagManager, WBSPasswordBreachContext, WBSPasswordBreachChecker, NSObject, WBSPasswordBreachResults;
@protocol OS_os_transaction, WBSPasswordBreachCredentialSource;

@interface WBSPasswordBreachManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_os_transaction> *_sessionTransaction;
    WBSPasswordBreachContext *_context;
    id<WBSPasswordBreachCredentialSource> _credentialSource;
    WBSPasswordBreachChecker *_checker;
    WBSPasswordBreachResults *_results;
    WBSPasswordBreachQueuedPasswordBagManager *_bagManager;
}

@property (class, nonatomic, getter=isPasswordBreachDetectionOn) BOOL passwordBreachDetectionOn;

+ (void)_getStandardContextWithCompletionHandler:(id /* block */)a0;
+ (id)testableManagerWithTestCredentialSource:(id)a0 store:(id)a1 configuration:(id)a2;
+ (void)getSharedManagerWithCompletionHandler:(id /* block */)a0;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0 credentialSource:(id)a1;
- (BOOL)_canPerformSessionIgnoringMinimumDelay:(BOOL)a0;
- (void)_completeSessionWithResults:(id)a0 completionHandler:(id /* block */)a1;
- (void)_addRecentlyBreachedNotificationIfNecessaryWithCompletionHandler:(id /* block */)a0;
- (id)recentlyBreachedSavedPasswords;
- (void)performNextSessionLookupIgnoringMinimumDelay:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)resultRecordsForQueries:(id)a0;
- (id)recentlyBreachedResultRecords;
- (void)clearRecentlyBreachedResultRecords;
- (void)addResultRecords:(id)a0;
- (id)_checker;

@end
