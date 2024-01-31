@class UIImageView, UIFont, UILabel, UIVisualEffectView, UIView, UIColor, NSString, TLKProminenceView, _UIVisualEffectBackdropView, NUIContainerStackView, NUIContainerBoxView, CNActionMenuHelper, UIImage;
@protocol CNActionViewDelegate;

@interface CNActionView : UIControl <UIGestureRecognizerDelegate, NUIContainerViewDelegate>

@property (class, readonly) UIFont *defaultTitleFont;

@property (retain, nonatomic) NUIContainerStackView *containerView;
@property (retain, nonatomic) NUIContainerBoxView *platterBoxView;
@property (retain, nonatomic) UIView *platterView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) NUIContainerStackView *horizontalContentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CNActionMenuHelper *actionMenuHelper;
@property (retain, nonatomic) TLKProminenceView *vibrantPlatterView;
@property (retain, nonatomic) TLKProminenceView *vibrantBackgroundView;
@property (retain, nonatomic) UIVisualEffectView *colorMatrixView;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *posterTintColor;
@property (retain, nonatomic) _UIVisualEffectBackdropView *visualEffectViewCaptureView;
@property (weak, nonatomic) id<CNActionViewDelegate> actionDelegate;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *type;
@property (nonatomic) long long style;
@property (nonatomic) BOOL disabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)borderColorForDisabledBoldState;
+ (id)colorByIncreasingBrightnessComponentByPercentage:(double)a0 ofColor:(id)a1;
+ (id)contentColorForDisabledBoldState;
+ (id)contentColorForDisabledVibrantDarkState;
+ (void)fadeInView:(id)a0;
+ (double)minimumPillDimension;
+ (struct CGSize { double x0; double x1; })minimumSizeForStyle:(long long)a0;
+ (id)titleFontForStyle:(long long)a0;

- (void)tlk_updateForAppearance:(id)a0;
- (id)init;
- (void)updateWithMenuItems:(id)a0;
- (void)updateImage;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)containerViewDidLayoutArrangedSubviews:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)tintColorDidChange;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (void)updateBackground;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updatePlatterViewStateAnimated:(BOOL)a0;
- (id)sourceViewForContextMenuPreview;
- (void)applyDefaultLabelContainerMetrics;
- (void)applyRoundedRectMargins;
- (id)colorByAdjustingColorToHighlightState:(id)a0;
- (void)handleTapGesture;
- (struct CGSize { double x0; double x1; })platterViewMinimumLayoutSizeForStyle:(long long)a0;
- (void)setDisabled:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)shouldShowDisambiguation;
- (void)updateBackgroundForVibrantRoundedRect;
- (void)updateImageViewStateAnimated:(BOOL)a0;
- (void)updateLabelArrangedSubviews;
- (void)updateLabelStateAnimated:(BOOL)a0;
- (void)updateTitleLabelFont;

@end
