@class NSString, BWInferenceMetadataRequirement, NSMutableData;

@interface BWInferenceHumanPosePropagator : NSObject <BWInferencePropagatable, BWEspressoInferenceTensorMemoryProvider> {
    BWInferenceMetadataRequirement *_outputRequirement;
    NSMutableData *_heatmapData;
    struct __IOSurface { } *_tensorBackingSurface;
}

@property (readonly, nonatomic) BOOL allowsAsyncPropagation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)propagateInferenceResultsToInferenceDictionary:(id)a0 usingStorage:(id)a1 inputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 propagationSampleBuffer:(struct opaqueCMSampleBuffer { } *)a3;
- (int)keypointsFromModelOutput:(void /* unknown type, blank encoding */ *)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 persons:(id)a3;
- (id)newMatchesOfHumanPoses:(id)a0 toTracks:(id)a1;
- (float)calculateIOU:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 with:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct __IOSurface { } *)backingMemoryForMetadataRequirement:(id)a0 bindingName:(id)a1 surfaceProperties:(id)a2;
- (id)initWithOutputRequirement:(id)a0;

@end
