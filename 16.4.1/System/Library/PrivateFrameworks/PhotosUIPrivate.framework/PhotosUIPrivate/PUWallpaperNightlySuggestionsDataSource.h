@class NSDateFormatter, PHFetchResult, NSPointerArray, PHPhotoLibrary, NSDate;
@protocol PUWallpaperNightlySuggestionsPosterConfiguration;

@interface PUWallpaperNightlySuggestionsDataSource : PUWallpaperClassDataSource {
    PHPhotoLibrary *_photoLibrary;
    NSDateFormatter *_dateFormatter;
    PHFetchResult *_fetchResult;
    NSPointerArray *_delegates;
}

@property (retain, nonatomic) id<PUWallpaperNightlySuggestionsPosterConfiguration> posterConfiguration;
@property (copy, nonatomic) NSDate *date;

- (id)initWithPhotoLibrary:(id)a0;
- (void)refresh;
- (id)delegates;
- (id)objectAtIndexPath:(id)a0;
- (id)title;
- (void).cxx_destruct;
- (id)fetchResult;
- (id)_dictionaryWithPosterConfiguration:(id)a0;
- (unsigned short)wallpaperSubtype;

@end
