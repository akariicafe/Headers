@class NSString, CDPContext;

@interface CDPWalrusStateController : NSObject <CDPWalrusStatusProvider> {
    CDPContext *_context;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)broadcastWalrusStateChange;
- (void)_startObservingWalrusStateChangeNotification;
- (void)repairWalrusStatusWithCompletion:(id /* block */)a0;
- (unsigned long long)walrusStatus:(id *)a0;
- (void)updateWalrusStatus:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)pcsKeysForServices:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldOpenGate;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)walrusStatusWithCompletion:(id /* block */)a0;

@end
