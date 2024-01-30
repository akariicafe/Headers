@class NSString, SBWallpaperController;
@protocol CSLegibilityProviderDelegate;

@interface SBDashBoardLegibilityProvider : NSObject <SBWallpaperObserver, CSLegibilityProviding>

@property (retain, nonatomic) SBWallpaperController *wallpaperController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CSLegibilityProviderDelegate> legibilityProviderDelegate;

- (void)_notifyDelegate;
- (void)wallpaperDidChangeForVariant:(long long)a0;
- (id)_wallpaperLegibilitySettings;
- (void).cxx_destruct;
- (id)init;
- (id)initWithWallpaperController:(id)a0;
- (void)wallpaperLegibilitySettingsDidChange:(id)a0 forVariant:(long long)a1;
- (id)currentLegibilitySettings;

@end
