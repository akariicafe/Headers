@class NSString, SBWallpaperEffectView, _UILegibilitySettings;
@protocol CSWallpaperColorProvider;

@interface SBDashBoardVibrantWallpaperChevronView : SBUIChevronView <SBUILegibility> {
    SBWallpaperEffectView *_effectView;
}

@property (weak, nonatomic) id<CSWallpaperColorProvider> wallpaperColorProvider;
@property (nonatomic) double strength;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
