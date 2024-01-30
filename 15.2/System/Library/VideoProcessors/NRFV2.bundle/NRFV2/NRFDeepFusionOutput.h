@class NSMutableDictionary;

@interface NRFDeepFusionOutput : NRFOutput

@property (retain, nonatomic) struct __CVBuffer { } *proxyPixelBuffer;
@property (retain, nonatomic) NSMutableDictionary *proxyMetadata;
@property (retain, nonatomic) struct __CVBuffer { } *referencePixelBuffer;
@property (retain, nonatomic) NSMutableDictionary *referenceMetadata;
@property (retain, nonatomic) struct __CVBuffer { } *referenceNoisePixelBuffer;
@property (retain, nonatomic) struct __CVBuffer { } *longPixelBuffer;
@property (retain, nonatomic) NSMutableDictionary *longMetadata;
@property (retain, nonatomic) struct __CVBuffer { } *longNoisePixelBuffer;
@property (retain, nonatomic) struct __CVBuffer { } *realLongNoisePixelBuffer;
@property (retain, nonatomic) struct __CVBuffer { } *inferenceInputPixelBuffer;
@property (nonatomic) BOOL providesInferencesWithoutInferenceInputPixelBuffer;
@property (retain, nonatomic) struct __CVBuffer { } *gainMapOutputPixelBuffer;
@property (retain, nonatomic) struct __CVBuffer { } *linearOutputPixelBuffer;
@property (retain, nonatomic) NSMutableDictionary *linearOutputMetadata;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } refFrameTransform;
@property (nonatomic) BOOL refFrameTransformIsValid;

- (void).cxx_destruct;
- (void)dealloc;

@end
