@class WKWallpaperBundle, NSDictionary, WKWallpaperCollectionsManager, WKWallpaperCollection;

@interface WKDefaultWallpaperManager : NSObject

@property (class, readonly, nonatomic) WKDefaultWallpaperManager *defaultWallpaperManager;

@property (retain, nonatomic) NSDictionary *_defaultWallpaperLookup;
@property (retain, nonatomic) WKWallpaperCollectionsManager *_collectionsManager;
@property (retain, nonatomic) WKWallpaperCollection *_defaultWallpaperCollection;
@property (retain, nonatomic) WKWallpaperBundle *_defaultWallpaperBundle;

+ (id)defaultWallpaperLookupURL;

- (void).cxx_destruct;
- (id)deviceProductType;
- (id)deviceEnclosureColor;
- (id)deviceColor;
- (id)defaultWallpaperBundle;
- (void)_loadDefaultWallpaperFile;
- (void)_loadDefaultWallpaperInformation;
- (id)initWithCollectionsManager:(id)a0;
- (id)defaultWallpaperCollection;
- (id)deviceLogicalScreenClass;

@end
