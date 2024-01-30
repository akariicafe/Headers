@class NSString, SBKTransaction;

@interface SBKStoreError : NSError

@property (retain) SBKTransaction *transaction;
@property (readonly) BOOL isAuthenticationError;
@property (readonly) BOOL isAccountsChangedError;
@property (readonly) BOOL isRecoverableError;
@property (readonly) BOOL isClampError;
@property (readonly) BOOL isTransactionCancelledError;
@property (readonly) BOOL isTransactionMissingInformationError;
@property (readonly, copy) NSString *previousStoreAccountName;
@property (readonly, copy) NSString *currentStoreAccountName;
@property (readonly) double retrySeconds;

+ (id)userClampErrorWithTransaction:(id)a0 retrySeconds:(double)a1 underlyingError:(id)a2;
+ (id)serverClampErrorWithTransaction:(id)a0 retrySeconds:(double)a1 underlyingError:(id)a2;
+ (id)networkingBlockedErrorWithTransaction:(id)a0 underlyingError:(id)a1;
+ (id)keyValueStoreDisabledErrorWithTransaction:(id)a0 underlyingError:(id)a1;
+ (id)noStoreAccountErrorWithTransaction:(id)a0 underlyingError:(id)a1;
+ (id)transactionCancelledErrorWithTransaction:(id)a0 underlyingError:(id)a1;
+ (id)transactionCancelledErrorWithTransaction:(id)a0 code:(long long)a1 underlyingError:(id)a2;
+ (id)storeGenericErrorWithTransaction:(id)a0 underlyingError:(id)a1;
+ (id)killSwitchErrorWithTransaction:(id)a0 underlyingError:(id)a1;
+ (id)storeValidationErrorWithTransaction:(id)a0 underlyingError:(id)a1;
+ (id)storeAccountSessionExpiredWithTransaction:(id)a0 underlyingError:(id)a1;
+ (id)unknownErrorWithTransaction:(id)a0 underlyingError:(id)a1;
+ (id)delegateCancelledErrorWithTransaction:(id)a0 underlyingError:(id)a1;
+ (id)userCancelledSignInErrorWithTransaction:(id)a0 underlyingError:(id)a1;
+ (id)userEnteredWrongCredentialsErrorWithTransaction:(id)a0 underlyingError:(id)a1;
+ (id)keyValueStoreErrorWithCode:(long long)a0 localizedDescription:(id)a1 transaction:(id)a2 underlyingError:(id)a3;
+ (id)storeLoggedOutErrorWithPreviousStoreAccountName:(id)a0 transaction:(id)a1 underlyingError:(id)a2;
+ (id)storeAccountMismatchErrorWithPreviousStoreAccountName:(id)a0 currentStoreAccountName:(id)a1 transaction:(id)a2 underlyingError:(id)a3;
+ (id)transactionMissingDomainErrorWithTransaction:(id)a0 underlyingError:(id)a1;
+ (id)transactionMissingURLErrorWithTransaction:(id)a0 underlyingError:(id)a1;
+ (id)transactionTimeoutErrorWithTransaction:(id)a0 underlyingError:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;

@end
