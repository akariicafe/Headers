@class NSString, ACAccountStore, NSObject;
@protocol OS_dispatch_queue;

@interface BUUserAccount : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *prewarmQueue;
@property (nonatomic) BOOL cachedIsPrimaryAccountManagedAppleID;
@property (nonatomic) BOOL cachedICloudValuesPrewarmed;
@property (nonatomic) BOOL cachedIsUserSignedInToiCloud;
@property (retain, nonatomic) NSString *cachedICloudIdentity;
@property (retain, nonatomic) NSString *cachedICloudAccountName;
@property (nonatomic) BOOL cachedIsGlobalICloudDriveSyncOptedIn;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (nonatomic) int tccNotifyToken;

+ (id)sharedInstance;
+ (id)storeAccountID;
+ (id)iCloudAccountName;
+ (id)storeAccountName;
+ (void)prewarm;
+ (BOOL)isUserSignedInToiCloud;
+ (BOOL)isUserSignedInToiTunes;
+ (id)storeFrontIdentifier;
+ (id)primaryAppleAccount;
+ (BOOL)isPrimaryAccountManagedAppleID;
+ (BOOL)isStoreAccountManagedAppleID;
+ (id)iCloudIdentity;
+ (BOOL)isGlobalICloudDriveSyncOptedIn;
+ (BOOL)detectedUserSwitchWithId:(id)a0 outSignedIn:(BOOL *)a1 outSignedOut:(BOOL *)a2 outAccountNumberChanged:(BOOL *)a3;
+ (id)lastUsedStoreAccountID;
+ (void)clearLastUsedStoreAccountID;
+ (void)updateLastUsedStoreAccountID;
+ (BOOL)isAccountModificationAllowed;
+ (void)clearCachedData;

- (id)init;
- (void).cxx_destruct;
- (id)_iCloudAccountName;
- (void)dealloc;
- (id)description;
- (void)_prewarmAsyncICloudValuesIfNeeded;
- (BOOL)_isPrimaryAccountManagedAppleID;
- (BOOL)_isUserSignedInToiCloud;
- (id)_iCloudIdentity;
- (BOOL)_isGlobalICloudDriveSyncOptedIn;
- (void)_clearCachedData;
- (BOOL)_evaluateIsPrimaryAccountManagedAppleIDForAccount:(id)a0;
- (BOOL)_evaluateIsUserSignedInToiCloudForAccount:(id)a0;
- (id)_evaluateICloudAccountNameForAccount:(id)a0;
- (id)_evaluateICloudIdentityForAccount:(id)a0;
- (BOOL)_evaluateIsGlobalICloudDriveSyncOptedInForAccount:(id)a0;
- (void)_cacheValues;
- (void)_prewarmICloudValuesIfNeeded;

@end
