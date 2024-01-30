@class NSMutableDictionary, NSString, NSLock, NSUserDefaults;

@interface MorphunAssets : NSObject

@property (retain, nonatomic) NSUserDefaults *subscriptionCache;
@property (retain, nonatomic) NSMutableDictionary *subscriptionView;
@property (retain) NSLock *subscriptionViewLock;
@property (retain, nonatomic) NSString *subscriptionProcessKey;
@property (retain) NSMutableDictionary *readyLanguages;

+ (void)onDemandDownloadForLocale:(id)a0 withProgress:(id /* block */)a1 withCompletion:(id /* block */)a2;
+ (id)get;
+ (BOOL)isLocaleDownloadSupported:(id)a0;
+ (id)bcpStringForComponentArray:(id)a0;
+ (id)getAssetForFactorName:(id)a0;
+ (void)removeAssetForLanguageCode:(id)a0 withCompletion:(id /* block */)a1;
+ (void)removeAssetForLocale:(id)a0 withCompletion:(id /* block */)a1;
+ (id)EmbeddedVersion;
+ (void)registerForTRINamespaceUpdates;
+ (id)MorphunDomain;
+ (id)blockingOnDemandDownloadForLocale:(id)a0 withTimeout:(unsigned long long)a1 withProgress:(id /* block */)a2;
+ (id)EmbeddedLocales;
+ (id)componentArrayForLocale:(id)a0;
+ (id)getAssetForLocale:(id)a0;
+ (id)getCurrentNamespaceName;
+ (id)getAssetPathForCurrentSiriLanguage;
+ (id)subscriptionDbInitializerWithKey:(id)a0;
+ (id)validateLocale:(id)a0;
+ (void)MorphunAssetsLazyInitIfNeeded;
+ (id)blockingRemoveAssetForLocale:(id)a0 withTimeout:(unsigned long long)a1;
+ (id)blockingOnDemandDownloadForLanguageCode:(id)a0 withTimeout:(unsigned long long)a1 withProgress:(id /* block */)a2;
+ (void)onDemandDownloadForLanguageCode:(id)a0 withProgress:(id /* block */)a1 withCompletion:(id /* block */)a2;
+ (long long)deliveryMethodForLocale:(id)a0;
+ (id)EmbeddedLanguages;
+ (id)getAssetPathForLanguageCode:(id)a0;
+ (id)blockingRemoveAssetForLanguageCode:(id)a0 withTimeout:(unsigned long long)a1;
+ (long long)getCurrentNamespace;
+ (id)SupportedLanguages;
+ (id)getFactorNameForLocale:(id)a0;
+ (id)SupportedLocales;
+ (id)getAssetForLanguageCode:(id)a0;
+ (id)bcpStringForLocale:(id)a0;
+ (void)setTrialNamespaceToUse:(long long)a0;
+ (BOOL)validateLanguageCode:(id)a0;
+ (id)uLocaleToNSLocale:(const void *)a0;
+ (BOOL)isLanguageEmbedded:(id)a0;
+ (id)getTRINamespaceName;
+ (void)initForSiriX:(id /* block */)a0;
+ (void)downloadFactors:(id)a0 withProgress:(id /* block */)a1 withCompletion:(id /* block */)a2;
+ (BOOL)isLocaleEmbedded:(id)a0;
+ (id)getTRIClient;
+ (id)getAssetPathForLocale:(id)a0 withError:(id *)a1;
+ (id)getFactorSuffixForLocale:(id)a0;
+ (id)getAssetPathForLocale:(id)a0;
+ (id)getFactorNameForLanguageCode:(id)a0;

- (void)unsubscribeFromLocale:(id)a0;
- (void)downloadLocaleIfNeeded:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)isSubscribedToLocale:(id)a0;
- (void)writeSubscriptionView;
- (void)setLanguageReadinessFromTrial;
- (void)removeLanguageIfNeeded:(id)a0;
- (id)getMorphunDataPathForLocale:(id)a0 withError:(id *)a1;
- (id)getMorphunDataPathForLocale:(id)a0;
- (id)init;
- (void)subscribeToLocale:(id)a0 withCompletion:(id /* block */)a1;
- (id)referenceCountsFromSubscriptionView;
- (void)readSubscriptionView;
- (id)listSubscriptions;
- (id)processSubscriptions;
- (BOOL)isAssetReadyForLocale:(id)a0;
- (void).cxx_destruct;

@end
