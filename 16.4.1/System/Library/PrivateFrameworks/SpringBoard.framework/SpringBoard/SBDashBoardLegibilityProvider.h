@class NSString, SBWallpaperController;
@protocol CSLegibilityProviderDelegate;

@interface SBDashBoardLegibilityProvider : NSObject <PBUIWallpaperObserver, CSLegibilityProviding>

@property (retain, nonatomic) SBWallpaperController *wallpaperController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CSLegibilityProviderDelegate> legibilityProviderDelegate;

- (void)wallpaperDidChangeForVariant:(long long)a0;
- (id)initWithWallpaperController:(id)a0;
- (id)_wallpaperLegibilitySettings;
- (void)_notifyDelegate;
- (id)currentLegibilitySettings;
- (id)init;
- (void)wallpaperLegibilitySettingsDidChange:(id)a0 forVariant:(long long)a1;
- (void).cxx_destruct;

@end
