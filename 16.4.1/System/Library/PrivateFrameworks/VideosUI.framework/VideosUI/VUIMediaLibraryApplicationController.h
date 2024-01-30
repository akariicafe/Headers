@protocol VUIMediaLibraryApplicationControllerDelegate;

@interface VUIMediaLibraryApplicationController : NSObject

@property (retain, nonatomic) id<VUIMediaLibraryApplicationControllerDelegate> delegate;

+ (id)defaultController;

- (void).cxx_destruct;
- (id)settingsURL;
- (unsigned long long)assetTypeForRentalMediaItem:(id)a0;
- (void)clearCellularPlaybackQualityOverrides;
- (BOOL)isCellularDataForPlaybackEnabled;
- (void)overrideCellularPlaybackQuality:(unsigned long long)a0 forMediaItem:(id)a1;
- (void)removeRentalMediaItem:(id)a0 withCompletion:(id /* block */)a1;
- (BOOL)shouldWarnAboutPlaybackQualityForRentalMediaItem:(id)a0;

@end
