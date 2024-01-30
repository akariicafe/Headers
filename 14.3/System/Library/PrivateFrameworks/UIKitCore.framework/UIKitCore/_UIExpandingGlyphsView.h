@class NSString, NSArray, NSAttributedString, UIAccessibilityHUDItem;

@interface _UIExpandingGlyphsView : UIView <_UIStatusBarDisplayable, CAAnimationDelegate>

@property (readonly, nonatomic) BOOL wantsCrossfade;
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (readonly, nonatomic) long long overriddenVerticalAlignment;
@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *imageViews;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) int remainingAnimationCount;
@property (nonatomic) struct CGSize { double width; double height; } intrinsicSize;
@property (retain, nonatomic) NSAttributedString *attributedString;
@property (readonly, nonatomic) double baselineOffset;
@property (nonatomic) BOOL expandsFromLeftToRight;
@property (nonatomic) BOOL fadesOut;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)animateCompletionBlock:(id /* block */)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
