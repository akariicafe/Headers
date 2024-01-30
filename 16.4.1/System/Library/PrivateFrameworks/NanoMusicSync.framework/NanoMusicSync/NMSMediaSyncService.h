@class NSString, NSMutableDictionary, NSObject, IDSService;
@protocol OS_dispatch_queue;

@interface NMSMediaSyncService : NSObject <IDSServiceDelegate> {
    IDSService *_service;
    NSObject<OS_dispatch_queue> *_idsActionHandlerQueue;
    NSMutableDictionary *_keepLocalCompletionsByIDSMsgID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4 context:(id)a5;
- (void)service:(id)a0 account:(id)a1 incomingUnhandledProtobuf:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)dealloc;
- (id)init;
- (id)_defaultPairedDevice;
- (void).cxx_destruct;
- (void)_callAndRemoveKeepLocalCompletionWithIDSMessageID:(id)a0 error:(id)a1;
- (void)_cleanupKeepLocalCompletionWithID:(id)a0;
- (int)_containerTypeForModelObject:(id)a0;
- (int)_convertMPModelObjectKeepLocalEnableState:(long long)a0;
- (unsigned long long)_convertMediaSyncServiceKeepLocalCellularPolicy:(int)a0;
- (long long)_convertMediaSyncServiceKeepLocalEnableState:(int)a0;
- (unsigned long long)_convertMediaSyncServiceKeepLocalPowerPolicy:(int)a0;
- (int)_convertNMSKeepLocalRequestCellularPolicy:(unsigned long long)a0;
- (int)_convertNMSKeepLocalRequestPowerPolicy:(unsigned long long)a0;
- (void)_handleMediaSyncServiceKeepLocalRequest:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)_handleMediaSyncServiceKeepLocalResponse:(id)a0 service:(id)a1 account:(id)a2 fromID:(id)a3 context:(id)a4;
- (id)_idsMessageOptionsWithTimeout:(double)a0;
- (id)_midDataFromModelObject:(id)a0;
- (Class)_modelClassForContainerType:(int)a0;
- (unsigned long long)_nmsKeepLocalExceptionFromNMSSyncServiceException:(int)a0;
- (int)_nmsQOSFromNSQOS:(long long)a0;
- (long long)_nsQOSFromNMSQOS:(int)a0;
- (void)_performFailSafeWithIDSMessageIdentifier:(id)a0 timeout:(double)a1;
- (id)_sendUrgentMessage:(id)a0 messageType:(long long)a1 timeout:(double)a2 completion:(id /* block */)a3;
- (id)_sendUrgentProtoBufForMessage:(id)a0 messageType:(long long)a1 timeout:(double)a2 error:(id *)a3;
- (BOOL)_sendUrgentServiceResponseWithError:(id)a0 idsMessageID:(id)a1 timeout:(double)a2;
- (BOOL)_sendUrgentServiceResultMessage:(id)a0 idsMessageID:(id)a1 timeout:(double)a2;
- (void)_setMessage:(id)a0 withValidatorException:(unsigned long long)a1;
- (void)_setProtobufHandlers;
- (void)performKeepLocalRequestWithEnableState:(long long)a0 modelObject:(id)a1 options:(id)a2 completion:(id /* block */)a3;

@end
