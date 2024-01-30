@class UIButton;

@interface PLCropOverlayPreviewBottomBar : UIView

@property (nonatomic) long long backgroundStyle;
@property (readonly, nonatomic) UIButton *cancelButton;
@property (readonly, nonatomic) UIButton *doneButton;
@property (readonly, nonatomic) UIButton *playbackButton;
@property (readonly, nonatomic) UIButton *fileResizingButton;

- (void)_updateBackgroundStyle;
- (id)initWithCoder:(id)a0;
- (void)setBackgroundStyle:(long long)a0 animated:(BOOL)a1;
- (void)safeAreaInsetsDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_commonPLCropOverlayEditPhotoBottomBarInitialization;

@end
