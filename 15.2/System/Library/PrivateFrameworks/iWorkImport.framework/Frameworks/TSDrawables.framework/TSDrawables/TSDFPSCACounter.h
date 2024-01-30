@class NSTimer;

@interface TSDFPSCACounter : TSDFPSCounter {
    unsigned int _CAFrameCount;
    NSTimer *_timer;
    unsigned long long _maxFrameDelta;
}

@property (nonatomic) BOOL shouldRunTimer;

- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)stopLoggingFPS;
- (void)p_updateFrameCount;
- (void)startLoggingFPS;

@end
