@class NSString, NSDictionary, VNMetalContext, NSObject;
@protocol OS_dispatch_queue;

@interface VNDetector : NSObject <VNDetectorKeyProviding, VNRequestRevisionProviding>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue;
@property (readonly, copy) NSDictionary *configurationOptions;
@property (readonly, nonatomic) VNMetalContext *metalContext;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (readonly, nonatomic) unsigned long long backingStore;
@property (readonly, nonatomic) unsigned long long requestRevision;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)detectorKeyComponentForDetectorConfigurationOptionKey:(id)a0 value:(id)a1;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)a0;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)keyForDetectorWithConfigurationOptions:(id)a0;
+ (Class)detectorClassForConfigurationOptions:(id)a0 error:(id *)a1;
+ (id)detectorName;
+ (Class)_detectorClassForDetectorType:(id)a0 options:(id)a1 detectorCreationOptions:(id *)a2 error:(id *)a3;
+ (Class)detectorClassForDetectorType:(id)a0 error:(id *)a1;
+ (Class)detectorClassForDetectorType:(id)a0 configuredWithOptions:(id)a1 error:(id *)a2;
+ (void)fullyPopulateConfigurationOptions:(id)a0;
+ (id)fullyPopulatedConfigurationOptionsWithOverridingOptions:(id)a0;
+ (id)detectorWithConfigurationOptions:(id)a0 forSession:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)initWithConfigurationOptions:(id)a0;
- (id)processWithOptions:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 warningRecorder:(id)a2 error:(id *)a3;
- (id)supportedImageSizeSetForProcessingOptions:(id)a0;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (BOOL)supportsProcessingDevice:(id)a0;
- (BOOL)canBehaveAsDetectorOfClass:(Class)a0 withConfiguration:(id)a1;
- (BOOL)shouldBeReplacedByDetectorOfClass:(Class)a0 withConfiguration:(id)a1;
- (BOOL)warmUpSession:(id)a0 withOptions:(id)a1 error:(id *)a2;
- (BOOL)currentQueueIsSynchronizationQueue;
- (BOOL)validateImageBuffer:(id)a0 error:(id *)a1;
- (BOOL)needsMetalContext;
- (id)processInSynchronizationQueueUsingQualityOfServiceClass:(unsigned int)a0 options:(id)a1 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 warningRecorder:(id)a3 error:(id *)a4;
- (id)validatedImageBufferFromOptions:(id)a0 error:(id *)a1;
- (id)newMetalContextForConfigurationOptions:(id)a0 error:(id *)a1;
- (BOOL)getOptionalCanceller:(id *)a0 inOptions:(id)a1 error:(id *)a2;
- (id)requiredCancellerInOptions:(id)a0 error:(id *)a1;
- (id)validatedProcessingDeviceInOptions:(id)a0 error:(id *)a1;
- (void)updateConfigurationOptionsWithObject:(id)a0 forKey:(id)a1;
- (BOOL)useGPU;

@end
