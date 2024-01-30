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

- (void)assetResourceRequest:(id)a0 didFinishWithError:(id)a1;
- (int)_nextRequestID;
- (id)consolidateAssets:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancelDataRequest:(int)a0;
- (int)requestDataForAssetResource:(id)a0 options:(id)a1 dataReceivedHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)infoForRequest:(int)a0;
- (void)writeDataForAssetResource:(id)a0 toFile:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (int)requestWriteDataForAssetResource:(id)a0 toFile:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (int)requestFileURLForAssetResource:(id)a0 options:(id)a1 urlReceivedHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)reconnectAssets:(id)a0 urlResolvingHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)_autoResolveReferencedResources:(id)a0 folderURL:(id)a1 resourceClient:(id)a2;
- (int)_requestForAssetResource:(id)a0 loadURLOnly:(BOOL)a1 options:(id)a2 urlReceivedHandler:(id /* block */)a3 dataReceivedHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;

@end
