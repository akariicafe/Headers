@class NSString, PHFetchResult, NSPointerArray, NSMutableArray;

@interface PUWallpaperClassDataSource : NSObject <PHPhotoLibraryChangeObserver>

@property (retain, nonatomic) NSMutableArray *contextDataSources;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned short wallpaperSubtype;
@property (readonly, nonatomic) PHFetchResult *fetchResult;
@property (readonly, nonatomic) NSPointerArray *delegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wallpaperSubtypeTitleFromSubtype:(unsigned short)a0;

- (unsigned long long)sectionCount;
- (void)photoLibraryDidChange:(id)a0;
- (id)objectAtIndexPath:(id)a0;
- (unsigned long long)count;
- (void).cxx_destruct;
- (id)titleForSection:(unsigned long long)a0;
- (unsigned long long)countInSection:(unsigned long long)a0;
- (void)_setupContextDataSourcesIfNeeded;
- (id)indexPathForSuggestionUUID:(id)a0;
- (id)initWithWallpaperSubtype:(unsigned short)a0;

@end
