@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, PLAssetDownloadManagerDelegate;

@interface PLAssetDownloadManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_requestsById;
    NSMutableDictionary *_progressById;
    _Atomic int _currentRequestId;
}

@property (weak, nonatomic) id<PLAssetDownloadManagerDelegate> delegate;

+ (id)defaultManager;

- (void)cancelRequest:(int)a0;
- (id)init;
- (void)_onQueueAsync:(id /* block */)a0;
- (void).cxx_destruct;
- (int)requestRequiredResourcesForManagedAssetObjectUUID:(id)a0 library:(id)a1 completionHandler:(id /* block */)a2;

@end
