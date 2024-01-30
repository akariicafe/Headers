@interface BWEspressoInferenceAdapter : NSObject

+ (void)initialize;
+ (id)celestialClassifiersBundle;
+ (id)celestialClassifiersSubdirectory;
+ (id)espressoNetworkURLForPlatformedResource:(id)a0 bundle:(id)a1 subdirectory:(id)a2;

- (id)inferenceProviderForType:(int)a0 version:(struct { unsigned short x0; unsigned short x1; unsigned short x2; })a1 configuration:(id)a2 resourceProvider:(id)a3 status:(int *)a4;
- (int)_mostAcceleratedExecutionTargetForSmartCameraFromResourceProvider:(id)a0;
- (unsigned int)_allowedBufferCompressionDirectionForExecutionTarget:(int)a0;

@end
