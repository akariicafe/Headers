@interface PTTimedRenderingMetadataVersion1 : PTTimedRenderingMetadata

@property (nonatomic) float focusDistance;
@property (nonatomic) float aperture;
@property (nonatomic) unsigned int agc;
@property (nonatomic) float alphaLowLight;
@property (nonatomic) unsigned int frameId;

- (id)initWithMinorVersion:(unsigned int)a0;
- (unsigned int)sizeOfSerializedObjectWithOptions:(id)a0;
- (BOOL)writeToData:(id)a0 withOptions:(id)a1;
- (void)applyToRenderRequest:(id)a0;
- (id)initWithData:(id)a0 minorVersion:(unsigned int)a1;

@end
