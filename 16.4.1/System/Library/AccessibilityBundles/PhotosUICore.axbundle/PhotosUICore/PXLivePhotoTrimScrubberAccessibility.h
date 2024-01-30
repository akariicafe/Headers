@interface PXLivePhotoTrimScrubberAccessibility : __PXLivePhotoTrimScrubberAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (id)_accessibilitySupplementaryFooterViews;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_PXLivePhotoTrimScrubber_commonInit;
- (void)_loadKeyFrameAX;
- (id)_accessibilityTimeForCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_loadEndTrimAX;
- (void)_loadStartTrimAX;

@end
