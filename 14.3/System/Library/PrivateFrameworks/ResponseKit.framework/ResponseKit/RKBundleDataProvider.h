@class NSBundle, NSMutableDictionary, NSURL, RKAssets;

@interface RKBundleDataProvider : NSObject <RKDisplayStringsProvider, RKPolarityDataProvider>

@property (readonly) NSBundle *bundle;
@property (readonly) RKAssets *assets;
@property (readonly) NSURL *assetPlistURL;
@property (readonly) NSMutableDictionary *displayStringsByPlatformByLanguage;
@property (readonly) NSMutableDictionary *polarityMapsByLanguageID;
@property (retain) NSMutableDictionary *localizationsByLanguageID;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBundle:(id)a0;
- (id)displayStringsForPlatform:(id)a0 languageID:(id)a1;
- (id)initWithAssetPlist:(id)a0;
- (id)stringsFromTable:(id)a0 forLanguageIdentifier:(id)a1;

@end
