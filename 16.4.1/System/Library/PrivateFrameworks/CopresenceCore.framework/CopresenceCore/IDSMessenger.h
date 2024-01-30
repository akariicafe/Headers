@class NSString, CPIDSHelper, NSMutableDictionary, NSObject, IDSService;
@protocol OS_os_log, IDSGroupSessionObserver;

@interface IDSMessenger : NSObject <IDSServiceDelegatePrivate> {
    IDSService *_service;
    CPIDSHelper *_helper;
    NSObject<OS_os_log> *_log;
    NSMutableDictionary *_messageHandlers;
}

@property (weak, nonatomic) id<IDSGroupSessionObserver> groupSessionObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 account:(id)a1 receivedGroupSessionParticipantUpdate:(id)a2;
- (void)service:(id)a0 activeAccountsChanged:(id)a1;
- (void).cxx_destruct;
- (void)service:(id)a0 account:(id)a1 receivedGroupSessionParticipantDataUpdate:(id)a2;
- (BOOL)sendIDSMessage:(id)a0;
- (BOOL)_validateMessage:(id)a0 payload:(id *)a1 objectGUID:(id *)a2 type:(id *)a3;
- (id)initWithIDSService:(id)a0 delegateQueue:(id)a1;
- (void)setMessageHandler:(id)a0 forMessageType:(id)a1;

@end
