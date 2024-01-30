@class NSDictionary, WKWallpaperRepresentingCollectionsManager, WKWallpaperBundle;

@interface WKDefaultWallpaperManager : NSObject

@property (class, readonly, nonatomic) WKDefaultWallpaperManager *defaultWallpaperManager;

@property (retain, nonatomic) NSDictionary *_defaultWallpaperLookup;
@property (retain, nonatomic) WKWallpaperRepresentingCollectionsManager *_collectionsManager;
@property (retain, nonatomic) WKWallpaperBundle *_defaultWallpaperBundle;

+ (id)defaultWallpaperLookupURL;

- (id)deviceColor;
- (id)deviceProductType;
- (id)deviceEnclosureColor;
- (void).cxx_destruct;
- (id)defaultWallpaperBundle;
- (void)_loadDefaultWallpaperFile;
- (void)_loadDefaultWallpaperInformation;
- (id)_wallpaperRepresentingWithIdentifier:(id)a0;
- (id)deviceLogicalScreenClass;
- (id)initWithCollectionsManager:(id)a0;

@end
