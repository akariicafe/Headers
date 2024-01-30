@class NSString, MTLStageInputOutputDescriptor, MTLPipelineBufferDescriptorArray, NSArray, MTLLinkedFunctions;
@protocol MTLFunction;

@interface MTLComputePipelineDescriptor : NSObject <NSCopying>

@property (nonatomic) BOOL forceResourceIndex;
@property (nonatomic) unsigned long long resourceIndex;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) id<MTLFunction> computeFunction;
@property (nonatomic) BOOL threadGroupSizeIsMultipleOfThreadExecutionWidth;
@property (nonatomic) unsigned long long maxTotalThreadsPerThreadgroup;
@property (copy, nonatomic) MTLStageInputOutputDescriptor *stageInputDescriptor;
@property (readonly) MTLPipelineBufferDescriptorArray *buffers;
@property (nonatomic) BOOL supportIndirectCommandBuffers;
@property (copy, nonatomic) NSArray *insertLibraries;
@property (copy, nonatomic) NSArray *preloadedLibraries;
@property (copy, nonatomic) NSArray *binaryArchives;
@property (copy, nonatomic) MTLLinkedFunctions *linkedFunctions;
@property (nonatomic) BOOL supportAddingBinaryFunctions;
@property (nonatomic) unsigned long long maxCallStackDepth;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;

@end
