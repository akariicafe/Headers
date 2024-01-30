@class NSString;

@interface SISceneSegmentationData : NSObject <SIData>

@property (readonly) struct __CVBuffer { } *semantic;
@property (readonly) struct __CVBuffer { } *confidence;
@property (readonly) struct __CVBuffer { } *uncertainty;
@property (readonly) struct CGSize { double width; double height; } resolution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithOutputResolution:(struct CGSize { double x0; double x1; })a0;
- (id)initWithOutputSemanticBuffer:(struct __CVBuffer { } *)a0 confidenceBuffer:(struct __CVBuffer { } *)a1 uncertaintyBuffer:(struct __CVBuffer { } *)a2;

@end
