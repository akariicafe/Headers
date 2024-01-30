@interface EKUILargeTextUtilities : NSObject

+ (double)contentSizeCategoryScaledValueForLargestNonAccessibilityValue:(double)a0 maximumValue:(double)a1;
+ (double)contentSizeCategoryScaledValueForDefaultValue:(double)a0 shouldScaleForSmallerSizes:(BOOL)a1;
+ (double)contentSizeCategoryScaledValueForLargestValue:(double)a0;
+ (double)contentSizeCategoryScaledValueFromContentSizeCategory:(id)a0 correspondingValue:(double)a1 maximumValue:(double)a2;
+ (double)contentSizeCategoryScaledValueForDefaultValue:(double)a0 maximumValue:(double)a1 shouldScaleForSmallerSizes:(BOOL)a2;

@end
