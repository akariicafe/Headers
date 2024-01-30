@class NSDictionary;

@interface VCPVoiceOverAssetProcessingTask : NSObject <VCPMADTaskProtocol> {
    BOOL _processingTypeScene;
    BOOL _processingTypeFace;
    unsigned long long _analysisFlags;
    NSDictionary *_options;
    struct CF<__CVBuffer *> { struct __CVBuffer *value_; } _inputBuffer;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > { _Atomic BOOL __a_value; } __a_; } _started;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > { _Atomic BOOL __a_value; } __a_; } _cancel;
    id /* block */ _completionHandler;
}

+ (id)taskWithProcessingTypes:(id)a0 forPixelBuffer:(struct __CVBuffer { } *)a1 withOptions:(id)a2 andCompletionHandler:(id /* block */)a3;

- (void)cancel;
- (int)run;
- (void).cxx_destruct;
- (void)dealloc;
- (float)resourceRequirement;
- (id).cxx_construct;
- (int)_analyzeFace:(id *)a0 error:(id *)a1;
- (id)initWithProcessingTypes:(id)a0 forPixelBuffer:(struct __CVBuffer { } *)a1 withOptions:(id)a2 andCompletionHandler:(id /* block */)a3;
- (int)_analyzeScene:(id *)a0 error:(id *)a1;

@end
