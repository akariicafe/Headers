@class CSVibrantWallpaperButton;
@protocol CSWallpaperColorProvider, CSUserSessionControlling, CSWallpaperViewProviding;

@interface CSLogoutButtonViewController : CSCoverSheetViewControllerBase

@property (readonly, nonatomic) CSVibrantWallpaperButton *button;
@property (weak, nonatomic) id<CSUserSessionControlling> userSessionController;
@property (weak, nonatomic) id<CSWallpaperColorProvider> wallpaperColorProvider;
@property (weak, nonatomic) id<CSWallpaperViewProviding> wallpaperViewProvider;

- (void).cxx_destruct;
- (void)_buttonPressed:(id)a0;
- (void)loadView;

@end
