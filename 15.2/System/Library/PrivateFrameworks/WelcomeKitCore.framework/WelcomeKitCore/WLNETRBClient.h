@interface WLNETRBClient : NSObject {
    struct NETRBClient { } *_netrbClientRef;
    id /* block */ _dhcpStartCompletionBlock;
    id /* block */ _dhcpStopCompletionBlock;
}

- (void).cxx_destruct;
- (id)init;
- (void)startDHCPWithCompletion:(id /* block */)a0;
- (void)stopDHCPWithCompletion:(id /* block */)a0;
- (BOOL)isIPAddressInRange:(id)a0;
- (struct NETRBClient { } *)_netrbClient;
- (BOOL)_startDHCPWithInterface:(id)a0;
- (BOOL)_stopDHCP;
- (void)_didStartDHCPWithSuccess:(BOOL)a0;
- (void)_didStopDHCPWithSuccess:(BOOL)a0;
- (BOOL)_completionsAreNil;

@end
