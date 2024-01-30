@class AKPageController;

@interface AKAlignmentGuideController : NSObject {
    struct CGPoint { double x; double y; } _initialDraggedAnnotationsCombinedCenter;
    struct CGPoint { double x0; double x1; } *_otherAnnotationCenters;
    unsigned long long _otherAnnotationCentersCount;
}

@property (weak) AKPageController *pageController;
@property BOOL exifHasFlippedAxes;
@property double screenToModelScaleFactor;

- (void).cxx_destruct;
- (id)initWithPageController:(id)a0;
- (void)dealloc;
- (struct CGPoint { double x0; double x1; })guideAlignedPointForPoint:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1 orRecognizer:(id)a2;

@end
