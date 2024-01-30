@class NSString, NSArray, CRNeuralRecognizerConfiguration, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group, OS_dispatch_semaphore;

@interface CRTextSequenceRecognizerModelEspresso : CRTextSequenceRecognizerModel {
    CRNeuralRecognizerConfiguration *_configuration;
}

@property (retain) CRNeuralRecognizerConfiguration *recognizerConfiguration;
@property void *context;
@property void *plan;
@property struct { void *plan; int network_index; } network;
@property int engine;
@property int precision;
@property struct vector<const char *, std::allocator<const char *>> { char **__begin_; char **__end_; struct __compressed_pair<const char **, std::allocator<const char *>> { char **__value_; } __end_cap_; } names;
@property (retain) NSString *currentConfigurationHash;
@property (retain) NSObject<OS_dispatch_queue> *predictionQueue;
@property (retain) NSObject<OS_dispatch_group> *predictionGroup;
@property (retain) NSObject<OS_dispatch_semaphore> *submissionSemaphore;
@property (readonly) NSArray *outputNames;

- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id)configuration;
- (BOOL)preheatWithError:(id *)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (id)modelFilePath;
- (id)predictFromInputs:(id)a0 error:(id *)a1;
- (id)inputBatchFromTextFeatures:(id)a0 image:(id)a1 featureWidth:(double)a2 configuration:(id)a3;
- (void)_setupContextAndPlanForConfiguration:(id)a0 error:(id *)a1;
- (BOOL)_shouldReconfigurePlanForInput:(id)a0;
- (void)_configurePlanForInput:(id)a0 error:(id *)a1;
- (id)outputFromOutputBuffers:(struct vector<espresso_buffer_t, std::allocator<espresso_buffer_t>> { struct *x0; struct *x1; struct __compressed_pair<espresso_buffer_t *, std::allocator<espresso_buffer_t>> { struct *x0; } x2; })a0 featureInfo:(id)a1;
- (struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })_createBufferWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 channels:(unsigned long long)a2 batchSize:(unsigned long long)a3 sequenceLength:(unsigned long long)a4;
- (void)_resetEspressoState;
- (id)_configurationHashForInput:(id)a0 batchSize:(unsigned long long)a1;
- (void *)_createContextForEngine:(int)a0 configuration:(id)a1;
- (id)_configurationHashForInput:(id)a0;
- (id)_modelConfigurationNameForInput:(id)a0;

@end
