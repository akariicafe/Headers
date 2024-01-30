@class NSMutableDictionary, NSString, NSLock, NSUserDefaults;

@interface MorphunAssets : NSObject

@property (retain, nonatomic) NSUserDefaults *subscriptionCache;
@property (retain, nonatomic) NSMutableDictionary *subscriptionView;
@property (retain) NSLock *subscriptionViewLock;
@property (retain, nonatomic) NSString *subscriptionProcessKey;
@property (retain) NSMutableDictionary *readyLanguages;

+ (id)get;
+ (void)onDemandDownloadForLanguageCode:(id)a0 withProgress:(id /* block */)a1 withCompletion:(id /* block */)a2;
+ (id)blockingRemoveAssetForLanguageCode:(id)a0 withTimeout:(unsigned long long)a1;
+ (id)getAssetPathForLanguageCode:(id)a0;
+ (id)SupportedLanguages;
+ (void)setTrialNamespaceToUse:(long long)a0;
+ (id)EmbeddedLanguages;
+ (id)blockingOnDemandDownloadForLanguageCode:(id)a0 withTimeout:(unsigned long long)a1 withProgress:(id /* block */)a2;
+ (BOOL)isLanguageEmbedded:(id)a0;
+ (id)getAssetPathForLocale:(id)a0;
+ (id)getTRINamespaceName:(long long)a0;
+ (BOOL)validateLanguageCode:(id)a0;
+ (void)MorphunAssetsLazyInitIfNeeded;
+ (id)getTRIClient;
+ (id)getAssetForLanguageCode:(id)a0;
+ (id)getFactorNameForLanguageCode:(id)a0;
+ (id)getCurrentNamespaceName;
+ (void)removeAssetForLanguageCode:(id)a0 withCompletion:(id /* block */)a1;
+ (long long)getCurrentNamespace;
+ (id)MorphunDomain;
+ (id)SupportedLocales;
+ (id)EmbeddedLocales;
+ (BOOL)isLocaleEmbedded:(id)a0;
+ (id)EmbeddedVersion;
+ (id)getFactorNameForLocale:(id)a0;
+ (id)getAssetPathForCurrentSiriLanguage;
+ (id)blockingRemoveAssetForLocale:(id)a0 withTimeout:(unsigned long long)a1;
+ (void)removeAssetForLocale:(id)a0 withCompletion:(id /* block */)a1;
+ (void)onDemandDownloadForLocale:(id)a0 withProgress:(id /* block */)a1 withCompletion:(id /* block */)a2;
+ (id)blockingOnDemandDownloadForLocale:(id)a0 withTimeout:(unsigned long long)a1 withProgress:(id /* block */)a2;
+ (void)registerForTRINamespaceUpdates;
+ (id)subscriptionDbInitializerWithKey:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (BOOL)validateLocale:(id)a0;
- (void)writeSubscriptionView;
- (void)readSubscriptionView;
- (id)processSubscriptions;
- (void)setLanguageReadinessFromTrial;
- (id)referenceCountsFromSubscriptionView;
- (void)downloadLanguageIfNeeded:(id)a0 withCompletion:(id /* block */)a1;
- (void)removeLanguageIfNeeded:(id)a0;
- (void)subscribeToLocale:(id)a0 withCompletion:(id /* block */)a1;
- (void)unsubscribeFromLocale:(id)a0;
- (BOOL)isSubscribedToLocale:(id)a0;
- (BOOL)isAssetReadyForLocale:(id)a0;
- (id)listSubscriptions;
- (id)getMorphunDataPathForLocale:(id)a0;

@end
