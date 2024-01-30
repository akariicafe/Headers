@class SSAccount;

@interface SBKStoreAuthenticationController : NSObject

@property (readonly, nonatomic) SSAccount *storeAccount;
@property (nonatomic) BOOL shouldAuthenticate;

+ (id)lastSyncedAccountIdentifier;
+ (id)lastSyncedAccountName;
+ (void)clearLastSyncnedAccount;
+ (id)lastFailedSyncAccountIdentifier;
+ (id)lastFailedSyncAccountName;

- (void).cxx_destruct;
- (id)initWithStoreAccount:(id)a0;
- (BOOL)isAuthenticationValidForTransaction:(id)a0 error:(id *)a1;
- (BOOL)shouldForceAuthenticationForTransaction:(id)a0;
- (id)authenticationErrorsForTransaction:(id)a0;
- (void)saveAccountToLastSyncedDefaults;
- (void)saveAccountToLastFailedSyncDefaults;

@end
