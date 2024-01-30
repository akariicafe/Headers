@class NSString, NSTimer, UIAccessibilityHUDItem;

@interface _UIStatusBarStringView : UILabel <_UIStatusBarDisplayable>

@property (nonatomic) BOOL showsAlternateText;
@property (copy, nonatomic) NSString *originalText;
@property (readonly, nonatomic) NSTimer *alternateTextTimer;
@property (nonatomic) long long fontStyle;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } alignmentRectInsets;
@property (copy, nonatomic) NSString *alternateText;
@property (readonly, nonatomic) BOOL wantsCrossfade;
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (readonly, nonatomic) long long overriddenVerticalAlignment;
@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateAlternateTextTimer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setText:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)applyStyleAttributes:(id)a0;

@end
