@class NSString, NSMutableDictionary;

@interface PHAssetResourceManager : NSObject <PHAssetResourceRequestDelegate> {
    _Atomic int _nextRequestID;
    NSMutableDictionary *_requestsByID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _managerID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)_nextManagerID;
+ (id)defaultManager;

- (id)init;
- (void).cxx_destruct;
- (id)consolidateAssets:(id)a0 completionHandler:(id /* block */)a1;
- (int)requestDataForAssetResource:(id)a0 options:(id)a1 dataReceivedHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)writeDataForAssetResource:(id)a0 toFile:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)cancelDataRequest:(int)a0;
- (id)infoForRequest:(int)a0;
- (int)requestWriteDataForAssetResource:(id)a0 toFile:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (int)requestFileURLForAssetResource:(id)a0 options:(id)a1 urlReceivedHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)reconnectAssets:(id)a0 urlResolvingHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)_autoResolveReferencedResources:(id)a0 folderURL:(id)a1 resourceClient:(id)a2;
- (int)_nextRequestID;
- (void)assetResourceRequest:(id)a0 didFindFileURL:(id)a1;
- (void)assetResourceRequest:(id)a0 didFinishWithError:(id)a1;

@end
