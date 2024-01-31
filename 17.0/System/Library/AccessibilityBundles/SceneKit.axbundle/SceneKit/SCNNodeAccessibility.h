@interface SCNNodeAccessibility : __SCNNodeAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;
+ (BOOL)_isSerializableAccessibilityElement;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)dealloc;
- (id)accessibilityElements;
- (id)accessibilityIdentifier;
- (BOOL)isAccessibilityElement;
- (id)accessibilityContainer;
- (id)accessibilityPath;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessibilityConvertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toNode:(id)a1;
- (id)_accessibilityConvertSCNVector3Points:(id)a0 toNode:(id)a1;
- (id)_accessibilitySCNVector3BoundingBoxPoints;

@end
