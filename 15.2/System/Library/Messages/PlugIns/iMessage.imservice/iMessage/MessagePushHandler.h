@class NSMutableArray, NSString, IDSAccount, IDSService;

@interface MessagePushHandler : NSObject <IDSServiceDelegatePrivate> {
    NSMutableArray *_handlers;
    BOOL _registeredForPush;
    BOOL _isListening;
}

@property (readonly, retain, nonatomic) IDSService *service;
@property (readonly, retain, nonatomic) IDSAccount *account;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localCommandToHandlerBlock;
+ (id)commandToHandlerBlock;

- (id)copyHandlersForEnumerating;
- (void)removeListener:(id)a0;
- (void)sendManualAckForMessageWithContext:(id)a0;
- (void)service:(id)a0 account:(id)a1 incomingPendingMessageOfType:(long long)a2 fromID:(id)a3 context:(id)a4;
- (id)messageReplayObjectWithService:(id)a0 account:(id)a1 incomingTopLevelMessage:(id)a2 fromID:(id)a3;
- (void)_service:(id)a0 account:(id)a1 incomingTopLevelMessage:(id)a2 fromID:(id)a3 messageContext:(id)a4 isBeingReplayed:(BOOL)a5;
- (void)addListener:(id)a0;
- (BOOL)_shouldImmediatelySendAckForMessage:(id)a0 command:(id)a1;
- (void)replayMessage:(id)a0;
- (id)initWithIDSAccount:(id)a0;
- (void)service:(id)a0 account:(id)a1 incomingTopLevelMessage:(id)a2 fromID:(id)a3 messageContext:(id)a4;
- (void)dealloc;
- (void)service:(id)a0 didHintCheckingTransportLogWithReason:(long long)a1;

@end
