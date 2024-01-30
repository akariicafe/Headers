@class NSString, NSArray, MTLPipelineBufferDescriptorArray, MTLRenderPipelineColorAttachmentDescriptorArray, MTLLinkedFunctions, MTLVertexDescriptor;
@protocol MTLFunction;

@interface MTLRenderPipelineDescriptor : NSObject <NSCopying>

@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) id<MTLFunction> vertexFunction;
@property (retain, nonatomic) id<MTLFunction> fragmentFunction;
@property (copy, nonatomic) MTLVertexDescriptor *vertexDescriptor;
@property (nonatomic) unsigned long long sampleCount;
@property (nonatomic) unsigned long long rasterSampleCount;
@property (nonatomic, getter=isAlphaToCoverageEnabled) BOOL alphaToCoverageEnabled;
@property (nonatomic, getter=isAlphaToOneEnabled) BOOL alphaToOneEnabled;
@property (nonatomic, getter=isRasterizationEnabled) BOOL rasterizationEnabled;
@property (nonatomic) unsigned long long maxVertexAmplificationCount;
@property (readonly) MTLRenderPipelineColorAttachmentDescriptorArray *colorAttachments;
@property (nonatomic) unsigned long long depthAttachmentPixelFormat;
@property (nonatomic) unsigned long long stencilAttachmentPixelFormat;
@property (nonatomic) unsigned long long inputPrimitiveTopology;
@property (nonatomic) unsigned long long tessellationPartitionMode;
@property (nonatomic) unsigned long long maxTessellationFactor;
@property (nonatomic, getter=isTessellationFactorScaleEnabled) BOOL tessellationFactorScaleEnabled;
@property (nonatomic) unsigned long long tessellationFactorFormat;
@property (nonatomic) unsigned long long tessellationControlPointIndexType;
@property (nonatomic) unsigned long long tessellationFactorStepFunction;
@property (nonatomic) unsigned long long tessellationOutputWindingOrder;
@property (readonly) MTLPipelineBufferDescriptorArray *vertexBuffers;
@property (readonly) MTLPipelineBufferDescriptorArray *fragmentBuffers;
@property (nonatomic) BOOL supportIndirectCommandBuffers;
@property (copy, nonatomic) NSArray *binaryArchives;
@property (copy, nonatomic) NSArray *vertexPreloadedLibraries;
@property (copy, nonatomic) NSArray *fragmentPreloadedLibraries;
@property (copy, nonatomic) MTLLinkedFunctions *vertexLinkedFunctions;
@property (copy, nonatomic) MTLLinkedFunctions *fragmentLinkedFunctions;
@property (nonatomic) BOOL supportAddingVertexBinaryFunctions;
@property (nonatomic) BOOL supportAddingFragmentBinaryFunctions;
@property (nonatomic) unsigned long long maxVertexCallStackDepth;
@property (nonatomic) unsigned long long maxFragmentCallStackDepth;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;

@end
