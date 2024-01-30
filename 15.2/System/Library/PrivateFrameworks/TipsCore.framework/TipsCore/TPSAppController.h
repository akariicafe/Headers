@class NSHashTable, NSError, NSArray, TPSFullTipContentManager, NSDictionary, TPSAssetSizes, NSUserDefaults, TPSCollection;

@interface TPSAppController : NSObject

@property (retain, nonatomic) TPSCollection *featuredCollection;
@property (retain, nonatomic) NSError *lastFetchError;
@property (retain, nonatomic) NSArray *collections;
@property (retain, nonatomic) NSDictionary *collectionMap;
@property (retain, nonatomic) NSDictionary *tipMap;
@property (retain, nonatomic) TPSFullTipContentManager *fullTipContentManager;
@property (retain, nonatomic) TPSAssetSizes *assetSizes;
@property (retain, nonatomic) NSHashTable *delegates;
@property (retain, nonatomic) NSUserDefaults *appGroupDefaults;
@property (nonatomic) BOOL alwaysShowIntro;
@property (nonatomic) BOOL contentHasLoaded;
@property (nonatomic) BOOL updatingContent;
@property (nonatomic) BOOL appInBackground;
@property (nonatomic) BOOL ignoreFeaturedCollection;
@property (readonly, nonatomic) NSArray *tips;

+ (id)sharedInstance;

- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void)updateContent;
- (void).cxx_destruct;
- (id)init;
- (void)networkStateDidChange:(BOOL)a0;
- (void)dealloc;
- (void)removeNotificationForIdentifier:(id)a0;
- (void)reloadAppGroupDefaults;
- (id)topFeatureCollectionFromCollections:(id)a0;
- (void)contentWillUpdate;
- (id)collectionStatusForCollection:(id)a0;
- (id)tipsForCollection:(id)a0;
- (id)assetConfigurationForAssets:(id)a0 language:(id)a1 userInterfaceStyle:(long long)a2 viewMode:(long long)a3;
- (id)collectionForIdentifier:(id)a0;
- (id)tipForIdentifier:(id)a0;
- (id)tipsForCollectionIdentifier:(id)a0;
- (void)tipIdentifierViewed:(id)a0;
- (void)collectionIdentifierViewed:(id)a0;

@end
