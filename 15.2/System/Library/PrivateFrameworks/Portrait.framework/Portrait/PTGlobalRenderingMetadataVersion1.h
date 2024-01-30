@interface PTGlobalRenderingMetadataVersion1 : PTGlobalRenderingMetadata

@property (nonatomic) float defaultAperture;
@property (nonatomic) float minAperture;
@property (nonatomic) float maxAperture;
@property (nonatomic) float highlightBoostFactor;
@property (nonatomic) float highlightChromaFactor;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sensorCropRect;
@property (nonatomic) struct { int width; int height; } rawSensorSize;
@property (nonatomic) float focalLength35mm;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } extrinsicsMatrix;
@property (nonatomic) unsigned int conversionGain;
@property (nonatomic) unsigned int readNoise1x;
@property (nonatomic) unsigned int readNoise8x;
@property (nonatomic) void /* unknown type, empty encoding */ visCropFactor;
@property (nonatomic) unsigned int sensorID;
@property (nonatomic) unsigned int renderingVersion;
@property (nonatomic) unsigned int sourceColorBitDepth;

- (id)initWithData:(id)a0;
- (id)initWithMinorVersion:(unsigned int)a0;
- (unsigned int)sizeOfSerializedObjectWithOptions:(id)a0;
- (BOOL)writeToData:(id)a0 withOptions:(id)a1;
- (void)applyToRenderState:(id)a0;
- (void)applyToRenderRequest:(id)a0;

@end
