@interface PXLivePhotoTrimScrubberAccessibility : __PXLivePhotoTrimScrubberAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityElements;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_PXLivePhotoTrimScrubber_commonInit;
- (id)_accessibilityTimeForCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)_axSummaryElement;
- (void)_setAXSummaryElement:(id)a0;
- (void)_loadStartTrimAX;
- (void)_loadEndTrimAX;
- (void)_loadKeyFrameAX;
- (id)_accessibilitySummaryElement;

@end
