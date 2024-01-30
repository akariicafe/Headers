@class CNGeminiManager, CNHealthStoreManager, CNUICoreRecentsManager, CNContactsEnvironment, CNUIExternalComponentsFactory, CNUIMeContactMonitor, CNUIUserActivityManager, CNCollation, CNContactChangesNotifier, CNContactStore, CNFavorites, CNUIIDSAvailabilityProvider, CNUISchedulerProvider;
@protocol CNUILikenessRendering, CNUIApplicationLaunchCheckin, CNUIDefaultUserActionFetcher, CNUIUserActionDiscoveringEnvironment, CNUIPlaceholderProviderFactory, CNLSApplicationWorkspace, CNCapabilities, CNUIPRLikenessResolver;

@interface CNUIContactsEnvironment : NSObject

@property (retain, nonatomic) CNUISchedulerProvider *defaultSchedulerProvider;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) CNContactStore *inProcessContactStore;
@property (retain, nonatomic) CNFavorites *inProcessFavorites;
@property (retain, nonatomic) CNUIUserActivityManager *inProcessActivityManager;
@property (retain, nonatomic) id<CNUIPlaceholderProviderFactory> placeholderProviderFactory;
@property (retain, nonatomic) CNUIMeContactMonitor *meMonitor;
@property (retain, nonatomic) id<CNUIPRLikenessResolver> cachingLikenessResolver;
@property (retain, nonatomic) id<CNUILikenessRendering> cachingLikenessRenderer;
@property (retain, nonatomic) id<CNUILikenessRendering> cachingMonogramRenderer;
@property (retain, nonatomic) id<CNUIUserActionDiscoveringEnvironment> actionDiscoveringEnvironment;
@property (retain, nonatomic) CNUIIDSAvailabilityProvider *idsAvailabilityProvider;
@property (retain, nonatomic) id<CNLSApplicationWorkspace> applicationWorkspace;
@property (retain, nonatomic) id<CNCapabilities> capabilities;
@property (retain, nonatomic) id<CNUIDefaultUserActionFetcher> defaultUserActionFetcher;
@property (retain, nonatomic) CNContactChangesNotifier *contactChangesNotifier;
@property (retain, nonatomic) CNUICoreRecentsManager *recentsManager;
@property (retain, nonatomic) CNUIExternalComponentsFactory *componentsFactory;
@property (nonatomic) struct UCollator { } *sortCollator;
@property (retain, nonatomic) CNCollation *collation;
@property (retain, nonatomic) CNHealthStoreManager *healthStoreManager;
@property (retain, nonatomic) CNGeminiManager *geminiManager;
@property (readonly, nonatomic) CNContactsEnvironment *cnEnvironment;
@property (retain, nonatomic) id<CNUIApplicationLaunchCheckin> launchCheckinRegistrar;
@property (readonly, nonatomic) BOOL runningInContactsAppOniPad;

+ (id)makeCurrentEnvironment;
+ (id)currentEnvironment;

- (id)nts_lazyCachingLikenessResolver;
- (struct UCollator { } *)nts_lazySortCollator;
- (id)nts_lazyHealthStoreManager;
- (id)nts_makeCachingLikenessResolver;
- (id)nts_lazyIDSAvailabilityProvider;
- (id)nts_lazyActionDiscoveringEnvironment;
- (id)nts_lazyCachingMonogramRenderer;
- (id)nts_makeRecentsManager;
- (id)nts_lazyCollation;
- (id)nts_lazyPlaceholderProviderFactory;
- (id)initWithContactsEnvironment:(id)a0;
- (id)nts_lazyCapabilities;
- (id)nts_lazyContactStore;
- (id)nts_lazyRecentsManager;
- (id)nts_lazyComponentsFactory;
- (id)nts_lazyInProcessActivityManager;
- (id)nts_makeActionDiscoveringEnvironment;
- (void)dealloc;
- (id)nts_lazyGeminiManager;
- (id)nts_lazyDefaultUserActionFetcher;
- (id)nts_lazyInProcessFavorites;
- (id)init;
- (id)nts_makeContactChangesNotifier;
- (id)nts_lazyContactChangesNotifier;
- (id)nts_lazyDefaultSchedulerProvider;
- (id)nts_lazyInProcessContactStore;
- (void).cxx_destruct;
- (id)nts_lazyCachingLikenessRenderer;
- (id)nts_lazyApplicationWorkspace;

@end
