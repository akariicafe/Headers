@interface DirectionsStepTableViewCellAccessibility : __DirectionsStepTableViewCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axAnnotateRoadDescriptionListView;
- (id)_axRoadDescriptionLabel;
- (id)_axStepView;
- (void)setRoute:(id)a0 step:(id)a1 stepIndex:(unsigned long long)a2 alignToLeftEdgeIfNoManeuverSign:(BOOL)a3 size:(long long)a4;

@end
