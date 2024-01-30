@class NSString, SBWallpaperController, _UILegibilitySettings;
@protocol SBFLegibilitySettingsProviderDelegate;

@interface SBSpotlightLegibilityProvider : NSObject <SBWallpaperObserver, SBFLegibilitySettingsProvider> {
    long long _variant;
    SBWallpaperController *_wallpaperController;
    _UILegibilitySettings *_currentLegibilitySettings;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (weak, nonatomic) id<SBFLegibilitySettingsProviderDelegate> delegate;

- (void)wallpaperDidChangeForVariant:(long long)a0;
- (void).cxx_destruct;
- (void)wallpaperLegibilitySettingsDidChange:(id)a0 forVariant:(long long)a1;
- (void)dealloc;
- (id)initWithVariant:(long long)a0;
- (id)initWithVariant:(long long)a0 wallpaperController:(id)a1;
- (void)_calculateLegibilitySettings;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForSpotlightHeader;
- (void)wallpaperGeometryDidChangeForVariant:(long long)a0;

@end
