@interface BWStillImageTimeMachine : NSObject {
    struct OpaqueFigSimpleMutex { } *_timeMachineMutex;
    struct opaqueCMSampleBuffer **_frames;
    BOOL _suspended;
}

@property (readonly, nonatomic) int capacity;

+ (void)initialize;
+ (BOOL)afComplete:(struct opaqueCMSampleBuffer { } *)a0;

- (id)initWithCapacity:(int)a0;
- (void)dealloc;
- (void)drain;
- (void)resume;
- (void)suspendAndDrain;
- (struct opaqueCMSampleBuffer { } *)copyBestFrame;
- (int)insertFrame:(struct opaqueCMSampleBuffer { } *)a0;

@end
