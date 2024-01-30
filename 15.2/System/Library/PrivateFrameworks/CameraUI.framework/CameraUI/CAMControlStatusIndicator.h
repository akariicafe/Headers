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
+ (id)_outlineImage;
+ (id)_filledOutlineImage;

- (void)selectedByAccessibilityHUDManager:(id)a0;
- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (id)hudItemForAccessibilityHUDManager:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)updateImageAnimated:(BOOL)a0;
- (void)updateImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)imageNameForCurrentState;
- (BOOL)shouldUseOutline;
- (id)valueText;
- (void)_updateSlashAnimated:(BOOL)a0;
- (void)setNeedsUpdateValueText;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldShowOutlineForCurrentState;
- (BOOL)shouldFillOutlineForCurrentState;
- (BOOL)shouldUseSlash;
- (id)imageNameForAXHUD;
- (void)setShowingValue:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)supportsOrientations;
- (void)_updateImageOrientationAnimated:(BOOL)a0;
- (void)_updateValueLabelVisibilityAnimated:(BOOL)a0;
- (double)_additionalWidthForValue;
- (id)imageForCurrentState;
- (BOOL)shouldUseHierarchicalSymbol;
- (void)_updateValueText;

@end
