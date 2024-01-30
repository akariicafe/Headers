@class NSString, UIAccessibilityHUDItem, UIView;

@interface _UIStatusBarDisplayableContainerView : UIView <_UIStatusBarDisplayable>

@property (weak, nonatomic) UIView *subviewForBaselineAlignment;
@property (readonly, nonatomic) BOOL wantsCrossfade;
@property (readonly, nonatomic) BOOL prefersBaselineAlignment;
@property (readonly, nonatomic) BOOL prefersCenterVerticalAlignment;
@property (readonly, nonatomic) long long overriddenVerticalAlignment;
@property (readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applyStyleAttributes:(id)a0;
- (id)viewForLastBaselineLayout;
- (void).cxx_destruct;

@end
