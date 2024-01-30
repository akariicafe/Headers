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

- (id)accessibilityHUDRepresentation;
- (id)contentsImage;
- (double)legibilityStrength;
- (BOOL)_shouldReverseLayoutDirection;
- (id)foregroundView;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (long long)legibilityStyle;
- (void)setPersistentAnimationsEnabled:(BOOL)a0;
- (long long)textStyle;
- (void)setContentMode:(long long)a0;
- (void)willMoveToWindow:(id)a0;
- (id)textFont;
- (void)dealloc;
- (long long)textAlignment;
- (id)description;
- (void).cxx_destruct;
- (void)endImageContext;
- (double)standardPadding;
- (void)_tintContentLayerIfNeeded;
- (double)addContentOverlap:(double)a0;
- (double)adjustFrameToNewSize:(double)a0;
- (BOOL)allowsUserInteraction;
- (BOOL)animatesDataChange;
- (void)beginDisablingRasterization;
- (void)beginImageContextWithMinimumWidth:(double)a0;
- (id)cachedImageWithText:(id)a0 truncatedWithEllipsesAtMaxWidth:(double)a1 letterSpacing:(double)a2;
- (void)clearCachedTextImage;
- (id)contentsIOSurface;
- (double)currentLeftOverlap;
- (double)currentOverlap;
- (double)currentRightOverlap;
- (void)endDisablingRasterization;
- (double)extraLeftPadding;
- (double)extraRightPadding;
- (id)imageFromImageContextClippedToWidth:(double)a0;
- (id)imageWithShadowNamed:(id)a0;
- (id)imageWithText:(id)a0;
- (id)imageWithText:(id)a0 shouldCache:(BOOL)a1;
- (id)initWithItem:(id)a0 data:(id)a1 actions:(int)a2 style:(id)a3;
- (double)maximumOverlap;
- (double)neededSizeForImageSet:(id)a0;
- (void)performPendedActions;
- (double)resetContentOverlap;
- (void)setCurrentOverlap:(double)a0;
- (void)setLayerContentsImage:(id)a0;
- (double)setStatusBarData:(id)a0 actions:(int)a1;
- (void)setVisible:(BOOL)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 duration:(double)a2;
- (void)setVisible:(BOOL)a0 settingAlpha:(BOOL)a1;
- (double)shadowPadding;
- (double)updateContentsAndWidth;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;
- (void)updateForNewStyle:(id)a0;

@end
