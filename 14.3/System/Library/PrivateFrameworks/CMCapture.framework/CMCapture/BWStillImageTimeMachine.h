@interface BWStillImageTimeMachine : NSObject {
    struct OpaqueFigSimpleMutex { } *_timeMachineMutex;
    struct opaqueCMSampleBuffer **_frames;
    BOOL _suspended;
}

@property (readonly, nonatomic) int capacity;

+ (void)initialize;
+ (BOOL)afComplete:(struct opaqueCMSampleBuffer { } *)a0;

- (struct opaqueCMSampleBuffer { } *)copyBestFrame;
- (void)drain;
- (void)_drain;
- (void)suspendAndDrain;
- (void)dealloc;
- (int)insertFrame:(struct opaqueCMSampleBuffer { } *)a0;
- (void)resume;
- (id)initWithCapacity:(int)a0;

@end
