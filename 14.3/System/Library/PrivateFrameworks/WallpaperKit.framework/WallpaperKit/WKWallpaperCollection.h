@class NSFileManager, NSBundle, NSMapTable, NSUUID, NSMutableArray, NSString;

@interface WKWallpaperCollection : NSObject

@property (retain, nonatomic) NSBundle *_bundleForLocalizationResources;
@property (retain, nonatomic) NSMutableArray *_wallpaperBundles;
@property (retain, nonatomic) NSFileManager *_fileManager;
@property (retain, nonatomic) NSMapTable *_wallpaperLookupTable;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) long long numberOfWallpapers;
@property (readonly, nonatomic) unsigned long long source;
@property (readonly, nonatomic, getter=isDynamicCollection) BOOL dynamicCollection;

- (id)initWithSource:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)wallpaperBundleAtIndex:(long long)a0;
- (BOOL)containsWallpaperRepresentingWithIdentifier:(id)a0;
- (id)wallpaperRepresentingWithIdentifier:(id)a0;

@end
