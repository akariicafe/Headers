@class NSNumber, NSCache, NSLock;

@interface ISBiometricStore : NSObject {
    NSCache *_contextCache;
    NSLock *_lock;
}

@property long long biometricState;
@property (readonly, getter=isBiometricStateEnabled) BOOL biometricStateEnabled;
@property (readonly) NSNumber *lastRegisteredAccountIdentifier;

+ (id)sharedInstance;
+ (BOOL)tokenUpdateShouldStartWithLogKey:(id)a0;
+ (BOOL)shouldUseAutoEnrollment;
+ (id)countryCode;
+ (long long)tokenUpdateState;
+ (void)tokenUpdateDidFinishWithLogKey:(id)a0;
+ (BOOL)shouldUseApplePayClassic;
+ (id)diskBasedPaymentSheet;
+ (BOOL)isActionSupported:(long long)a0 withBiometricAuthenticationContext:(id)a1;
+ (id)keychainLabelForCertWithAccountID:(id)a0 purpose:(long long)a1;
+ (id)keychainLabelForAccountID:(id)a0 purpose:(long long)a1;
+ (BOOL)shouldUseUpsellEnrollment;
+ (BOOL)shouldUseX509;
+ (id)applePayClassicNetworks;
+ (BOOL)shouldUseExtendedEnrollment;
+ (id)keychainLabelForKeyWithAccountID:(id)a0 purpose:(long long)a1;

- (BOOL)deleteKeychainTokensForAccountIdentifier:(id)a0 error:(id *)a1;
- (id)createX509CertChainDataForAccountIdentifier:(id)a0 purpose:(long long)a1 error:(id *)a2;
- (id)fetchContextFromCacheWithToken:(id)a0 evict:(BOOL)a1;
- (void)saveIdentityMapForAccountIdentifier:(id)a0;
- (id)signData:(id)a0 context:(id)a1 error:(id *)a2;
- (BOOL)isIdentityMapValidForAccountIdentifier:(id)a0;
- (long long)biometricAvailabilityForAccountIdentifier:(id)a0;
- (id)createAttestationDataForAccountIdentifier:(id)a0 purpose:(long long)a1 error:(id *)a2;
- (unsigned long long)identityMapCount;
- (unsigned long long)keyCountForAccountIdentifier:(id)a0;
- (BOOL)canPerformExtendedBiometricActionsForAccountIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)clearLastRegisteredAccountIdentifier;
- (id)x509CertChainDataForAccountIdentifier:(id)a0 purpose:(long long)a1 regenerateCerts:(BOOL)a2 error:(id *)a3;
- (BOOL)canPerformBiometricOptIn;
- (void)registerAccountIdentifier:(id)a0;
- (void)addContextToCache:(id)a0 withToken:(id)a1;
- (id)publicKeyDataForAccountIdentifier:(id)a0 purpose:(long long)a1 error:(id *)a2;

@end
