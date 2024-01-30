@class SBIconPageIndicatorImageSetResult, _UILegibilitySettings;

@interface SBIconPageIndicatorImageSetCache : NSObject {
    SBIconPageIndicatorImageSetResult *_indicatorImageSetResults;
    SBIconPageIndicatorImageSetResult *_searchImageSetResults;
    SBIconPageIndicatorImageSetResult *_cameraImageSetResults;
}

@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;

- (void).cxx_destruct;
- (id)_emptyPageIndicatorSet;
- (id)pageIndicatorImageSetForLegibilitySettings:(id)a0;
- (id)searchIndicatorImageSetForLegibilitySettings:(id)a0;
- (id)cameraIndicatorImageSetForLegibilitySettings:(id)a0;

@end
