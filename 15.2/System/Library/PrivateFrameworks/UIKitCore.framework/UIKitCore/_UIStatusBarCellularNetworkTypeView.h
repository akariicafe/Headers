@class _UIStatusBarStringView, UIVectorLabel, NSString, UIAccessibilityHUDItem;

@interface _UIStatusBarCellularNetworkTypeView : UIView <_UIStatusBarDisplayable> {
    BOOL _animatingUpdate;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) _UIStatusBarStringView *stringView;
@property (retain, nonatomic) UIVectorLabel *prefixLabel;
@property (retain) UIVectorLabel *accessoryLabel;
@property (readonly, nonatomic) BOOL wantsCrossfade;
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (readonly, nonatomic) long long overriddenVerticalAlignment;
@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewForLastBaselineLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_animateUpdateToText:(id)a0 prefixLength:(long long)a1 styleAttributes:(id)a2 attributedText:(id)a3 type:(long long)a4;
- (void).cxx_destruct;
- (void)setAttributedText:(id)a0 prefixLength:(long long)a1 forType:(long long)a2 animated:(BOOL)a3;
- (void)setText:(id)a0 prefixLength:(long long)a1 withStyleAttributes:(id)a2 forType:(long long)a3 animated:(BOOL)a4;
- (void)applyStyleAttributes:(id)a0;

@end
