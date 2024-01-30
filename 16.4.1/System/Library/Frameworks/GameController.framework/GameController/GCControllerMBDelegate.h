@class NSTimer;

@interface GCControllerMBDelegate : NSObject {
    struct BTSessionImpl { } *_session;
    struct BTPairingAgentImpl { } *_pairingAgent;
    struct BTDiscoveryAgentImpl { } *_discoveryAgent;
    NSTimer *_timer;
}

@property (copy, nonatomic) id /* block */ completionHandler;

- (void)stopScan;
- (void)dealloc;
- (void).cxx_destruct;
- (void)startScan;
- (void)fireCompletionHandler;
- (void)scanTimeout:(id)a0;

@end
