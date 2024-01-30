@class NSArray, NSString, AVWeakReference, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AVCaptureDeferredPhotoProcessor : NSObject {
    NSString *_applicationID;
    NSObject<OS_dispatch_queue> *_fcdppQueue;
    struct OpaqueFigCaptureDeferredPhotoProcessor { } *_fcdpp;
    AVWeakReference *_weakReference;
    struct OpaqueFigSimpleMutex { } *_requestsLock;
    NSMutableArray *_requests;
}

@property (readonly, nonatomic) NSArray *persistentlyStoredDeferredPhotoProxies;

+ (void)initialize;
+ (id)sharedPhotoProcessorForApplicationID:(id)a0;
+ (id)sharedPhotoProcessor;

- (BOOL)cancelProcessingForPhotoProxy:(id)a0 error:(id *)a1;
- (void)processPhotoProxy:(id)a0 queuePosition:(id)a1 delegate:(id)a2;
- (void)_handleNotification:(struct __CFString { } *)a0 payload:(id)a1;
- (void)setPaused:(BOOL)a0;
- (BOOL)isPaused;
- (void)deletePersistentStorageForPhotoProxy:(id)a0;
- (void)dealloc;
- (id)_initWithApplicationID:(id)a0;
- (void)_setFigCaptureDeferredPhotoProcessor:(struct OpaqueFigCaptureDeferredPhotoProcessor { } *)a0;
- (int)_establishServerConnection;
- (void)_handleWillBeginProcessingPhotoProxyNotificationWithPayload:(id)a0 forRequest:(id)a1;
- (void)_handleDidFinishProcessingPhotoProxyNotificationWithPayload:(id)a0 forRequest:(id)a1;
- (void)_handleServerConnectionDiedNotification;
- (id)_processingRequestForCaptureRequestIdentifier:(id)a0 photoIdentifier:(id)a1;
- (void)_dispatchFailureCallbacks:(unsigned int)a0 forProcessingRequest:(id)a1 error:(id)a2;

@end
