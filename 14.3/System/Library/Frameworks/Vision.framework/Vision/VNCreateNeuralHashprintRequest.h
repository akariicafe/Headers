@class NSArray, NSString;

@interface VNCreateNeuralHashprintRequest : VNImageBasedRequest <VNImageIdealImageSizeProviding>

@property (readonly) NSArray *supportedImageSizeSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (id)defaultProcessingDeviceForRevision:(unsigned long long)a0;
+ (BOOL)warmUpSession:(id)a0 error:(id *)a1;
+ (Class)configurationClass;

- (id)_detectorAndOptions:(id *)a0 loadedInSession:(id)a1 error:(id *)a2;
- (BOOL)internalPerformRevision:(unsigned long long)a0 inContext:(id)a1 error:(id *)a2;
- (BOOL)warmUpSession:(id)a0 error:(id *)a1;

@end
