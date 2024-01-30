@class NSString, NSArray, UIEvent, NSMutableSet;

@interface CSHorizontalScrollFailureRecognizer : UIGestureRecognizer <PTSettingsKeyObserver> {
    struct CGPoint { double x; double y; } _startingLocation;
    double _effectiveTopAngle;
    double _effectiveBottomAngle;
    NSMutableSet *_touches;
    BOOL _tracking;
    NSArray *_debugViews;
    BOOL _armed;
    BOOL _externallyEnabled;
}

@property (nonatomic) BOOL viewDebugArea;
@property (nonatomic) BOOL allowMultiTouch;
@property (nonatomic) unsigned long long maxAllowableVerticalOffset;
@property (nonatomic) double minAllowedTopAngle;
@property (nonatomic) double maxAllowedTopAngle;
@property (nonatomic) double minAllowedBottomAngle;
@property (nonatomic) double maxAllowedBottomAngle;
@property (readonly, nonatomic) UIEvent *triggeredEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (double)_effectiveBottomAngle;
- (void)_setArmed:(BOOL)a0;
- (void)setState:(long long)a0;
- (BOOL)isEnabled;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (double)_maxAllowableVerticalOffsetForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (double)_effectiveTopAngle;
- (BOOL)_isOutOfBoundsVertically:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_recognizeForMultiTouchIfNecessary:(id)a0;
- (long long)_activeTouchCountForEvent:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isLocationOutOfBounds:(struct CGPoint { double x0; double x1; })a0;
- (void)_setDebugViewsVisible:(BOOL)a0;
- (id)_touchesFromEvent:(id)a0;
- (double)_computeEffectiveAngleFromMin:(double)a0 max:(double)a1;
- (struct CGPoint { double x0; double x1; })_averagePointFromTouches;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)_setDebugViewsColor:(id)a0;
- (BOOL)_isOutOfBounds:(struct CGPoint { double x0; double x1; })a0 forAngle:(double)a1;
- (struct CGPoint { double x0; double x1; })_locationOfTouch:(id)a0 inView:(id)a1;
- (void)_loadFromSettings:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;
- (BOOL)_effectivelyEnabled;
- (void)_updateEnabled;

@end
