@class UIColor, UIView;

@interface _UIPopoverStandardChromeView : UIPopoverBackgroundView {
    unsigned long long _arrowDirection;
    double _arrowOffset;
}

@property (nonatomic) long long backgroundStyle;
@property (nonatomic) BOOL useShortMode;
@property (nonatomic, getter=isDebugModeEnabled) BOOL debugModeEnabled;
@property (copy, nonatomic) UIColor *popoverBackgroundColor;
@property (copy, nonatomic) UIColor *arrowBackgroundColor;
@property (readonly, nonatomic) UIColor *contentBlendingColor;
@property (weak, nonatomic) UIView *viewToMaskWhenContentExtendsOverArrow;

+ (double)arrowHeight;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentViewInsets;
+ (Class)legacyChromeViewClass;
+ (Class)standardChromeViewClass;

- (unsigned long long)arrowDirection;
- (void)setArrowOffset:(double)a0;
- (double)minNonPinnedOffset;
- (void)setBackgroundStyle:(long long)a0 animated:(BOOL)a1;
- (double)maxNonPinnedOffset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentViewFrame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isPinned;
- (long long)_resolvedBackgroundStyle;
- (double)arrowOffset;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsetsForContentView;
- (void).cxx_destruct;
- (void)setArrowDirection:(unsigned long long)a0;
- (BOOL)_shouldUseEqualContentInsetsOnAllSides;
- (void)_updateArrowImages;
- (BOOL)isRightArrowPinnedToBottom;
- (BOOL)isRightArrowPinnedToTop;
- (BOOL)wouldPinForOffset:(double)a0;

@end
