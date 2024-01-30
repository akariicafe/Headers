@class CAMSlashView, NSString, UIImageView, UILabel, CAMSlashMaskView, UIView;
@protocol CAMControlStatusIndicatorDelegate;

@interface CAMControlStatusIndicator : UIControl <CAMAccessibilityHUDItemProvider>

@property (readonly, nonatomic) UIImageView *_imageView;
@property (readonly, nonatomic) UIImageView *_outlineView;
@property (readonly, nonatomic) UILabel *_valueLabel;
@property (readonly, nonatomic) CAMSlashView *_slashView;
@property (readonly, nonatomic) CAMSlashMaskView *_slashMaskView;
@property (readonly, nonatomic) UIView *_slashMaskContainer;
@property (nonatomic, setter=_setValueLabelSize:) struct CGSize { double width; double height; } _valueLabelSize;
@property (nonatomic, setter=_setNeedsUpdateValueText:) BOOL _needsUpdateValueText;
@property (weak, nonatomic) id<CAMControlStatusIndicatorDelegate> delegate;
@property (nonatomic) long long orientation;
@property (readonly, nonatomic) BOOL canShowValue;
@property (nonatomic, getter=isShowingValue) BOOL showingValue;
@property (readonly, nonatomic) BOOL canAnimate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)integerFormatter;
+ (id)_createStretchableCircleImageFilled:(BOOL)a0;
+ (id)_outlineImage;
+ (id)_filledOutlineImage;
+ (id)decimalFormatter;

- (void)updateImage;
- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (BOOL)shouldUseOutline;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (id)imageNameForCurrentState;
- (void)selectedByAccessibilityHUDManager:(id)a0;
- (id)hudItemForAccessibilityHUDManager:(id)a0;
- (void)updateImageAnimated:(BOOL)a0;
- (void)layoutSubviews;
- (id)valueText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopAnimating;
- (void)startAnimating;
- (void)setNeedsUpdateValueText;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldShowOutlineForCurrentState;
- (BOOL)shouldFillOutlineForCurrentState;
- (BOOL)shouldUseSlash;
- (BOOL)shouldShowSlashForCurrentState;
- (void)setShowingValue:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateValueLabelVisibilityAnimated:(BOOL)a0;
- (double)_additionalWidthForValue;
- (void)_updateSlashAnimated:(BOOL)a0;
- (id)imageForCurrentState;
- (void)_updateValueText;
- (id)imageAnimationFramesForCurrentState;
- (void)_updateImageOrientationAnimated:(BOOL)a0;
- (BOOL)supportsOrientations;

@end
