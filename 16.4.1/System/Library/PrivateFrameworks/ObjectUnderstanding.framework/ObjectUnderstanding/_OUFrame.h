@protocol OUCamera;

@interface _OUFrame : NSObject <OUFrame>

@property (nonatomic) double timestamp;
@property (retain, nonatomic) id<OUCamera> camera;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } referenceOriginTransform;
@property (nonatomic) struct __CVBuffer { } *colorBuffer;
@property (retain, nonatomic) id<OUCamera> sceneCamera;
@property (nonatomic) struct __CVBuffer { } *sceneColorBuffer;
@property (nonatomic) struct __CVBuffer { } *sceneDepthBuffer;
@property (nonatomic) struct __CVBuffer { } *sceneDepthConfidenceBuffer;
@property (nonatomic) struct __CVBuffer { } *semanticLabelBuffer;
@property (nonatomic) struct __CVBuffer { } *semanticConfidenceBuffer;
@property (nonatomic) long long vioTrackingState;
@property (readonly, nonatomic) long long deviceOrientation;
@property (nonatomic) struct __CVBuffer { } *semanticLabelBufferOnWideCamera;

- (id)initWithFrame:(id)a0;
- (void)dealloc;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
