@interface PHHandsetDialerLCDViewAccessibility : __PHHandsetDialerLCDViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)dealloc;
- (BOOL)hasText;
- (void)insertText:(id)a0;
- (void)deleteBackward;
- (BOOL)shouldGroupAccessibilityChildren;
- (double)_accessibilityAllowedGeometryOverlap;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilitySubviews;
- (void)deleteCharacter;
- (void)_voStatusChanged:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forDialerType:(int)a1;
- (void)setText:(id)a0 needsFormat:(BOOL)a1;
- (void)updateAddAndDeleteButtonForText:(id)a0 name:(id)a1 animated:(BOOL)a2;

@end
