@protocol FigScreenCaptureFrameHandlerDelegate;

@interface FigScreenCaptureController : NSObject

@property (nonatomic) struct OpaqueFigVirtualDisplaySession { } *session;
@property (nonatomic) struct OpaqueFigSimpleMutex { } *lock;
@property (nonatomic) struct __CFDictionary { } *options;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } minIntervalBetweenFrames;
@property (weak, nonatomic) id<FigScreenCaptureFrameHandlerDelegate> delegate;

+ (id)screenCaptureControllerWithFigVirtualDisplayOptions:(id)a0;
+ (id)screenCaptureControllerWithSize:(struct CGSize { double x0; double x1; })a0 minIntervalBetweenFrames:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

- (void)stopCapture;
- (void)dealloc;
- (void).cxx_destruct;
- (void)startCapture;
- (id)initWithFigVirtualDisplayOptions:(id)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 minIntervalBetweenFrames:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)resumeCapture;
- (void)setFigVirtualDisplayOption:(id)a0 forKey:(id)a1;
- (void)suspendCapture;

@end
