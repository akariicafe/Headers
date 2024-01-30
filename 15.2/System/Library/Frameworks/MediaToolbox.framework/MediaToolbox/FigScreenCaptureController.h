@protocol FigScreenCaptureFrameHandlerDelegate;

@interface FigScreenCaptureController : NSObject

@property (nonatomic) struct OpaqueFigVirtualDisplaySession { } *session;
@property (nonatomic) struct OpaqueFigSimpleMutex { } *lock;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } minIntervalBetweenFrames;
@property (weak, nonatomic) id<FigScreenCaptureFrameHandlerDelegate> delegate;

+ (id)screenCaptureControllerWithSize:(struct CGSize { double x0; double x1; })a0 minIntervalBetweenFrames:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

- (void)stopCapture;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 minIntervalBetweenFrames:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)didReceiveSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 destRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 transform:(unsigned int)a3;
- (void)startCapture;
- (void).cxx_destruct;
- (void)dealloc;

@end
