@class NSString, PTRenderPipelineDescriptor;
@protocol RenderingIntegration;

@interface PTRenderPipelineState : NSObject <PTRenderState> {
    PTRenderPipelineDescriptor *_desc;
    id<RenderingIntegration> _renderIntegration;
    struct CGSize { double width; double height; } _colorOutputSizeCropped;
    int _quality;
    unsigned long long _renderingVersion;
}

@property (readonly) int quality;
@property (nonatomic) float focalLenIn35mmFilm;
@property (nonatomic) int conversionGain;
@property (nonatomic) int readNoise_1x;
@property (nonatomic) int readNoise_8x;
@property (nonatomic) float noiseScaleFactor;
@property (nonatomic) int rawSensorHeight;
@property (nonatomic) int rawSensorWidth;
@property (nonatomic) void /* unknown type, empty encoding */ visCropFactor;
@property (nonatomic) int sensorID;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } totalSensorCrop;
@property (nonatomic) int sourceColorBitDepth;
@property (nonatomic) unsigned long long renderingVersion;
@property (nonatomic) float networkBias;
@property (nonatomic) int hwModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)classForVersion:(unsigned long long)a0;

- (int)encodeRenderTo:(id)a0 withRenderRequest:(id)a1;
- (id)initWithPipelineDescriptor:(id)a0 quality:(int)a1;
- (BOOL)prepareForRendering:(BOOL)a0;
- (BOOL)prepareForRendering;
- (void)adjustScissorRect:(id)a0;
- (void).cxx_destruct;

@end
