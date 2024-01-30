@class NSMutableDictionary;

@interface NRFUBFusionOutput : NRFOutput

@property (retain, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (retain, nonatomic) NSMutableDictionary *metadata;
@property (retain, nonatomic) struct __CVBuffer { } *linearOutputPixelBuffer;
@property (retain, nonatomic) NSMutableDictionary *linearOutputMetadata;
@property (nonatomic) int fusionMode;
@property (retain, nonatomic) struct __CVBuffer { } *inferenceInputPixelBuffer;
@property (nonatomic) BOOL providesInferencesWithoutInferenceInputPixelBuffer;
@property (retain, nonatomic) struct __CVBuffer { } *gainMapOutputPixelBuffer;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } refFrameTransform;

- (void).cxx_destruct;
- (void)dealloc;

@end
