@class NUVideoSourceNode, NSObject;
@protocol OS_dispatch_queue;

@interface NUKeyFrameSourceNode : NUVideoFrameSourceNode {
    NSObject<OS_dispatch_queue> *_queue;
    NUVideoSourceNode *_videoSourceNode;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _frameTime;
    struct __CVBuffer { } *_pixelBuffer;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)_evaluateImageWithSourceOptions:(id)a0 subsampleFactor:(long long *)a1 error:(out id *)a2;
- (struct { long long x0; long long x1; })pixelSizeWithSourceOptions:(id)a0;
- (id)initWithVideoSource:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 settings:(id)a2 orientation:(long long)a3;
- (id)initWithSettings:(id)a0 orientation:(long long)a1;
- (struct __CVBuffer { } *)_pixelBuffer:(out id *)a0;

@end
