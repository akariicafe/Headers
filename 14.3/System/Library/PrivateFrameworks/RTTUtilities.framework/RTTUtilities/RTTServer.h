@class NSMutableDictionary, BKSProcessAssertion, NSLock, NSObject;
@protocol OS_dispatch_queue;

@interface RTTServer : HCServer {
    NSLock *_dataResponseBlocksLock;
    NSMutableDictionary *_databaseResponseBlocks;
    NSObject<OS_dispatch_queue> *_commonRequestQueue;
}

@property (copy, nonatomic) id /* block */ actionCompletionBlock;
@property (retain, nonatomic) BKSProcessAssertion *assertion;

+ (id)sharedInstance;

- (void)registerForUpdates:(id /* block */)a0 forCallUID:(id)a1;
- (id)init;
- (void)handleMessageWithPayload:(id)a0 forIdentifier:(unsigned long long)a1;
- (void)primeRTTServer;
- (void).cxx_destruct;
- (void)handleMessageError:(id)a0 destructive:(BOOL)a1;
- (void)dealloc;
- (void)_registerForServerSettingsUpdates;
- (void)_managerAXPIDState:(BOOL)a0;
- (void)setViewControllerIsVisible:(BOOL)a0 withCallID:(id)a1;
- (BOOL)shouldRestartOnInterruption;
- (void)resetConnection;
- (void)_takeStackshot;
- (void)setTTYDictionaryAvailability:(BOOL)a0;
- (void)registerResponseBlock:(id /* block */)a0 forUUID:(id)a1;
- (void)sendString:(id)a0 forCallUID:(id)a1;
- (BOOL)deleteConversationWithCallUID:(id)a0;
- (void)terminateConnectionAndNotify:(BOOL)a0;
- (void)registerForServiceUpdates:(id /* block */)a0 forCallUID:(id)a1;
- (void)registerForRemoteUpdates:(id /* block */)a0 forCallUID:(id)a1;
- (void)setSystemOutputAudioMuted:(BOOL)a0 withCallID:(id)a1;
- (void)findConversationForCallUID:(id)a0 andResult:(id /* block */)a1;
- (void)displayCallPromptForContact:(id)a0 withCompletion:(id /* block */)a1;
- (id)valueForTTYSetting:(id)a0;
- (BOOL)contactIsTTYContact:(id)a0;
- (BOOL)isEmergencyNumber:(id)a0;
- (void)cancelCallPromptDisplay;
- (void)setShouldSuppressIncomingNotification:(BOOL)a0;

@end
