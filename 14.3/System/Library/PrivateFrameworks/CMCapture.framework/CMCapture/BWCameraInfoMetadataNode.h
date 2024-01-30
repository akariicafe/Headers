@class BWNodeOutput;

@interface BWCameraInfoMetadataNode : BWNode {
    BOOL _generateLivePhotosMetadata;
    struct opaqueCMFormatDescription { } *_boxedMetadataFormatDescription;
    struct opaqueCMFormatDescription { } *_basicBoxedMetadataFormatDescription;
    BOOL _previousGeneratedMetadataBufferWasEmpty;
    struct OpaqueCMBlockBuffer { } *_emptyMetadataSampleData;
    struct { int width; int height; } _videoDimensions;
    unsigned int _localIDForLivePhotosMetadata_BE;
}

@property (readonly, nonatomic) BWNodeOutput *passthruOutput;
@property (readonly, nonatomic) BWNodeOutput *boxedMetadataOutput;

+ (void)initialize;

- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeType;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (id)initForLivePhotosMetadata:(BOOL)a0 generateDebugMetadata:(BOOL)a1;
- (void)_emitLivePhotosAndDebugBoxedMetadataForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 metadata:(id)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (id)_initForMotionMetadataSource:(int)a0 generateLivePhotosMetadata:(BOOL)a1 generateDebugMetadata:(BOOL)a2;
- (struct OpaqueCMBlockBuffer { } *)_emptyMetadataBlockBuffer;

@end
