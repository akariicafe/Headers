@class NSMutableDictionary;

@interface NRFDeepFusionOutput : NRFOutput

@property (retain, nonatomic) struct __CVBuffer { } *proxyPixelBuffer;
@property (retain, nonatomic) NSMutableDictionary *proxyMetadata;
@property (retain, nonatomic) struct __CVBuffer { } *syntheticReferencePixelBuffer;
@property (retain, nonatomic) NSMutableDictionary *syntheticReferenceMetadata;
@property (retain, nonatomic) struct __CVBuffer { } *syntheticReferenceFusionMapPixelBuffer;
@property (retain, nonatomic) struct __CVBuffer { } *syntheticLongPixelBuffer;
@property (retain, nonatomic) NSMutableDictionary *syntheticLongMetadata;
@property (retain, nonatomic) struct __CVBuffer { } *syntheticLongFusionMapPixelBuffer;
@property (retain, nonatomic) struct __CVBuffer { } *longFusionMapPixelBuffer;
@property (retain, nonatomic) struct __CVBuffer { } *referenceEVZeroPixelBuffer;
@property (retain, nonatomic) NSMutableDictionary *referenceEVZeroMetadata;
@property (retain, nonatomic) struct __CVBuffer { } *inferenceInputPixelBuffer;
@property (nonatomic) BOOL providesInferencesWithoutInferenceInputPixelBuffer;
@property (retain, nonatomic) struct __CVBuffer { } *gainMapOutputPixelBuffer;
@property (retain, nonatomic) struct __CVBuffer { } *linearOutputPixelBuffer;
@property (retain, nonatomic) NSMutableDictionary *linearOutputMetadata;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } refFrameTransform;
@property (nonatomic) BOOL refFrameTransformIsValid;

- (void)dealloc;
- (void).cxx_destruct;

@end
