@class NSString, NSMutableDictionary, CAAnimation, NSMutableArray;
@protocol TKVibrationRecorderStyleProvider, NSCopying;

@interface TKVibrationRecorderRippleView : UIView <CAAnimationDelegate> {
    id<TKVibrationRecorderStyleProvider> _styleProvider;
    struct CGPoint { double x; double y; } _currentTouchLocation;
    double _currentTouchStartTime;
    unsigned long long _numberOfRipplesForCurrentTouch;
    BOOL _isTrackingTouch;
    NSMutableArray *_recentTouchesContextQueue;
    NSMutableArray *_reusableTouchContexts;
    double _currentSpeedCoefficient;
    BOOL _needsCurrentSpeedRefresh;
    BOOL _isAnimating;
    id<NSCopying> _displayLinkManagerObserverToken;
    NSMutableArray *_ringLayersQueue;
    NSMutableArray *_reusableRingLayers;
    NSMutableDictionary *_ringLayersByIdentifiers;
    unsigned long long _lastRingLayerIdentifier;
    CAAnimation *_ringEnlargementAnimation;
}

@property (readonly, nonatomic, getter=_isTouchDown) BOOL _touchDown;
@property (nonatomic) double fingerStillSpeed;
@property (nonatomic) double fingerMovingSpeed;
@property (nonatomic) double firstRippleInitialRadius;
@property (nonatomic) double fadeOutRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)init;
- (void).cxx_destruct;
- (void)_startAnimation;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (double)_currentSpeed;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)_stopAnimation;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithStyleProvider:(id)a0;
- (void)_refresh:(id)a0;
- (void)_updateRingEnlargementAnimation;
- (void)_enqueueRingLayerWithTimeIntervalSinceCreation:(double)a0 normalizedLocation:(struct CGPoint { double x0; double x1; })a1 speed:(double)a2;
- (id)_reusableTouchContextObject;
- (void)_enqueueReusableTouchContextObject:(id)a0;
- (id)_reusableRingLayer;
- (void)_enqueueReusableRingLayer:(id)a0;
- (void)_touchBeganAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_touchMovedToLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_touchEndedAtLocation:(struct CGPoint { double x0; double x1; })a0;

@end
