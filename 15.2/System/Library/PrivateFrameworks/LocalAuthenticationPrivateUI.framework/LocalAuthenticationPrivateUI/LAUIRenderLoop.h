@class CADisplayLink;
@protocol LAUIRenderLoopDelegate;

@interface LAUIRenderLoop : NSObject {
    CADisplayLink *_display_link;
    BOOL _effective_paused;
    BOOL _background;
}

@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, nonatomic, getter=isDrawing) BOOL drawing;
@property (nonatomic, getter=isInApplicationContext) BOOL inApplicationContext;
@property (nonatomic) long long preferredFramesPerSecond;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (weak, nonatomic) id<LAUIRenderLoopDelegate> delegate;

- (void)_applicationDidBecomeActive:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_didInvalidate;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)invalidate;
- (void)_applicationWillEnterForeground:(id)a0;
- (void)dealloc;
- (void)_drawAtTime:(double)a0;
- (void)_didDraw;
- (void)attachToScreen:(id)a0;
- (void)_drawWithDisplayLink:(id)a0;
- (void)_updateEffectivePausedState;
- (void)_willDraw;
- (BOOL)_preferredPauseState;

@end
