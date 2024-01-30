@class NSArray, PHPhotoLibrary, VCPDatabaseReader;

@interface VCPVideoStabilizationAssetProcessingTask : NSObject <VCPMADTaskProtocol> {
    id /* block */ _completionHandler;
    NSArray *_assets;
    PHPhotoLibrary *_photoLibrary;
    VCPDatabaseReader *_database;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _cancel;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _started;
    unsigned long long _stabilizationType;
    BOOL _onDemandPixel;
    BOOL _onDemandGyro;
}

+ (BOOL)deserializeStabilizationRecipeInAttributes:(id)a0;
+ (id)taskWithAssets:(id)a0 andOptions:(id)a1 andCompletionHandler:(id /* block */)a2;

- (BOOL)autoCancellable;
- (int)run;
- (float)resourceRequirement;
- (int)main;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
- (id)initWithAssets:(id)a0 andOptions:(id)a1 andCompletionHandler:(id /* block */)a2;

@end
