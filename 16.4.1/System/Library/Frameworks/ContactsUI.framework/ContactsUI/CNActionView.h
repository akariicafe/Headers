@class UIFont, UIView, UIImage, NSString, NUIContainerBoxView, UIImageView, NUIContainerStackView, CNActionMenuHelper, TLKProminenceView, UILabel;
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
@property (retain, nonatomic) UIFont *titleFont;
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

- (void)containerViewDidLayoutArrangedSubviews:(id)a0;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)tintColorDidChange;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)layoutSubviews;
- (void)updateImage;
- (id)init;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void)updateBackground;
- (void).cxx_destruct;
- (void)updateWithMenuItems:(id)a0;
- (id)sourceViewForContextMenuPreview;
- (void)updatePlatterViewStateAnimated:(BOOL)a0;
- (void)applyDefaultLabelContainerMetrics;
- (void)applyRoundedRectMargins;
- (id)colorByAdjustingColorToHighlightState:(id)a0;
- (void)handleTapGesture;
- (struct CGSize { double x0; double x1; })platterViewMinimumLayoutSizeForStyle:(long long)a0;
- (void)setDisabled:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)shouldShowDisambiguation;
- (void)updateImageViewStateAnimated:(BOOL)a0;
- (void)updateLabelArrangedSubviews;
- (void)updateLabelStateAnimated:(BOOL)a0;
- (void)updateTitleLabelFont;

@end
