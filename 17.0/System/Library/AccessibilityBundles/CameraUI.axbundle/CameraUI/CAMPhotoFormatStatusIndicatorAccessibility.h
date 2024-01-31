@interface CAMPhotoFormatStatusIndicatorAccessibility : __CAMPhotoFormatStatusIndicatorAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityCustomActions;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityPerformEscape;
- (id)accessibilityValue;
- (void)setPhotoFormat:(struct { long long x0; long long x1; })a0 animated:(BOOL)a1;
- (unsigned long long)_axAdvancedFormatIndex;
- (id)_axAllowedFormats;
- (id)_axCurrentFormatValue;
- (id)_axEncodingName:(struct { long long x0; long long x1; })a0;
- (unsigned long long)_axEssentialFormatIndex;
- (BOOL)_axIsCurrentFormatEssential;
- (id)_axLocalizedStringForPhotoFormat:(struct { long long x0; long long x1; })a0;

@end
