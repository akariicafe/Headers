@class PLCropOverlayPreviewBottomBar, PLCropOverlayWallpaperBottomBar, UIView;

@interface PLCropOverlayBottomBar : UIView

@property (nonatomic) long long style;
@property (retain, nonatomic) UIView *cameraBottomBar;
@property (retain, nonatomic) PLCropOverlayPreviewBottomBar *previewBottomBar;
@property (retain, nonatomic) PLCropOverlayWallpaperBottomBar *wallpaperBottomBar;
@property (nonatomic, getter=isPlayingVideo) BOOL playingVideo;
@property (nonatomic, getter=isInPopover) BOOL inPopover;

- (void)setStyle:(long long)a0 animated:(BOOL)a1;
- (void)_updateStyle;
- (void)togglePlaybackState;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_commonPLCropOverlayBottomBarInitialization;
- (void)_updateBottomBars;
- (void)_updatePreviewBottomBarForPlaybackState;
- (BOOL)_isEditingStyle:(long long)a0;

@end
