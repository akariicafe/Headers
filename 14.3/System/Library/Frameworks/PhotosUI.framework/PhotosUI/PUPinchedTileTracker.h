@class PUVelocityFilter, PUPinchTracker, PUChangeDirectionValueFilter, UIPinchGestureRecognizer, PUTileLayoutInfo;

@interface PUPinchedTileTracker : PUInteractiveTileTracker {
    struct { BOOL respondsToInitialAspectRatioForTileWithLayoutInfo; BOOL respondsToFinalLayoutInfoForTileWithLayoutInfo; } _delegateFlags;
}

@property (retain, nonatomic, setter=_setPinchGestureRecognizerScaleDirectionValueFilter:) PUChangeDirectionValueFilter *_pinchGestureRecognizerScaleDirectionValueFilter;
@property (retain, nonatomic, setter=_setPinchTracker:) PUPinchTracker *_pinchTracker;
@property (nonatomic, setter=_setPinchProgress:) double _pinchProgress;
@property (retain, nonatomic, setter=_setInitialLayoutInfo:) PUTileLayoutInfo *_initialLayoutInfo;
@property (retain, nonatomic, setter=_setTargetLayoutInfo:) PUTileLayoutInfo *_targetLayoutInfo;
@property (retain, nonatomic, setter=_setHorizontalVelocityFilter:) PUVelocityFilter *_horizontalVelocityFilter;
@property (retain, nonatomic, setter=_setVerticalVelocityFilter:) PUVelocityFilter *_verticalVelocityFilter;
@property (retain, nonatomic, setter=_setAngularVelocityFilter:) PUVelocityFilter *_angularVelocityFilter;
@property (readonly, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property (readonly, nonatomic) long long direction;

- (void).cxx_destruct;
- (id)initWithPinchGestureRecognizer:(id)a0 tilingView:(id)a1 direction:(long long)a2;
- (id)initWithTilingView:(id)a0;
- (void)completeTracking;
- (void)updateGestureRecognizerTracking;
- (void)startTileControllerTracking;
- (void)updateTileControllerTracking;
- (void)configureTileReattachmentContext:(id)a0;
- (id)tileControllerToTrack;
- (void)setDelegate:(id)a0;
- (void)_updateTargetLayoutInfoIfNeeded;

@end
