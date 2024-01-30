@class NSXPCConnection;

@interface MFAAPairingManager : NSObject

@property (retain, nonatomic) NSXPCConnection *xpcConnection;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)verifyPairingWithToken:(id)a0 completionHandler:(id /* block */)a1;
- (void)generatePairingTokenWithCompletionHandler:(id /* block */)a0;
- (void)addPairingWithToken:(id)a0 completionHandler:(id /* block */)a1;
- (void)removePairingWithToken:(id)a0 completionHandler:(id /* block */)a1;

@end
