@interface PXLivePhotoTrimScrubberAccessibility : __PXLivePhotoTrimScrubberAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityElements;
- (void)_PXLivePhotoTrimScrubber_commonInit;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityTimeForCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)_axSummaryElement;
- (void)_setAXSummaryElement:(id)a0;
- (void)_loadStartTrimAX;
- (void)_loadEndTrimAX;
- (void)_loadKeyFrameAX;
- (id)_accessibilitySummaryElement;

@end
