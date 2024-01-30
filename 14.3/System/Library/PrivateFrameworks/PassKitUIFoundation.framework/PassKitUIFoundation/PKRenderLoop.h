@class CADisplayLink;
@protocol PKRenderLoopDelegate;

@interface PKRenderLoop : NSObject {
    CADisplayLink *_displayLink;
    BOOL _effectivePaused;
    BOOL _background;
}

@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, nonatomic, getter=isDrawing) BOOL drawing;
@property (nonatomic) BOOL inApplicationContext;
@property (nonatomic) long long preferredFramesPerSecond;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (weak, nonatomic) id<PKRenderLoopDelegate> delegate;

- (void)_applicationDidBecomeActive:(id)a0;
- (id)init;
- (void)_applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)attachToScreen:(id)a0;
- (void)_drawAtTime:(double)a0;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)_didDraw;
- (void)invalidate;
- (void)_drawWithDisplayLink:(id)a0;
- (void)_updateEffectivePausedState;
- (void)_willDraw;
- (BOOL)_subclassPreferredPauseState;

@end
