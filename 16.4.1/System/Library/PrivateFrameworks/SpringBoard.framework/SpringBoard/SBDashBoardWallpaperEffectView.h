@class NSString, SBUIBackgroundView;

@interface SBDashBoardWallpaperEffectView : SBWallpaperEffectView <CSWallpaperView> {
    SBUIBackgroundView *_backgroundView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didAddSubview:(id)a0;
- (void)setBackgroundStyle:(long long)a0;
- (void)setCoverSheetWallpaperStyle:(long long)a0;
- (void)layoutSubviews;
- (id)initWithWallpaperVariant:(long long)a0 transformOptions:(unsigned long long)a1;
- (void).cxx_destruct;

@end
