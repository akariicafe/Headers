@class SSAccount;

@interface SBKStoreAuthenticationController : NSObject

@property (readonly, nonatomic) SSAccount *storeAccount;
@property (nonatomic) BOOL shouldAuthenticate;

+ (id)lastFailedSyncAccountIdentifier;
+ (void)clearLastSyncnedAccount;
+ (id)lastFailedSyncAccountName;
+ (id)lastSyncedAccountIdentifier;
+ (id)lastSyncedAccountName;

- (void).cxx_destruct;
- (void)saveAccountToLastSyncedDefaults;
- (id)authenticationErrorsForTransaction:(id)a0;
- (id)initWithStoreAccount:(id)a0;
- (BOOL)isAuthenticationValidForTransaction:(id)a0 error:(id *)a1;
- (void)saveAccountToLastFailedSyncDefaults;
- (BOOL)shouldForceAuthenticationForTransaction:(id)a0;

@end
