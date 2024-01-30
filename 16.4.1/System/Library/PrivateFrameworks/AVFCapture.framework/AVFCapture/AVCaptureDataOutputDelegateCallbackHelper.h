@class NSString, AVWeakReferencingDelegateStorage, NSObject;
@protocol OS_dispatch_queue;

@interface AVCaptureDataOutputDelegateCallbackHelper : NSObject {
    NSString *_defaultCallbackQueueName;
    NSObject<OS_dispatch_queue> *_defaultCallbackQueue;
    struct OpaqueFigSimpleMutex { } *_stateMutex;
    AVWeakReferencingDelegateStorage *_delegateStorage;
    AVWeakReferencingDelegateStorage *_delegateOverrideStorage;
    struct remoteQueueReceiverOpaque { } *_remoteQueueReceiver;
    id /* block */ _remoteQueueHandler;
    struct localQueueOpaque { } *_localQueue;
    id /* block */ _localQueueHandler;
    BOOL _canSetClientDelegateCallbackQueueWhenRunningInsideMediaserverd;
}

@property (readonly) id activeDelegate;
@property (readonly) NSObject<OS_dispatch_queue> *activeCallbackQueue;
@property (readonly) id clientDelegate;
@property (readonly) NSObject<OS_dispatch_queue> *clientCallbackQueue;
@property (readonly) id delegateOverride;
@property (readonly) NSObject<OS_dispatch_queue> *delegateOverrideCallbackQueue;

+ (void)initialize;

- (void)updateLocalQueue:(struct localQueueOpaque { } *)a0 handler:(id /* block */)a1;
- (BOOL)_validateCallbackQueue:(id)a0 exceptionReason:(id *)a1;
- (id)_activeCallbackQueue;
- (void)updateRemoteQueueReceiver:(struct remoteQueueReceiverOpaque { } *)a0 handler:(id /* block */)a1;
- (void)releaseRemoteQueueReceiver;
- (void)dealloc;
- (id)_activeDelegate;
- (BOOL)setClientDelegate:(id)a0 clientCallbackQueue:(id)a1 exceptionReason:(id *)a2;
- (id)initWithQueueName:(id)a0 canSetClientDelegateCallbackQueueWhenRunningInsideMediaserverd:(BOOL)a1;
- (BOOL)setDelegateOverride:(id)a0 delegateOverrideCallbackQueue:(id)a1 exceptionReason:(id *)a2;

@end
