@class NSArray;

@interface VCPPhotosSceneprintAssetProcessingTask : NSObject <VCPMADTaskProtocol> {
    id /* block */ _completionHandler;
    NSArray *_assets;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _started;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _cancel;
}

+ (unsigned long long)_panoVNRequestMethod;
+ (id)taskWithAssets:(id)a0 andCompletionHandler:(id /* block */)a1;

- (BOOL)run:(id *)a0;
- (BOOL)autoCancellable;
- (int)run;
- (float)resourceRequirement;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
- (id)initWithAssets:(id)a0 andCompletionHandler:(id /* block */)a1;

@end
