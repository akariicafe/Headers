@class NSString, _UILegibilitySettings;
@protocol SBFLegibilitySettingsProviderDelegate;

@interface SBWallpaperLegibilitySettingsProvider : NSObject <SBWallpaperObserver, SBFLegibilitySettingsProvider> {
    long long _variant;
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

@end
