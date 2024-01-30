@class NSString, ARImageData;

@interface ARMLDepthData : NSObject <ARResultData> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _singleFrameDepthBufferLock;
    struct __CVBuffer { } *_singleFrameDepthBuffer;
}

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) struct __CVBuffer { } *depthBuffer;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } depthBufferSize;
@property (readonly, nonatomic) long long source;
@property (readonly, nonatomic) struct __CVBuffer { } *confidenceBuffer;
@property (nonatomic) struct __CVBuffer { } *confidenceMap;
@property (nonatomic) struct __CVBuffer { } *singleFrameDepthBuffer;
@property (nonatomic) struct __CVBuffer { } *singleFrameConfidenceBuffer;
@property (nonatomic) struct __CVBuffer { } *normalsBuffer;
@property (retain, nonatomic) ARImageData *sourceImageData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTimestamp:(double)a0 depthBuffer:(struct __CVBuffer { } *)a1 confidenceBuffer:(struct __CVBuffer { } *)a2 source:(long long)a3;
- (id)initWithTimestamp:(double)a0 depthBuffer:(struct __CVBuffer { } *)a1 source:(long long)a2;

@end
