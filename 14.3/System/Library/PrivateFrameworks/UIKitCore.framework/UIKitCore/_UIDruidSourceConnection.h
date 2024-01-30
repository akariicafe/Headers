@class NSString, NSObject, NSXPCConnection;
@protocol OS_dispatch_source, _DUIServerSessionSource;

@interface _UIDruidSourceConnection : NSObject <_DUIClientSource, _DUIClientSessionSource, _UIDruidSourceConnection> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_connectionWatchdogTimer;
    id<_DUIServerSessionSource> _serverSession;
    BOOL _cancelled;
}

@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (copy, nonatomic) id /* block */ dragPreviewProviderBlock;
@property (copy, nonatomic) id /* block */ canHandOffCancelledItemsBlock;
@property (copy, nonatomic) id /* block */ handOffCancelledItemsBlock;
@property (copy, nonatomic) id /* block */ dragCompletionBlock;
@property (copy, nonatomic) id /* block */ dataTransferFinishedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)takeInsideAppSourceOperationMask:(unsigned long long)a0 outsideAppSourceOperationMask:(unsigned long long)a1 prefersFullSizePreview:(BOOL)a2;
- (void)cancelDrag;
- (id)init;
- (void).cxx_destruct;
- (oneway void)dragFailed;
- (void)dirtyItems:(id)a0;
- (oneway void)handOffCancelledItems:(id)a0 withFence:(id)a1;
- (oneway void)requestDragPreviewsForIndexSet:(id)a0 reply:(id /* block */)a1;
- (oneway void)checkCanHandOffCancelledItems:(id)a0 withReply:(id /* block */)a1;
- (oneway void)dragEndedWithOperation:(unsigned long long)a0;
- (oneway void)dataTransferSessionFinished;
- (void)beginDragWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (id)addItems:(id)a0 withOldItemCollection:(id)a1;
- (void)_internalDragFailed;
- (void)dragDidExitApp;

@end
