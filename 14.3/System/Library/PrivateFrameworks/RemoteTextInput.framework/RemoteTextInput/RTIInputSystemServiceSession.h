@class NSString, RTIDataPayload, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface RTIInputSystemServiceSession : RTIInputSystemSession <RTIInputSystemSessionProtocol, RTIInputSystemPayloadDelegate> {
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (nonatomic) BOOL isPaused;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, copy, nonatomic) RTIDataPayload *currentDataPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sessionWithConnection:(id)a0;

- (oneway void)beginRemoteTextInputSessionWithID:(id)a0 documentTraits:(id)a1 initialDocumentState:(id)a2;
- (void).cxx_destruct;
- (oneway void)remoteTextInputSessionWithID:(id)a0 documentTraitsDidChange:(id)a1;
- (oneway void)endRemoteTextInputSessionWithID:(id)a0;
- (void)dealloc;
- (oneway void)remoteTextInputSessionWithID:(id)a0 documentDidChange:(id)a1;
- (id)initWithConnection:(id)a0;
- (void)flushOperations;
- (void)handleTextActionPayload:(id)a0;
- (oneway void)remoteTextInputSessionWithID:(id)a0 didChangePause:(BOOL)a1 withReason:(id)a2;
- (void)_killConnectionWithCallback;
- (void)didInitializeWithConnection:(id)a0;
- (void)_updateAppIdsFromConnectionOnInternalQueueWithCompletionHandler:(id /* block */)a0;
- (void)flushOperationsWithResultHandler:(id /* block */)a0;

@end
