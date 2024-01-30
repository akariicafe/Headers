@class NSString, BWInferenceMetadataRequirement;

@interface BWEspressoInferenceFaceprintPropagator : NSObject <BWInferencePropagatable> {
    BWInferenceMetadataRequirement *_faceprintRequirement;
    BWInferenceMetadataRequirement *_confidenceRequirement;
    unsigned long long _faceprintSizeBytes;
    unsigned long long _maxFaces;
    unsigned long long _faceIndex;
}

@property (readonly, nonatomic) BOOL allowsAsyncPropagation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)propagateInferenceResultsToInferenceDictionary:(id)a0 usingStorage:(id)a1 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 propagationSampleBuffer:(struct opaqueCMSampleBuffer { } *)a3;
- (void)dealloc;
- (id)initWithFaceprintRequirement:(id)a0 faceprintSizeBytes:(unsigned long long)a1 confidenceRequirement:(id)a2 maxFaces:(unsigned long long)a3 faceIndex:(unsigned long long)a4;

@end
