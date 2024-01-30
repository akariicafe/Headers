@class CAMSlashView, NSString, UIImageView, NSNumberFormatter, UILabel, CAMSlashMaskView, UIView;
@protocol CAMControlStatusIndicatorDelegate;

@interface CAMControlStatusIndicator : UIControl <CAMAccessibilityHUDItemProvider>

@property (class, readonly, nonatomic) NSNumberFormatter *decimalFormatter;
@property (class, readonly, nonatomic) NSNumberFormatter *integerFormatter;

@property (retain, nonatomic) UIImageView *_imageView;
@property (readonly, nonatomic) UIImageView *_outlineView;
@property (readonly, nonatomic) UILabel *_valueLabel;
@property (readonly, nonatomic) CAMSlashView *_slashView;
@property (readonly, nonatomic) CAMSlashMaskView *_slashMaskView;
@property (readonly, nonatomic) UIView *_slashMaskContainer;
@property (nonatomic, setter=_setValueLabelSize:) struct CGSize { double width; double height; } _valueLabelSize;
@property (nonatomic, setter=_setNeedsUpdateValueText:) BOOL _needsUpdateValueText;
@property (readonly, nonatomic) UIView *slashContainerView;
@property (weak, nonatomic) id<CAMControlStatusIndicatorDelegate> delegate;
@property (nonatomic) long long orientation;
@property (readonly, nonatomic) BOOL canShowValue;
@property (nonatomic, getter=isShowingValue) BOOL showingValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_createStretchableCircleImageFilled:(BOOL)a0;
+ (id)_filledOutlineImage;
+ (id)_outlineImage;

- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (id)imageNameForCurrentState;
- (id)hudItemForAccessibilityHUDManager:(id)a0;
- (void)selectedByAccessibilityHUDManager:(id)a0;
- (void)updateImageAnimated:(BOOL)a0;
- (BOOL)shouldUseOutline;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)updateImage;
- (void).cxx_destruct;
- (void)_updateValueText;
- (id)valueText;
- (double)_additionalWidthForValue;
- (void)_updateImageOrientationAnimated:(BOOL)a0;
- (void)_updateSlashAnimated:(BOOL)a0;
- (void)_updateValueLabelVisibilityAnimated:(BOOL)a0;
- (unsigned long long)customPointSizeForImageSymbol;
- (id)imageForCurrentState;
- (id)imageNameForAXHUD;
- (void)setNeedsUpdateValueText;
- (void)setShowingValue:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)shouldFillOutlineForCurrentState;
- (BOOL)shouldShowOutlineForCurrentState;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldUseHierarchicalSymbol;
- (BOOL)shouldUseSlash;
- (BOOL)supportsOrientations;

@end
