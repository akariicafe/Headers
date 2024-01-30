@interface BWFusionTrackerInferenceAdapter : NSObject

- (id)_urlForNetwork:(id)a0;
- (id)_inferenceProvidersForTrackingOperation:(long long)a0 meanPixelCalculator:(id)a1 inputVideoRequirement:(id)a2 inOutOrderBufferRequirement:(id *)a3 configuration:(id)a4 resourceProvider:(id)a5;
- (id)inferenceProvidersForType:(int)a0 version:(struct { unsigned short x0; unsigned short x1; unsigned short x2; })a1 configuration:(id)a2 resourceProvider:(id)a3 status:(int *)a4;

@end
