@class PUChangeDirectionValueFilter, NSString, PUPinchedTileTracker, UIPinchGestureRecognizer;

@interface PUInteractivePinchDismissalController : PUInteractiveDismissalController <UIGestureRecognizerDelegate, PUPinchedTileTrackerDelegate>

@property (retain, nonatomic, setter=_setPinchGestureRecognizer:) UIPinchGestureRecognizer *_pinchGestureRecognizer;
@property (nonatomic, getter=_isHandlingPinchGestureRecognizer, setter=_setHandlingPinchGestureRecognizer:) BOOL handlingPinchGestureRecognizer;
@property (retain, nonatomic, setter=_setScaleDirectionValueFilter:) PUChangeDirectionValueFilter *_scaleDirectionValueFilter;
@property (retain, nonatomic, setter=_setPinchedTileTracker:) PUPinchedTileTracker *_pinchedTileTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (id)pinchedTiledTracker:(id)a0 finalLayoutInfoForInitialLayoutInfo:(id)a1;
- (void)updateGestureRecognizersWithHostingView:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)dealloc;
- (void)_handlePinchGestureRecognizer:(id)a0;

@end
