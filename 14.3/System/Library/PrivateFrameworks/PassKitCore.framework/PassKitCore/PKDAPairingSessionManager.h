@class NSString, NSMutableArray;

@interface PKDAPairingSessionManager : PKDASessionManager <PKAppletSubcredentialPairingSessionDelegate>

@property (nonatomic, getter=isProbingTerminalPairingStatus) BOOL probingTerminalPairingStatus;
@property (readonly, nonatomic) NSMutableArray *probingCompletionBlocks;
@property (copy, nonatomic) id /* block */ prewarmCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)appletSubcredentialPairingSessionDidBeginPairing:(id)a0;
- (id)initWithQueue:(id)a0 sessionCreationBlock:(id /* block */)a1;
- (void)appletSubcredentialPairingSessionDidFirstTransaction:(id)a0 withError:(id)a1;
- (void)appletSubcredentialPairingSession:(id)a0 didEndPairingWithSubcredential:(id)a1 registrationData:(id)a2;
- (void)appletSubcredentialPairingSession:(id)a0 didFinishPreWarmWithResult:(id)a1;
- (void)appletSubcredentialPairingSession:(id)a0 didFinishProbingTerminalWithResult:(BOOL)a1;
- (void)appletSubcredentialPairingSession:(id)a0 didEndPairingWithError:(id)a1;

@end
