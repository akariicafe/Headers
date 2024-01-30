@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface INIntentSummaryCache : NSObject <LSApplicationWorkspaceObserverProtocol>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *resourceAccessQueue;
@property (readonly, nonatomic) NSMutableDictionary *allBundlesCache;
@property (readonly, nonatomic) int systemLanguageChangeNotificationToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCache;

- (void)invalidateCache;
- (void)applicationsDidInstall:(id)a0;
- (void)stopAutomaticInvalidation;
- (id)bundleCacheForBundleId:(id)a0;
- (void)setTitle:(id)a0 forIntent:(id)a1 languageCode:(id)a2;
- (void)invalidateCacheForBundleId:(id)a0;
- (id)cachedSummaryForIntent:(id)a0 languageCode:(id)a1 creatingIfNeeded:(BOOL)a2;
- (BOOL)getSubtitle:(id *)a0 forIntent:(id)a1 languageCode:(id)a2;
- (void)setBundleCache:(id)a0 forBundleId:(id)a1;
- (void)dealloc;
- (void)startObservingSystemLanguageChanges;
- (void)startAutomaticInvalidation;
- (void)setSubtitle:(id)a0 forIntent:(id)a1 languageCode:(id)a2;
- (void)startObservingApplicationWorkspaceChanges;
- (void)stopObservingApplicationWorkspaceChanges;
- (id)init;
- (void)stopObservingSystemLanguageChanges;
- (BOOL)getTitle:(id *)a0 forIntent:(id)a1 languageCode:(id)a2;
- (void).cxx_destruct;

@end
