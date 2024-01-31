@class NSArray;

@interface AXAggregateHeaderView : UIAccessibilityAggregateElement

@property (readonly, nonatomic) NSArray *iconButtons;
@property (readonly, nonatomic) id dateLabel;
@property (readonly, nonatomic) id titleLabel;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityActivate;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)_accessibilitySupplementaryFooterViews;
- (BOOL)_axIsHeaderViewActionable;
- (id)initWithAccessibilityContainer:(id)a0 iconButtons:(id)a1 dateLabel:(id)a2 titleLabel:(id)a3;

@end
