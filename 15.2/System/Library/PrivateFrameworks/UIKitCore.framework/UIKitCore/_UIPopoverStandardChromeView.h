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

+ (Class)legacyChromeViewClass;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentViewInsets;
+ (Class)standardChromeViewClass;

- (void)setBackgroundStyle:(long long)a0 animated:(BOOL)a1;
- (BOOL)isPinned;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentViewFrame;
- (BOOL)isRightArrowPinnedToTop;
- (BOOL)isRightArrowPinnedToBottom;
- (double)arrowOffset;
- (void)setArrowDirection:(unsigned long long)a0;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsetsForContentView;
- (BOOL)wouldPinForOffset:(double)a0;
- (long long)_resolvedBackgroundStyle;
- (double)minNonPinnedOffset;
- (double)maxNonPinnedOffset;
- (void)setArrowOffset:(double)a0;
- (BOOL)_shouldUseEqualContentInsetsOnAllSides;
- (void)_updateArrowImages;
- (unsigned long long)arrowDirection;

@end
