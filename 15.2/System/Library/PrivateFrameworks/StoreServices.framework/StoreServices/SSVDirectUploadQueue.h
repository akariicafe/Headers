@class NSArray, NSHashTable, SSXPCConnection, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface SSVDirectUploadQueue : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    int _daemonLaunchToken;
    SSXPCConnection *_inboundConnection;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSHashTable *_observers;
    SSXPCConnection *_outboundConnection;
    NSArray *_uploadKinds;
    NSMutableArray *_uploads;
}

@property (readonly, copy) NSArray *uploadKinds;

- (void).cxx_destruct;
- (id)init;
- (id)initWithUploadKinds:(id)a0;
- (void)_establishInboundConnection;
- (void)_sendSimpleMessage:(id)a0 completionBlock:(id /* block */)a1;
- (id)_outboundConnection;
- (void)_handleInboundMessage:(id)a0 connection:(id)a1;
- (void)_sendObserversUploadsDidChange;
- (void)_handleAddUploadsMessage:(id)a0;
- (void)_handleChangeUploadsMessage:(id)a0;
- (void)_handleRemoveUploadsMessage:(id)a0;
- (void)addUploadObserver:(id)a0;
- (void)cancelAllUploadsWithCompletionBlock:(id /* block */)a0;
- (void)cancelUploads:(id)a0 completionBlock:(id /* block */)a1;
- (void)getUploadsWithCompletionBlock:(id /* block */)a0;
- (void)pauseAllUploadsWithCompletionBlock:(id /* block */)a0;
- (void)pauseUploads:(id)a0 completionBlock:(id /* block */)a1;
- (void)removeUploadObserver:(id)a0;
- (void)resumeAllUploadsWithCompletionBlock:(id /* block */)a0;
- (void)resumeUploads:(id)a0 completionBlock:(id /* block */)a1;
- (void)dealloc;

@end
