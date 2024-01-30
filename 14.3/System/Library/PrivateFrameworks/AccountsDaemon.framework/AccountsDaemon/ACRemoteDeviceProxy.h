@class NSLock, NSString, ACRemoteCommandHandler, NSMutableDictionary, NSObject, IDSService;
@protocol OS_dispatch_queue;

@interface ACRemoteDeviceProxy : NSObject <IDSServiceDelegate> {
    IDSService *_messageSendingService;
    NSObject<OS_dispatch_queue> *_messageSendingQueue;
    NSObject<OS_dispatch_queue> *_commandProcessingQueue;
    ACRemoteCommandHandler *_remoteCommandHandler;
    NSMutableDictionary *_completionHandlersByInternalMessageID;
    NSMutableDictionary *_internalMessageIDsByTransportID;
    NSLock *_completionHandlersLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendCommand:(id)a0 withAccount:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (id)init;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void)_dequeueCompletionHandlersForMessageWithInternalID:(id)a0 success:(BOOL)a1 result:(id)a2 error:(id)a3;
- (void).cxx_destruct;
- (void)_sendReplyForMessage:(id)a0 withSuccess:(BOOL)a1 result:(id)a2 error:(id)a3;
- (void)service:(id)a0 account:(id)a1 incomingData:(id)a2 fromID:(id)a3 context:(id)a4;
- (long long)_priorityForMessageCarryingCommand:(id)a0;
- (void)sendCommand:(id)a0 withAccount:(id)a1 completion:(id /* block */)a2;
- (void)_dequeueCompletionHandlersForMessageWithTransportID:(id)a0 success:(BOOL)a1 result:(id)a2 error:(id)a3;
- (void)_enqueueCompletionHandler:(id /* block */)a0 forMessageWithInternalID:(id)a1 transportID:(id)a2;
- (BOOL)_isValidCommandForOutgoingMessage:(id)a0;
- (BOOL)_sendMessageData:(id)a0 toDestination:(id)a1 withPriority:(long long)a2 bypassDuet:(BOOL)a3 transportID:(id *)a4 error:(id *)a5;

@end
