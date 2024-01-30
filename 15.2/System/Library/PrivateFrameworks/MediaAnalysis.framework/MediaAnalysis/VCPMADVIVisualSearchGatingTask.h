@class NSObject, NSString, VCPMADServiceImageAsset, MADVIVisualSearchGatingRequest;
@protocol OS_dispatch_queue, MTLDevice, VICancellable;

@interface VCPMADVIVisualSearchGatingTask : NSObject <VCPMADServiceImageProcessingSubtaskProtocol, VCPMADTaskProtocol> {
    MADVIVisualSearchGatingRequest *_request;
    VCPMADServiceImageAsset *_imageAsset;
    NSString *_signpostPayload;
    id<MTLDevice> _preferredMetalDevice;
    NSObject<OS_dispatch_queue> *_cancelQueue;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _canceled;
    id<VICancellable> _cancellable;
}

+ (id)dependencies;
+ (id)taskWithRequest:(id)a0 imageAsset:(id)a1 andSignpostPayload:(id)a2;

- (BOOL)autoCancellable;
- (void)setPreferredMetalDevice:(id)a0;
- (int)run;
- (void)storeResults:(id)a0;
- (float)resourceRequirement;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 imageAsset:(id)a1 andSignpostPayload:(id)a2;
- (id)createQueryContextWithError:(id *)a0;
- (void)cancel;

@end
