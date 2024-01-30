@class NSString, _UILegibilityImageSet, UIStatusBarForegroundStyleAttributes, UIStatusBarItem, UIStatusBarLayoutManager, _UILegibilityView;

@interface UIStatusBarItemView : UIView {
    double _currentOverlap;
    struct CGContext { } *_imageContext;
    double _imageContextScale;
    _UILegibilityView *_legibilityView;
    _UILegibilityImageSet *_lastGeneratedTextImage;
    double _lastGeneratedTextImageLetterSpacing;
    NSString *_lastGeneratedTextImageText;
}

@property (readonly, nonatomic) UIStatusBarItem *item;
@property (weak, nonatomic) UIStatusBarLayoutManager *layoutManager;
@property (readonly, nonatomic) UIStatusBarForegroundStyleAttributes *foregroundStyle;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (nonatomic) BOOL allowsUpdates;
@property (readonly, nonatomic) BOOL shouldTintContentImage;

+ (id)createViewForItem:(id)a0 withData:(id)a1 actions:(int)a2 foregroundStyle:(id)a3;

- (void)beginDisablingRasterization;
- (void)endDisablingRasterization;
- (double)adjustFrameToNewSize:(double)a0;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;
- (double)updateContentsAndWidth;
- (void)setVisible:(BOOL)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 duration:(double)a2;
- (double)neededSizeForImageSet:(id)a0;
- (id)imageWithShadowNamed:(id)a0;
- (void)beginImageContextWithMinimumWidth:(double)a0;
- (id)imageFromImageContextClippedToWidth:(double)a0;
- (void)endImageContext;
- (double)extraRightPadding;
- (id)imageWithText:(id)a0;
- (BOOL)animatesDataChange;
- (double)extraLeftPadding;
- (void).cxx_destruct;
- (void)performPendedActions;
- (void)willMoveToWindow:(id)a0;
- (id)textFont;
- (void)updateForNewStyle:(id)a0;
- (double)maximumOverlap;
- (void)setVisible:(BOOL)a0 settingAlpha:(BOOL)a1;
- (id)initWithItem:(id)a0 data:(id)a1 actions:(int)a2 style:(id)a3;
- (void)_tintContentLayerIfNeeded;
- (void)setLayerContentsImage:(id)a0;
- (id)contentsIOSurface;
- (id)imageWithText:(id)a0 shouldCache:(BOOL)a1;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)setCurrentOverlap:(double)a0;
- (double)currentOverlap;
- (double)currentLeftOverlap;
- (double)currentRightOverlap;
- (double)setStatusBarData:(id)a0 actions:(int)a1;
- (double)resetContentOverlap;
- (double)addContentOverlap:(double)a0;
- (id)cachedImageWithText:(id)a0 truncatedWithEllipsesAtMaxWidth:(double)a1 letterSpacing:(double)a2;
- (void)clearCachedTextImage;
- (long long)textAlignment;
- (id)foregroundView;
- (void)dealloc;
- (void)setContentMode:(long long)a0;
- (long long)legibilityStyle;
- (id)accessibilityHUDRepresentation;
- (id)description;
- (double)legibilityStrength;
- (BOOL)_shouldReverseLayoutDirection;
- (id)contentsImage;
- (BOOL)allowsUserInteraction;
- (long long)textStyle;
- (double)standardPadding;
- (double)shadowPadding;
- (void)setPersistentAnimationsEnabled:(BOOL)a0;

@end
