@class UIScreen, CADisplayLink;
@protocol PKRenderLoopDelegate;

@interface PKRenderLoop : NSObject {
    CADisplayLink *_displayLink;
    BOOL _effectivePaused;
    BOOL _background;
    BOOL _delegateObservesForcingPause;
    BOOL _lastForcingPauseNotification;
}

@property (readonly, nonatomic) UIScreen *screen;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, nonatomic, getter=isDrawing) BOOL drawing;
@property (nonatomic) BOOL inApplicationContext;
@property (nonatomic) long long preferredFramesPerSecond;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (readonly, nonatomic, getter=isForcingPause) BOOL forcingPause;
@property (weak, nonatomic) id<PKRenderLoopDelegate> delegate;

- (void)_applicationDidBecomeActive:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)invalidate;
- (void)_applicationWillEnterForeground:(id)a0;
- (void)dealloc;
- (void)_updateApplicationState;
- (void)_drawAtTime:(double)a0;
- (void)_didDraw;
- (BOOL)attachToScreen:(id)a0;
- (void)_drawWithDisplayLink:(id)a0;
- (void)_updateEffectivePausedState;
- (void)_willDraw;

@end
