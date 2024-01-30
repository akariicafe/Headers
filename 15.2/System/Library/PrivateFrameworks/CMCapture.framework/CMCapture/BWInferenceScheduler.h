@class NSMapTable, NSObject;
@protocol OS_dispatch_workloop;

@interface BWInferenceScheduler : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionsLock;
    NSMapTable *_connectionsByIdentifier;
    NSObject<OS_dispatch_workloop> *_inferenceWorkloop;
    NSObject<OS_dispatch_workloop> *_scalingWorkloop;
    NSObject<OS_dispatch_workloop> *_submissionWorkloop;
}

+ (void)initialize;

- (id)_queueForJob:(struct { id x0; id x1; unsigned int x2; unsigned char x3; unsigned char x4; _Atomic unsigned char x5; _Atomic unsigned char x6; } *)a0 fromConnection:(id)a1;
- (void)_processJobsFromFramebuffer:(id)a0 usingInputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 inferencePropagationHandler:(id /* block */)a2 atExecutionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 forConnection:(id)a4;
- (int)performInferencesForConnection:(unsigned long long)a0 usingInputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 attachingResultsToSampleBuffer:(struct opaqueCMSampleBuffer { } *)a2 skippingInferencesWithTypes:(id)a3;
- (int)prepareForInferenceRequirements:(id)a0 dependencyProviderSource:(id)a1 formatProvider:(id)a2 pixelBufferPoolProvider:(id)a3 connection:(unsigned long long)a4;
- (unsigned long long)registerInferenceConnection;
- (void)unregisterInferenceConnection:(unsigned long long)a0;
- (id)init;
- (void)dealloc;

@end
