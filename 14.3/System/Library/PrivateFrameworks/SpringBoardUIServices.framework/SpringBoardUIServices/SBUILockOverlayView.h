@class UIButton, UIResizableView, UILabel, SBLockOverlayStylePropertiesFactory, _UILegibilitySettings;
@protocol SBUILockOverlayViewDelegate;

@interface SBUILockOverlayView : SBFTouchPassThroughView {
    UIResizableView *_textContainerView;
}

@property (weak, nonatomic) id<SBUILockOverlayViewDelegate> delegate;
@property (readonly, nonatomic) unsigned long long style;
@property (readonly, nonatomic) SBLockOverlayStylePropertiesFactory *underlayPropertiesFactory;
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (readonly, nonatomic) UIButton *actionButton;

- (id)_titleFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(unsigned long long)a1;
- (void)_buttonPressed;
- (void).cxx_destruct;
- (double)_maxLabelWidth;
- (id)_actionFont;
- (id)_legibilitySettingsForStyle:(unsigned long long)a0;
- (void)_sizeView:(id)a0 forFixedWith:(BOOL)a1;
- (unsigned long long)_numberOfLinesForText:(id)a0 font:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (void)layoutSubviews;
- (id)_subtitleFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
