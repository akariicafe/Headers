@class NSArray, NSDictionary, NSString, AXDispatchTimer, NSObject;
@protocol OS_xpc_object;

@interface AXHeardController : NSObject <HCHeardControllerProtocol, UNUserNotificationCenterDelegate> {
    AXDispatchTimer *_transparencyHysteresisTimer;
    NSObject<OS_xpc_object> *_service;
    BOOL _finishedSetup;
}

@property (retain, nonatomic) NSArray *clients;
@property (retain, nonatomic) NSDictionary *handlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedServer;
+ (id)entitlementsForMessageID:(unsigned long long)a0;

- (id)init;
- (void)registerFakeClient:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handleNewConnection:(id)a0;
- (BOOL)sendMessage:(id)a0 withError:(id *)a1;
- (void)startServer;
- (unsigned long long)countOfClientsListeningForIdentifier:(unsigned long long)a0;
- (void)sendClientsMessageWithPayload:(id)a0 excluding:(id)a1;
- (void)addHandler:(id)a0 andBlock:(id /* block */)a1 forMessageIdentifier:(unsigned long long)a2;
- (void)sendUpdateMessage:(id)a0 forIdentifier:(unsigned long long)a1;
- (void)updatePersonalAudioSettingsOnAccessories;
- (void)handleMessage:(id)a0 forIdentifier:(unsigned long long)a1;
- (void)continueSetup;
- (BOOL)connection:(id)a0 hasEntitlementForMessage:(unsigned long long)a1;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;

@end
