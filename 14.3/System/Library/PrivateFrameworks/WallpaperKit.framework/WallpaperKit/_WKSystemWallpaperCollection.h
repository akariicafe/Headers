@class NSUUID, NSBundle, NSString, NSURL;

@interface _WKSystemWallpaperCollection : WKWallpaperCollection

@property (readonly, nonatomic, getter=isLegacyContent) BOOL legacyContent;
@property (copy, nonatomic) NSUUID *_identifier;
@property (retain, nonatomic) NSBundle *_bundleForLocalizationResources;
@property (copy, nonatomic) NSString *displayNameKey;
@property (readonly, nonatomic) NSURL *wallpaperCollectionURL;

+ (id)dynamicWallpaperCollection;
+ (id)_createTemporaryWallpaperCollectionWithImage:(id)a0 videoAssetURL:(id)a1 wallpaperOptions:(id)a2 error:(id *)a3;
+ (BOOL)shouldLoadWallpaperCollectionAtURL:(id)a0;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)identifier;
- (id)displayName;
- (long long)numberOfWallpapers;
- (void)_raiseInvalidMetadataExceptionForMetadataKeypath:(id)a0;
- (void)_loadCollectionContents;
- (void)_loadSystemContentForCollectionWithMetadata:(id)a0 isLegacyContent:(BOOL)a1;
- (BOOL)isDynamicCollection;
- (id)wallpaperBundleAtIndex:(long long)a0;
- (BOOL)containsWallpaperRepresentingWithIdentifier:(id)a0;
- (id)wallpaperRepresentingWithIdentifier:(id)a0;

@end
