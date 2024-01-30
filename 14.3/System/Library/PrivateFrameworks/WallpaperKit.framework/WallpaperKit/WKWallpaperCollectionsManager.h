@class NSFileManager, NSMapTable, NSNotificationCenter, NSMutableArray;

@interface WKWallpaperCollectionsManager : NSObject

@property (class, readonly, nonatomic) WKWallpaperCollectionsManager *defaultWallpaperCollectionsManager;

@property (retain, nonatomic) NSFileManager *_fileManager;
@property (retain, nonatomic) NSNotificationCenter *_notificationCenter;
@property (retain, nonatomic) NSMutableArray *_wallpaperCollections;
@property (retain, nonatomic) NSMapTable *_wallpaperCollectionLookupTable;
@property (readonly, nonatomic) long long numberOfWallpaperCollections;

- (id)init;
- (void).cxx_destruct;
- (id)wallpaperCollectionWithIdentifier:(id)a0;
- (void)_loadCollections;
- (void)_loadSystemWallpaperCollections;
- (id)wallpaperCollectionAtIndex:(long long)a0;

@end
