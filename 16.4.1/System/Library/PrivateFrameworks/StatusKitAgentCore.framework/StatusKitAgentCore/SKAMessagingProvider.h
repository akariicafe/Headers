@class IDSService, NSString;
@protocol SKAMessagingProvidingDelegate, SKAPushManaging;

@interface SKAMessagingProvider : NSObject <IDSServiceDelegate, SKAMessagingProviding>

@property (retain, nonatomic) IDSService *service;
@property (retain, nonatomic) id<SKAPushManaging> pushManager;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKAMessagingProvidingDelegate> delegate;

+ (id)logger;
+ (id)_noValidIDSDetintationError;

- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4 context:(id)a5;
- (id)deviceToken;
- (BOOL)sendMessageToSelfDevices:(id)a0 limitToPresenceCapable:(BOOL)a1 identifier:(id *)a2 error:(id *)a3;
- (id)deviceTokenForTokenURI:(id)a0;
- (void)signPayload:(id)a0 completion:(id /* block */)a1;
- (void)isHandleMessageable:(id)a0 completion:(id /* block */)a1;
- (void)verifySignedPayload:(id)a0 matchesPayload:(id)a1 fromTokenURI:(id)a2 completion:(id /* block */)a3;
- (BOOL)isHandleAvailableToMessageFrom:(id)a0;
- (void)isHandleMessageableForPresence:(id)a0 completion:(id /* block */)a1;
- (void)service:(id)a0 didHintCheckingTransportLogWithReason:(long long)a1;
- (id)handleForTokenURI:(id)a0;
- (BOOL)isFromIDFromSelfAccount:(id)a0;
- (id)tokenURI;
- (id)resolveSenderHandleWithPreferredSenderHandle:(id)a0;
- (BOOL)_selfSharingIsDisabledByServer;
- (BOOL)sendMessage:(id)a0 toHandle:(id)a1 fromHandle:(id)a2 limitToPresenceCapable:(BOOL)a3 identifier:(id *)a4 error:(id *)a5;
- (id)initWithDelegate:(id)a0 serviceIdentifier:(id)a1 pushManager:(id)a2 queue:(id)a3;
- (BOOL)_keysharingIsDisabledByServer;
- (void).cxx_destruct;
- (BOOL)sendMessage:(id)a0 toHandles:(id)a1 fromHandle:(id)a2 limitToPresenceCapable:(BOOL)a3 identifier:(id *)a4 error:(id *)a5;

@end
