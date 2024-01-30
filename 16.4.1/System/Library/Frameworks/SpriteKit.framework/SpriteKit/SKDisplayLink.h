@class CADisplay, NSTimer, CADisplayLink;

@interface SKDisplayLink : NSObject {
    NSTimer *_timer;
    id _client;
    CADisplayLink *_caDisplayLink;
    CADisplay *_display;
    BOOL _paused;
    BOOL _callbackAlreadyInProgress;
    double _previousFrameTime;
    float _preferredFramesPerSecond;
    id /* block */ _block;
    float _averageFrameTime;
    long long _frameCount;
    double _frameCountBeginTime;
}

@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) long long preferredFramesPerSecond;
@property (retain, nonatomic) CADisplay *display;

+ (id)displayLinkWithDisplay:(id)a0 handler:(id /* block */)a1 client:(id)a2;

- (void)_teardown;
- (void)_setup;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithDisplay:(id)a0 handler:(id /* block */)a1 client:(id)a2;
- (void)_caDisplayLinkCallback;
- (BOOL)_callbackAlreadyInProgress;
- (void)_callbackForNextFrame:(double)a0;
- (void)_setCallbackAlreadyInProgress:(BOOL)a0;

@end
