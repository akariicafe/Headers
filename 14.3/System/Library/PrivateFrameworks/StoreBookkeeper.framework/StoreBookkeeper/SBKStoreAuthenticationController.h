@class SSAccount;

@interface SBKStoreAuthenticationController : NSObject

@property (readonly) SSAccount *storeAccount;
@property BOOL shouldAuthenticate;

+ (id)lastSyncedAccountIdentifier;
+ (id)lastSyncedAccountName;
+ (void)clearLastSyncnedAccount;
+ (id)lastFailedSyncAccountIdentifier;
+ (id)lastFailedSyncAccountName;

- (void).cxx_destruct;
- (id)initWithStoreAccount:(id)a0;
- (BOOL)isAuthenticationValidForTransaction:(id)a0 error:(id *)a1;
- (void)saveAccountToLastSyncedDefaults;
- (void)saveAccountToLastFailedSyncDefaults;
- (BOOL)shouldForceAuthenticationForTransaction:(id)a0;
- (id)authenticationErrorsForTransaction:(id)a0;

@end
