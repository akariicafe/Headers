@class NSArray;

@interface VCPPhotosSceneprintAssetProcessingTask : NSObject <VCPMADTaskProtocol> {
    id /* block */ _completionHandler;
    NSArray *_assets;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _started;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _cancel;
    unsigned long long _revision;
}

+ (unsigned long long)_panoVNRequestMethod;
+ (id)taskWithAssets:(id)a0 options:(id)a1 andCompletionHandler:(id /* block */)a2;

- (int)run;
- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)run:(id *)a0;
- (BOOL)autoCancellable;
- (id)initWithAssets:(id)a0 options:(id)a1 andCompletionHandler:(id /* block */)a2;
- (float)resourceRequirement;

@end
