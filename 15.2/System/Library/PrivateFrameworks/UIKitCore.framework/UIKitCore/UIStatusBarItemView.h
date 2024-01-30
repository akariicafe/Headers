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

- (BOOL)_shouldReverseLayoutDirection;
- (void)setPersistentAnimationsEnabled:(BOOL)a0;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (long long)textStyle;
- (id)contentsImage;
- (long long)legibilityStyle;
- (void)setContentMode:(long long)a0;
- (id)description;
- (double)standardPadding;
- (double)shadowPadding;
- (void)endDisablingRasterization;
- (void)beginDisablingRasterization;
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
- (BOOL)animatesDataChange;
- (id)imageWithText:(id)a0;
- (double)extraLeftPadding;
- (void)performPendedActions;
- (void)updateForNewStyle:(id)a0;
- (void).cxx_destruct;
- (double)maximumOverlap;
- (void)setVisible:(BOOL)a0 settingAlpha:(BOOL)a1;
- (id)textFont;
- (id)initWithItem:(id)a0 data:(id)a1 actions:(int)a2 style:(id)a3;
- (void)_tintContentLayerIfNeeded;
- (void)setLayerContentsImage:(id)a0;
- (id)contentsIOSurface;
- (id)imageWithText:(id)a0 shouldCache:(BOOL)a1;
- (void)setCurrentOverlap:(double)a0;
- (double)currentOverlap;
- (double)currentLeftOverlap;
- (double)currentRightOverlap;
- (double)setStatusBarData:(id)a0 actions:(int)a1;
- (double)resetContentOverlap;
- (double)addContentOverlap:(double)a0;
- (id)cachedImageWithText:(id)a0 truncatedWithEllipsesAtMaxWidth:(double)a1 letterSpacing:(double)a2;
- (void)clearCachedTextImage;
- (id)accessibilityHUDRepresentation;
- (BOOL)allowsUserInteraction;
- (void)willMoveToWindow:(id)a0;
- (id)foregroundView;
- (void)dealloc;
- (double)legibilityStrength;
- (long long)textAlignment;

@end
