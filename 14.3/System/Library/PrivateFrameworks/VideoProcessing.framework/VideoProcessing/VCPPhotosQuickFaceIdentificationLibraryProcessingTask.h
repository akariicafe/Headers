@class NSArray;

@interface VCPPhotosQuickFaceIdentificationLibraryProcessingTask : NSObject <VCPMADTaskProtocol> {
    id /* block */ _completionHandler;
    NSArray *_photoLibraries;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > { _Atomic BOOL __a_value; } __a_; } _started;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__1::__cxx_atomic_base_impl<bool> > { _Atomic BOOL __a_value; } __a_; } _cancel;
}

+ (BOOL)_concurrentFaceProcessing;
+ (id)taskWithPhotoLibraries:(id)a0 andCompletionHandler:(id /* block */)a1;

- (void)cancel;
- (int)run;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (float)resourceRequirement;
- (void)_analyzeAsset:(id)a0 withManager:(id)a1;
- (id)initWithPhotoLibraries:(id)a0 andCompletionHandler:(id /* block */)a1;
- (BOOL)run:(id *)a0;

@end
