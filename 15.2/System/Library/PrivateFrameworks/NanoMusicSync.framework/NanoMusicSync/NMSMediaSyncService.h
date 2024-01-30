@class NSString, NSMutableDictionary, NSObject, IDSService;
@protocol OS_dispatch_queue;

@interface NMSMediaSyncService : NSObject <IDSServiceDelegate> {
    IDSService *_service;
    NSObject<OS_dispatch_queue> *_idsActionHandlerQueue;
    NSMutableDictionary *_downloadCompletionHandlersByIDSMsgID;
    NSMutableDictionary *_removeCompletionHandlersByIDSMsgID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_mediaSyncServiceDescriptionFromDownloadResult:(long long)a0;

- (void)service:(id)a0 account:(id)a1 incomingUnhandledProtobuf:(id)a2 fromID:(id)a3 context:(id)a4;
- (void).cxx_destruct;
- (id)init;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4 context:(id)a5;
- (void)dealloc;
- (id)_defaultPairedDevice;
- (void)_setProtobufHandlers;
- (int)_convertMediaSyncServiceContainerToIDSContainer:(long long)a0;
- (void)_downloadContainerWithPID:(long long)a0 containerType:(int)a1 intent:(long long)a2 completionHandler:(id /* block */)a3;
- (void)_removeContainerWithPID:(long long)a0 containerType:(int)a1 completionHandler:(id /* block */)a2;
- (id)_convertPersistentID:(long long)a0 containerType:(int)a1;
- (int)_convertToInternalDownloadIntent:(long long)a0;
- (id)_sendDownloadMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)_performFailSafeWithIDSMessageIdentifier:(id)a0 messageType:(long long)a1;
- (id)_sendRemoveMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)_cleanupDownloadCompletionHandlerWithID:(id)a0;
- (void)_cleanupRemoveCompletionHandlerWithID:(id)a0;
- (id)_sendProtoBufForMessage:(id)a0 messageType:(long long)a1;
- (id)_idsMessageOptions;
- (void)_handleDownloadMedia:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)_handleRemoveMedia:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)_handleDownloadMediaResult:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (BOOL)_sendServiceResultMessage:(id)a0 idsMessageID:(id)a1;
- (int)_convertKeepLocalValidationResultToIDSServiceResult:(unsigned long long)a0;
- (BOOL)_sendServiceDownloadResult:(int)a0 idsMessageID:(id)a1;
- (void)_runKeepLocalEnabled:(BOOL)a0 withAssetPID:(long long)a1 containerType:(int)a2 onCharger:(BOOL)a3 idsMessageID:(id)a4 completionHandler:(id /* block */)a5;
- (void)_callAndRemoveCompletionHandlerForDownloadWithResult:(long long)a0 idsMessageID:(id)a1;
- (void)_callAndRemoveCompletionHandlerForRemoveWithResult:(BOOL)a0 idsMessageID:(id)a1;
- (void)_downloadWithPersistentID:(long long)a0 containerType:(int)a1 intent:(int)a2 idsMessageID:(id)a3;
- (BOOL)_sendServiceRemoveResult:(int)a0 idsMessageID:(id)a1;
- (long long)_convertIDSServiceResultToMediaSyncServiceResult:(int)a0;
- (void)downloadContainerWithPID:(long long)a0 type:(long long)a1 intent:(long long)a2 completionHandler:(id /* block */)a3;
- (void)removeContainerWithPID:(long long)a0 type:(long long)a1 completionHandler:(id /* block */)a2;
- (void)_handleRemoveMediaResult:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;

@end
