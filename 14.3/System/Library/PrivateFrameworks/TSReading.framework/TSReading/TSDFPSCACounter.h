@class NSTimer;

@interface TSDFPSCACounter : TSDFPSCounter {
    unsigned int mCAFrameCount;
    NSTimer *mTimer;
}

- (void)reset;
- (void)stopLoggingFPS;
- (void)p_updateFrameCount;
- (void)startLoggingFPS;

@end
