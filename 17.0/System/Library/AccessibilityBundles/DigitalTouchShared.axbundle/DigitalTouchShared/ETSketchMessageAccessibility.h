@interface ETSketchMessageAccessibility : __ETSketchMessageAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (id)_accessibilityMessageTypeString;
- (id)_accessibilityStrokeDescription;
- (id)_accessibilityColorOfStroke:(unsigned long long)a0;
- (void)_accessibilityIncrementNumberOfKey:(id)a0 inDictionary:(id)a1;
- (id)_accessibilityStringForColorCounts:(id)a0;
- (id)_accessibilityUIColorFromETColor:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; })a0;

@end
