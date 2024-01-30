@class NSNumber, NSCache, NSLock;

@interface ISBiometricStore : NSObject {
    NSCache *_contextCache;
    NSLock *_lock;
}

@property long long biometricState;
@property (readonly, getter=isBiometricStateEnabled) BOOL biometricStateEnabled;
@property (readonly) NSNumber *lastRegisteredAccountIdentifier;

+ (id)sharedInstance;
+ (id)countryCode;
+ (BOOL)shouldUseExtendedEnrollment;
+ (BOOL)shouldUseUpsellEnrollment;
+ (void)tokenUpdateDidFinishWithLogKey:(id)a0;
+ (BOOL)tokenUpdateShouldStartWithLogKey:(id)a0;
+ (long long)tokenUpdateState;
+ (id)keychainLabelForKeyWithAccountID:(id)a0 purpose:(long long)a1;
+ (id)applePayClassicNetworks;
+ (id)diskBasedPaymentSheet;
+ (BOOL)isActionSupported:(long long)a0 withBiometricAuthenticationContext:(id)a1;
+ (id)keychainLabelForAccountID:(id)a0 purpose:(long long)a1;
+ (id)keychainLabelForCertWithAccountID:(id)a0 purpose:(long long)a1;
+ (BOOL)shouldUseApplePayClassic;
+ (BOOL)shouldUseAutoEnrollment;
+ (BOOL)shouldUseX509;

- (id)init;
- (void).cxx_destruct;
- (BOOL)canPerformExtendedBiometricActionsForAccountIdentifier:(id)a0;
- (unsigned long long)keyCountForAccountIdentifier:(id)a0;
- (id)publicKeyDataForAccountIdentifier:(id)a0 purpose:(long long)a1 error:(id *)a2;
- (BOOL)canPerformBiometricOptIn;
- (unsigned long long)identityMapCount;
- (BOOL)isIdentityMapValidForAccountIdentifier:(id)a0;
- (long long)biometricAvailabilityForAccountIdentifier:(id)a0;
- (BOOL)deleteKeychainTokensForAccountIdentifier:(id)a0 error:(id *)a1;
- (void)addContextToCache:(id)a0 withToken:(id)a1;
- (void)clearLastRegisteredAccountIdentifier;
- (id)fetchContextFromCacheWithToken:(id)a0 evict:(BOOL)a1;
- (void)registerAccountIdentifier:(id)a0;
- (void)saveIdentityMapForAccountIdentifier:(id)a0;
- (id)createAttestationDataForAccountIdentifier:(id)a0 purpose:(long long)a1 error:(id *)a2;
- (id)createX509CertChainDataForAccountIdentifier:(id)a0 purpose:(long long)a1 error:(id *)a2;
- (id)signData:(id)a0 context:(id)a1 error:(id *)a2;
- (id)x509CertChainDataForAccountIdentifier:(id)a0 purpose:(long long)a1 regenerateCerts:(BOOL)a2 error:(id *)a3;

@end
