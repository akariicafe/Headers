@protocol ClientInterfaceProxy;

@interface NWNetworkOfInterestClientProxy : NSObject <ClientInterface> {
    BOOL _proxyHaveNOIs;
    BOOL _proxyUpdateNOI;
}

@property (weak, nonatomic) id<ClientInterfaceProxy> delegate;

- (id)initWithDelegate:(id)a0;
- (void)updateNOI:(id)a0 keyPath:(id)a1 change:(id)a2;
- (void).cxx_destruct;
- (void)haveNOIs:(id)a0 tornDown:(BOOL)a1;

@end
