@interface _UICalendarDateViewCellAccessibility : ___UICalendarDateViewCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityElements;
- (void)prepareForReuse;
- (BOOL)canBecomeFocused;
- (void)configureWithDay:(id)a0 formatter:(id)a1 fontDesign:(id)a2 decorations:(id)a3 outOfRange:(BOOL)a4 renderOverhangDays:(BOOL)a5 highlightsToday:(BOOL)a6;

@end
