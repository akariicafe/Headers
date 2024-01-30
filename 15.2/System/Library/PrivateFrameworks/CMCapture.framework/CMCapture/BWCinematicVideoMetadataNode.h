@class BWNodeOutput;

@interface BWCinematicVideoMetadataNode : BWNode {
    struct opaqueCMFormatDescription { } *_metadataFormatDescription;
    BOOL _previousGeneratedMetadataBufferWasEmpty;
    struct OpaqueCMBlockBuffer { } *_emptyMetadataSampleData;
    unsigned int _localIDForAperture_BE;
    unsigned int _localIDForDisparity_BE;
    unsigned int _localIDForCinematographyMetadata_BE;
    unsigned int _localIDForRenderingMetadata_BE;
    unsigned int _localIDForStabilizationMetadata_BE;
}

@property (readonly, nonatomic) BWNodeOutput *passthruOutput;
@property (readonly, nonatomic) BWNodeOutput *metadataOutput;

+ (void)initialize;

- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (struct OpaqueCMBlockBuffer { } *)_emptyMetadataBlockBuffer;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (id)init;
- (void)dealloc;
- (void)_emitMetadataWithCinematographyMetadata:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
