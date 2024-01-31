@interface PHVoicemailMessageTableViewCellAccessibility : __PHVoicemailMessageTableViewCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)setExpanded:(BOOL)a0 animated:(BOOL)a1;
- (id)accessibilityElements;
- (id)accessibilityCustomActions;
- (BOOL)isAccessibilityElement;
- (double)_accessibilityAllowedGeometryOverlap;
- (BOOL)_axInfoAction;
- (BOOL)_axShareAction;
- (void)loadExpandedViewsIfNecessary;

@end
