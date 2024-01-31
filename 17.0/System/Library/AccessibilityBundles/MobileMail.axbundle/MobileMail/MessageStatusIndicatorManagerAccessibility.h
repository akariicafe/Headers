@interface MessageStatusIndicatorManagerAccessibility : __MessageStatusIndicatorManagerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_accessibilitySetImageNameForImage:(id)a0 options:(unsigned long long)a1 flagColor:(id)a2;
- (id)_axIdentificationForMask:(unsigned long long)a0;
- (id)_axLabelForMask:(unsigned long long)a0;
- (id)_axValueForMask:(unsigned long long)a0 flagColor:(id)a1;
- (id)statusIndicatorImageWithOptionsMask:(unsigned long long)a0 flagColor:(id)a1;

@end
