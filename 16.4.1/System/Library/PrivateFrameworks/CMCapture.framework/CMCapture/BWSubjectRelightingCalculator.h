@class BWInferenceEngineController, NSString, NSDictionary, FigMetalContext, BWPhotoDecompressor, NSObject, SubjectRelightingStage;
@protocol OS_dispatch_queue;

@interface BWSubjectRelightingCalculator : NSObject <BWInferenceEngineControllerDelegate, BWInferencePixelBufferPoolProvider> {
    NSObject<OS_dispatch_queue> *_prepareQueue;
    NSObject<OS_dispatch_queue> *_calculationQueue;
    BOOL _startedPrepare;
    BOOL _waitedForPrepare;
    BWPhotoDecompressor *_jpegDecompressor;
    BWInferenceEngineController *_inferenceController;
    NSDictionary *_inferenceOutputPoolsByAttachedMediaKey;
    SubjectRelightingStage *_subjectRelightingStage;
    FigMetalContext *_metalContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)preparedOutputPixelBufferPoolForAttachedMediaKey:(id)a0 format:(id)a1;
- (void)dealloc;
- (id)init;
- (struct __CVBuffer { } *)processorController:(id)a0 newOutputPixelBufferForProcessorInput:(id)a1 type:(unsigned long long)a2;
- (void)prepareForVideoFormatAsync:(id)a0;
- (void)processorController:(id)a0 didFinishProcessingInput:(id)a1 err:(int)a2;
- (void)processorController:(id)a0 didFinishProcessingSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 type:(unsigned long long)a2 processorInput:(id)a3 err:(int)a4;
- (id)startCalculationWithJPEGSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 stillImageRequestSettings:(id)a1 stillImageCaptureSettings:(id)a2;

@end
