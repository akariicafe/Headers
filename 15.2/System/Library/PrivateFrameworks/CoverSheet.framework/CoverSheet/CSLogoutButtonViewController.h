@class CSVibrantWallpaperButton;
@protocol CSWallpaperColorProvider, CSUserSessionControlling, CSWallpaperViewProviding;

@interface CSLogoutButtonViewController : CSCoverSheetViewControllerBase

@property (readonly, nonatomic) CSVibrantWallpaperButton *button;
@property (weak, nonatomic) id<CSUserSessionControlling> userSessionController;
@property (weak, nonatomic) id<CSWallpaperColorProvider> wallpaperColorProvider;
@property (weak, nonatomic) id<CSWallpaperViewProviding> wallpaperViewProvider;

- (void)loadView;
- (void)_buttonPressed:(id)a0;
- (void).cxx_destruct;

@end
