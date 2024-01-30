@class NSMutableDictionary, _HMContext, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMSoftwareUpdateDocumentationManager : NSObject <HMFLogging, HMSoftwareUpdateDocumentationAssetDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) _HMContext *context;
@property (retain) NSMutableDictionary *assetCompletionPairByDigestUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)assetForMetadataFromDisk:(id)a0;
- (void)documentationForMetadata:(id)a0 completion:(id /* block */)a1;
- (void)removeAssetAndCompletion:(id)a0;
- (void)removeDocumentationMetadata:(id)a0;
- (id)assetForDocumentationMetadata:(id)a0;
- (void)addAssetAndCompletion:(id)a0 completion:(id /* block */)a1;
- (id)initWithContext:(id)a0;
- (void)didUpdateDocumentationAssetState:(id)a0;
- (void).cxx_destruct;

@end
