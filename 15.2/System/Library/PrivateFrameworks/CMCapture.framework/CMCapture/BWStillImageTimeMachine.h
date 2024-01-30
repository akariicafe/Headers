@interface BWStillImageTimeMachine : NSObject {
    struct OpaqueFigSimpleMutex { } *_timeMachineMutex;
    struct opaqueCMSampleBuffer **_frames;
    BOOL _suspended;
}

@property (readonly, nonatomic) int capacity;

+ (void)initialize;
+ (BOOL)afComplete:(struct opaqueCMSampleBuffer { } *)a0;

- (int)insertFrame:(struct opaqueCMSampleBuffer { } *)a0;
- (void)drain;
- (void)suspendAndDrain;
- (void)resume;
- (id)initWithCapacity:(int)a0;
- (void)dealloc;
- (struct opaqueCMSampleBuffer { } *)copyBestFrame;

@end
