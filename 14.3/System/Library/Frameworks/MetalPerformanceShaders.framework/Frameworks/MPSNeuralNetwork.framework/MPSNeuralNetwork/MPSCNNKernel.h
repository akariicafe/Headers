@class MPSExternalCNNUnary;
@protocol MPSNNPadding, MPSImageAllocator;

@interface MPSCNNKernel : MPSKernel {
    MPSExternalCNNUnary *_plugin;
    BOOL _pluginSupportsBatchEncode;
    unsigned long long _maxBatchSize;
    int _checkFlags;
    void /* function */ *_encode;
    void /* function */ *_batchEncode;
    void *_encodeData;
    unsigned long long _pluginOptions;
}

@property (nonatomic) struct { long long x; long long y; long long z; } offset;
@property (nonatomic) struct { struct { unsigned long long x; unsigned long long y; unsigned long long z; } origin; struct { unsigned long long width; unsigned long long height; unsigned long long depth; } size; } clipRect;
@property (nonatomic) unsigned long long destinationFeatureChannelOffset;
@property (nonatomic) unsigned long long sourceFeatureChannelOffset;
@property (nonatomic) unsigned long long sourceFeatureChannelMaxCount;
@property (nonatomic) unsigned long long edgeMode;
@property (readonly, nonatomic) unsigned long long kernelWidth;
@property (readonly, nonatomic) unsigned long long kernelHeight;
@property (readonly, nonatomic) unsigned long long strideInPixelsX;
@property (readonly, nonatomic) unsigned long long strideInPixelsY;
@property (readonly, nonatomic) unsigned long long dilationRateX;
@property (readonly, nonatomic) unsigned long long dilationRateY;
@property (readonly, nonatomic) BOOL isBackwards;
@property (readonly, nonatomic) BOOL isStateModified;
@property (retain, nonatomic) id<MPSNNPadding> padding;
@property (retain, nonatomic) id<MPSImageAllocator> destinationImageAllocator;

- (unsigned long long)maxBatchSize;
- (id)initWithDevice:(id)a0;
- (BOOL)pluginSupportsBatchEncode;
- (void)encodeBatchToCommandBuffer:(id)a0 sourceImages:(id)a1 destinationStates:(id)a2 destinationImages:(id)a3;
- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 destinationState:(id)a2 destinationImage:(id)a3;
- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 destinationImage:(id)a2;
- (void)encodeBatchToCommandBuffer:(id)a0 sourceImages:(id)a1 destinationImages:(id)a2;
- (id)init;
- (id)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1;
- (id)resultStateBatchForSourceImage:(id)a0 sourceStates:(id)a1 destinationImage:(id)a2;
- (id)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 destinationState:(id *)a2 destinationStateIsTemporary:(BOOL)a3;
- (id)destinationImageDescriptorForSourceImages:(id)a0 sourceStates:(id)a1;
- (void)dealloc;
- (id)encodeBatchToCommandBuffer:(id)a0 sourceImages:(id)a1 destinationStates:(id *)a2 destinationStateIsTemporary:(BOOL)a3;
- (BOOL)filterHandlesPlugin;
- (id)destinationImageDescriptorForSourceImages:(id)a0 sourceStates:(id)a1 paddingMethod:(unsigned long long)a2 sourceOffset:(struct { long long x0; long long x1; long long x2; } *)a3 kernelOffset:(struct { long long x0; long long x1; long long x2; } *)a4;
- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 inState:(id)a2 destinationImage:(id)a3;
- (void)encodeBatchToCommandBuffer:(id)a0 sourceImages:(id)a1 inStates:(id)a2 destinationImages:(id)a3;
- (id)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 inState:(id)a2;
- (id)encodeBatchToCommandBuffer:(id)a0 sourceImages:(id)a1 inStates:(id)a2;
- (id)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 sourceState:(id)a2 destinationState:(id *)a3 destinationStateIsTemporary:(BOOL)a4;
- (id)encodeBatchToCommandBuffer:(id)a0 sourceImages:(id)a1 sourceStates:(id)a2 destinationStates:(id *)a3 destinationStateIsTemporary:(BOOL)a4;
- (id)encodeBatchToCommandBuffer:(id)a0 sourceImages:(id)a1;
- (BOOL)appendBatchBarrier;
- (id)temporaryResultStateBatchForCommandBuffer:(id)a0 sourceImage:(id)a1 sourceStates:(id)a2 destinationImage:(id)a3;
- (unsigned long long)batchEncodingStorageSizeForSourceImage:(id)a0 sourceStates:(id)a1 destinationImage:(id)a2;
- (BOOL)setPlugin:(id)a0;
- (void)copyToGradientState:(id)a0 sourceImage:(id)a1 sourceStates:(id)a2 destinationImage:(id)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (struct MPSRegion { struct MPSOrigin { double x0; double x1; double x2; } x0; struct MPSSize { double x0; double x1; double x2; } x1; })sourceRegionForDestinationSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (void)encodeToCommandBuffer:(id)a0 sourceImage:(id)a1 inState:(id)a2 destinationImage:(id)a3 subBatchIndex:(unsigned long long)a4 batchSize:(unsigned long long)a5;
- (void /* unknown type, empty encoding */)sourcePositionOfTopLeftCornerOfFilterWindow;
- (id)destinationImageDescriptorForSourceImages:(id)a0 sourceStates:(id)a1 paddingMethod:(unsigned long long)a2 sourceOffset:(struct { long long x0; long long x1; long long x2; } *)a3;
- (unsigned long long)encodingStorageSizeForSourceImage:(id)a0 sourceStates:(id)a1 destinationImage:(id)a2;
- (BOOL)isResultStateReusedAcrossBatch;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (id)debugDescription;
- (id)temporaryResultStateForCommandBuffer:(id)a0 sourceImage:(id)a1 sourceStates:(id)a2 destinationImage:(id)a3;
- (id)resultStateForSourceImage:(id)a0 sourceStates:(id)a1 destinationImage:(id)a2;
- (id)plugin;
- (void)encodeWithCoder:(id)a0;

@end
