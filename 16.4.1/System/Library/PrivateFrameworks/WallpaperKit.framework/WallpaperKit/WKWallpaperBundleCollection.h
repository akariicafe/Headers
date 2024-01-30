@class NSString, NSMutableDictionary, NSMutableArray, WKWallpaperBundle;

@interface WKWallpaperBundleCollection : NSObject

@property (nonatomic) unsigned long long wallpaperType;
@property (copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) WKWallpaperBundle *previewBundle;
@property (retain, nonatomic) NSMutableArray *_wallpaperBundles;
@property (retain, nonatomic) NSMutableDictionary *_wallpaperLookup;
@property (readonly, nonatomic) long long numberOfItems;

- (id)wallpaperBundleAtIndex:(long long)a0;
- (void).cxx_destruct;
- (void)appendWallpaperBundle:(id)a0;
- (id)initWithWallpaperType:(unsigned long long)a0 previewBundle:(id)a1;
- (id)wallpaperBundleWithIdentifier:(long long)a0;

@end
