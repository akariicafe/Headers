@class NSUUID, NSDictionary, NSString, NSObject;
@protocol OS_dispatch_group, DDUIDevice, DDUIEndpointPairingTransportSession;

@interface DDUIEndpointPairingSession : NSObject <DDUIEndpointPairingInitiatorSession, DDUIEndpointPairingReceiverSession>

@property (retain, nonatomic) id<DDUIEndpointPairingTransportSession> transportSession;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSDictionary *startUserInfo;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *activateGroup;
@property (retain, nonatomic) NSUUID *sessionID;
@property (nonatomic) BOOL activated;
@property (readonly, nonatomic) id<DDUIDevice> remoteDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_handleIncomingMessage:(id)a0;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_activateWithErrorHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)_clearBlocks;
- (void)_failPairing;
- (void)_pairWithInfo:(id)a0;
- (void)_sendPairingWithInfo:(id)a0;
- (void)activateWithErrorHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)cancelWithMessage:(id)a0;
- (id)initWithTransportSession:(id)a0 mode:(unsigned long long)a1;
- (void)pairWithMessage:(id)a0;
- (void)pairWithMessage:(id)a0 errorHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)processInitialMessage:(id)a0;

@end
