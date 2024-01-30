@class NSString, SBKTransaction;

@interface SBKStoreError : NSError

@property (retain, nonatomic) SBKTransaction *transaction;
@property (readonly, nonatomic) BOOL isAuthenticationError;
@property (readonly, nonatomic) BOOL isAccountsChangedError;
@property (readonly, nonatomic) BOOL isRecoverableError;
@property (readonly, nonatomic) BOOL isClampError;
@property (readonly, nonatomic) BOOL isTransactionCancelledError;
@property (readonly, nonatomic) BOOL isTransactionMissingInformationError;
@property (readonly, copy, nonatomic) NSString *previousStoreAccountName;
@property (readonly, copy, nonatomic) NSString *currentStoreAccountName;
@property (readonly, nonatomic) double retrySeconds;

+ (id)unknownErrorWithTransaction:(id)a0 underlyingError:(id)a1;
+ (id)keyValueStoreDisabledErrorWithTransaction:(id)a0 underlyingError:(id)a1;
+ (id)networkingBlockedErrorWithTransaction:(id)a0 underlyingError:(id)a1;
+ (id)killSwitchErrorWithTransaction:(id)a0 underlyingError:(id)a1;
+ (id)storeLoggedOutErrorWithPreviousStoreAccountName:(id)a0 transaction:(id)a1 underlyingError:(id)a2;
+ (id)storeAccountMismatchErrorWithPreviousStoreAccountName:(id)a0 currentStoreAccountName:(id)a1 transaction:(id)a2 underlyingError:(id)a3;
+ (id)storeGenericErrorWithTransaction:(id)a0 underlyingError:(id)a1;
+ (id)storeValidationErrorWithTransaction:(id)a0 underlyingError:(id)a1;
+ (id)userCancelledSignInErrorWithTransaction:(id)a0 underlyingError:(id)a1;
+ (id)userEnteredWrongCredentialsErrorWithTransaction:(id)a0 underlyingError:(id)a1;
+ (id)noStoreAccountErrorWithTransaction:(id)a0 underlyingError:(id)a1;
+ (id)storeAccountSessionExpiredWithTransaction:(id)a0 underlyingError:(id)a1;
+ (id)transactionMissingDomainErrorWithTransaction:(id)a0 underlyingError:(id)a1;
+ (id)transactionMissingURLErrorWithTransaction:(id)a0 underlyingError:(id)a1;
+ (id)transactionTimeoutErrorWithTransaction:(id)a0 underlyingError:(id)a1;
+ (id)transactionCancelledErrorWithTransaction:(id)a0 underlyingError:(id)a1;
+ (id)delegateCancelledErrorWithTransaction:(id)a0 underlyingError:(id)a1;
+ (id)userClampErrorWithTransaction:(id)a0 retrySeconds:(double)a1 underlyingError:(id)a2;
+ (id)serverClampErrorWithTransaction:(id)a0 retrySeconds:(double)a1 underlyingError:(id)a2;
+ (id)keyValueStoreErrorWithCode:(long long)a0 localizedDescription:(id)a1 transaction:(id)a2 underlyingError:(id)a3;
+ (id)transactionCancelledErrorWithTransaction:(id)a0 code:(long long)a1 underlyingError:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
