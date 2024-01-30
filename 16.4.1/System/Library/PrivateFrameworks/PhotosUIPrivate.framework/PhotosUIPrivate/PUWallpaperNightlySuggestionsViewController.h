@class PUWallpaperNightlySuggestionsDataSource, NSDate;
@protocol PUWallpaperNightlySuggestionsPosterConfiguration;

@interface PUWallpaperNightlySuggestionsViewController : PUWallpaperClassListViewController {
    PUWallpaperNightlySuggestionsDataSource *_dataSource;
    NSDate *_currentDate;
}

@property (retain, nonatomic) id<PUWallpaperNightlySuggestionsPosterConfiguration> posterConfiguration;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)createDataSources;
- (void)nextDate:(id)a0;
- (void)previousDate:(id)a0;

@end
