@class NSString, NSArray;

@interface InpaintingEspressoExecutionResources : NSObject

@property (readonly) struct { void *plan; int network_index; } network;
@property (readonly) void *plan;
@property (readonly) void *context;
@property (readonly) NSString *modelResourceDescriptor;
@property (readonly) NSString *modelResourceFileName;
@property (retain) NSString *modelConfigurationName;
@property (readonly) NSArray *inputBlobNames;
@property (readonly) NSArray *outputBlobNames;
@property (readonly) BOOL membraneModel;
@property (readonly) int modelInputPixelFormat;
@property (readonly) int modelOutputPixelFormat;
@property (readonly) int filterUsageCount;

+ (void)tearDownEspressoContext:(void **)a0 andPlan:(void **)a1;

- (BOOL)parseModelResourceDescriptor:(id)a0 extractMembraneInfo:(BOOL *)a1 inputPixelFormat:(int *)a2 outputPixelFormat:(int *)a3 andResourceFileName:(id *)a4 error:(id *)a5;
- (void)registerFilterUsage;
- (BOOL)initializeInpaintingModelForResourceDescriptor:(id)a0 error:(id *)a1;
- (id)CIImageProcessorDigestObject;
- (void)releaseModelIfNoLongerNeeded;
- (BOOL)isModelInitialized;
- (void)dealloc;
- (BOOL)descriptorIsAMembraneModel:(id)a0 error:(id *)a1;
- (id)init;
- (BOOL)initializeModelForResourceDescriptor:(id)a0 resourceFileName:(id)a1 inputBlobNames:(id)a2 outputBlobNames:(id)a3 cpuOnlyModel:(BOOL)a4 membraneModel:(BOOL)a5 modelInputPixelFormat:(int)a6 modelOutputPixelFormat:(int)a7 error:(id *)a8;
- (void)updateWithModelResourceDescriptor:(id)a0 modelResourceFileName:(id)a1 network:(struct { void *x0; int x1; })a2 plan:(void *)a3 context:(void *)a4 inputBlobNames:(id)a5 outputBlobNames:(id)a6 membraneModel:(BOOL)a7 modelInputPixelFormat:(int)a8 modelOutputPixelFormat:(int)a9;
- (void)freeEspressoResources;
- (id)description;
- (void)deregisterFilterUsage;

@end
