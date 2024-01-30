@class NSString, SLInteractionHandler, SLHighlightsCache, NSArray, NSDate;
@protocol SLHighlightCenterDelegate, SLHighlightCenterAPIAdapting;

@interface SLHighlightCenter : NSObject <SLHighlightCacheDelegate>

@property (class, readonly, nonatomic) NSString *displayName;

@property (readonly, weak, nonatomic) id<SLHighlightCenterAPIAdapting> apiAdapterDelegate;
@property (retain, nonatomic) SLInteractionHandler *interactionHandler;
@property (readonly, nonatomic) int notificationTokenSettingsChanges;
@property (readonly, nonatomic) int notificationTokenAppSettingsChanges;
@property (retain, nonatomic) SLHighlightsCache *highlightsCache;
@property (readonly, copy, nonatomic) NSArray *highlights;
@property (readonly, nonatomic) double highlightsRankingScore;
@property (retain, nonatomic) NSString *variant;
@property (weak, nonatomic) id<SLHighlightCenterDelegate> delegate;
@property (readonly, nonatomic) double decay;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSDate *latestHighlightDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)SLVariantNewsToday;
+ (id)highlightCenterQueue;
+ (BOOL)shouldShowOnboardingShieldView;
+ (BOOL)isEnabled;
+ (id)rapportClient;
+ (BOOL)_bundleIDExistsInPreferences:(id)a0;
+ (id)SLVariantDefault;
+ (BOOL)_isShareWithYouEnabled;
+ (BOOL)_isShareWithYouOnboarded;
+ (void)shouldShowOnboardingShieldViewForNearbyDevice:(id /* block */)a0;
+ (void)_checkAndInitializeBundleIDToAppPreferences:(id)a0;
+ (BOOL)isAutomaticSharingEnabled;

- (void)_notifyAPIAdapterDelegateHighlightsChanged;
- (id)fetchAttributionsForHighlight:(id)a0;
- (id)fetchAttributionForAttributionIdentifier:(id)a0;
- (void)fetchHighlights:(id /* block */)a0;
- (void)_legacyNotifyDelegateDidAddHighlights;
- (void)updateHighlights;
- (id)_initWithAppIdentifier:(id)a0 apiAdapterDelegate:(id)a1;
- (void)_registerNotifications;
- (void)_legacyNotifyDelegateDidRemoveHighlights:(id)a0;
- (void)fetchHighlightsWithLimit:(unsigned long long)a0 completionBlock:(id /* block */)a1;
- (void)dealloc;
- (void)appEnablementStateChanged;
- (id)initWithAppIdentifier:(id)a0;
- (void)_fetchHighlightsWithLimit:(unsigned long long)a0 completionBlock:(id /* block */)a1;
- (id)init;
- (id)variantForHighlightsCache;
- (void)legacyDidAddHighlights;
- (void)runAfterInitialFetch:(id /* block */)a0 onQueue:(id)a1;
- (void)feedbackForHighlight:(id)a0 withType:(unsigned long long)a1;
- (void)feedbackForHighlight:(id)a0 withType:(unsigned long long)a1 completionBlock:(id /* block */)a2;
- (void)enablementStateChanged;
- (void).cxx_destruct;
- (id)appIdentifierForHighlightsCache;
- (void)legacyDidRemoveHighlights:(id)a0;
- (void)highlightsChanged;
- (id)initWithAppIdentifier:(id)a0 apiAdapterDelegate:(id)a1;

@end
