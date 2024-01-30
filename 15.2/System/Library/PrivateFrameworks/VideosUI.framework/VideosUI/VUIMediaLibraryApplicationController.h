@protocol VUIMediaLibraryApplicationControllerDelegate;

@interface VUIMediaLibraryApplicationController : NSObject

@property (retain, nonatomic) id<VUIMediaLibraryApplicationControllerDelegate> delegate;

+ (id)defaultController;

- (void).cxx_destruct;
- (id)settingsURL;
- (BOOL)isCellularDataForPlaybackEnabled;
- (BOOL)shouldWarnAboutPlaybackQualityForRentalMediaItem:(id)a0;
- (void)clearCellularPlaybackQualityOverrides;
- (void)overrideCellularPlaybackQuality:(unsigned long long)a0 forMediaItem:(id)a1;
- (unsigned long long)assetTypeForRentalMediaItem:(id)a0;
- (void)removeRentalMediaItem:(id)a0 withCompletion:(id /* block */)a1;

@end
