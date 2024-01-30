@class NSError, NSHashTable, TPSFullTipContentManager, NSArray, NSMutableDictionary, NSDictionary, NSBundle, NSObject, TPSAssetSizes, NSUserDefaults, TPSCollection;
@protocol OS_dispatch_queue;

@interface TPSAppController : NSObject {
    unsigned long long _supportedInterfaceOrientations;
}

@property (nonatomic) BOOL alwaysShowIntro;
@property (nonatomic) long long userInterfaceStyle;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) NSBundle *frameworkBundle;
@property (retain, nonatomic) TPSCollection *featuredCollection;
@property (retain, nonatomic) NSError *lastFetchError;
@property (retain, nonatomic) NSArray *collections;
@property (retain, nonatomic) NSDictionary *collectionMap;
@property (retain, nonatomic) NSDictionary *tipMap;
@property (retain, nonatomic) TPSFullTipContentManager *fullTipContentManager;
@property (retain, nonatomic) TPSAssetSizes *assetSizes;
@property (retain, nonatomic) NSHashTable *delegates;
@property (retain, nonatomic) NSUserDefaults *appGroupDefaults;
@property (retain, nonatomic) NSMutableDictionary *attributedStringCacheMap;
@property (nonatomic) BOOL contentHasLoaded;
@property (nonatomic) BOOL updatingContent;
@property (nonatomic) BOOL appInBackground;
@property (readonly, nonatomic) NSArray *tips;

+ (id)sharedInstance;

- (void)removeDelegate:(id)a0;
- (void)updateContent;
- (void)networkStateDidChange:(BOOL)a0;
- (void)addDelegate:(id)a0;
- (void)contentSizeCategoryDidChange;
- (id)init;
- (id)imageNamed:(id)a0;
- (void)reloadAppGroupDefaults;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateWithDeviceMeta;
- (id)topFeatureCollectionFromCollections:(id)a0;
- (void)resetAttributedStringCache;
- (id)tipsForCollection:(id)a0;
- (id)assetConfigurationForAssets:(id)a0 language:(id)a1 sizeClass:(long long)a2 userInterfaceStyle:(long long)a3;
- (id)attributedStringCacheForIdentifier:(id)a0;
- (void)updateAttributedStringCache:(id)a0 forIdentifier:(id)a1;
- (id)collectionForIdentifier:(id)a0;
- (id)tipForIdentifier:(id)a0;
- (id)tipsForCollectionIdentifier:(id)a0;
- (void)tipViewed:(id)a0;

@end
