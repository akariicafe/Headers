@class NSString, NSDictionary, ARImageData;

@interface ARSegmentationData : NSObject <ARResultData, ARQATraceable>

@property (nonatomic) double timestamp;
@property (readonly, nonatomic) struct __CVBuffer { } *segmentationBuffer;
@property (readonly, nonatomic) struct __CVBuffer { } *confidenceBuffer;
@property (readonly, nonatomic) struct __CVBuffer { } *uncertaintyBuffer;
@property (readonly, nonatomic) long long source;
@property (readonly, nonatomic) BOOL hasSegmentedPeople;
@property (nonatomic) struct __CVBuffer { } *normalsBuffer;
@property (nonatomic) struct __CVBuffer { } *semanticsSampledForDepth;
@property (nonatomic) struct __CVBuffer { } *confidenceSampledForDepth;
@property (nonatomic) struct __CVBuffer { } *uncertaintySampledForDepth;
@property (nonatomic) struct __CVBuffer { } *maskedSemanticsSampledForDepth;
@property (retain, nonatomic) ARImageData *sourceImageData;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[3]; } adjustedIntrinics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *tracingEntry;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTimestamp:(double)a0 segmentationBuffer:(struct __CVBuffer { } *)a1;
- (id)initWithTimestamp:(double)a0 segmentationBuffer:(struct __CVBuffer { } *)a1 confidenceBuffer:(struct __CVBuffer { } *)a2 uncertaintyBuffer:(struct __CVBuffer { } *)a3 source:(long long)a4;
- (id)initWithTimestamp:(double)a0 segmentationBuffer:(struct __CVBuffer { } *)a1 confidenceBuffer:(struct __CVBuffer { } *)a2 source:(long long)a3;
- (BOOL)resampleSemanticsToDepthCPU:(struct __CVBuffer { } *)a0 depthToSemantics:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 semanticsIntrinsics:(struct { void /* unknown type, empty encoding */ x0[3]; })a2 depthIntrinsics:(struct { void /* unknown type, empty encoding */ x0[3]; })a3;
- (void)updateTimestamp:(double)a0;

@end
