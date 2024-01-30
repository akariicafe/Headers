@class NSTimer;

@interface TSDFPSCACounter : TSDFPSCounter {
    unsigned int _CAFrameCount;
    NSTimer *_timer;
    unsigned long long _maxFrameDelta;
}

@property (nonatomic) BOOL shouldRunTimer;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)stopLoggingFPS;
- (void)p_updateFrameCount;
- (void)startLoggingFPS;

@end
