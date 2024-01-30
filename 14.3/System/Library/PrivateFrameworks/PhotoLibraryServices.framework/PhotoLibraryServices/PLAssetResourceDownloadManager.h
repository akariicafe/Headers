@class NSOperationQueue, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PLAssetResourceDownloadManager : NSObject {
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_requestIsolationQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_requestById;
    _Atomic int _currentRequestId;
}

+ (id)defaultManager;

- (void)cancelRequest:(int)a0;
- (id)init;
- (void).cxx_destruct;
- (int)requestCloudResourceType:(unsigned long long)a0 assetObjectID:(id)a1 library:(id)a2 progressHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)_requestWithID:(int)a0;
- (void)_setRequest:(id)a0 forRequestID:(int)a1;

@end
