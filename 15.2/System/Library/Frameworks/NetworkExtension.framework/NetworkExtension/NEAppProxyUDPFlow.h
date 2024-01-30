@class NWEndpoint;

@interface NEAppProxyUDPFlow : NEAppProxyFlow

@property (readonly) NWEndpoint *localEndpoint;

- (id)description;
- (void).cxx_destruct;
- (id)initWithNEFlow:(struct _NEFlow { } *)a0 queue:(id)a1;
- (void)openWithLocalEndpoint:(id)a0 completionHandler:(id /* block */)a1;
- (void)readDatagramsWithCompletionHandler:(id /* block */)a0;
- (void)resetLocalEndpoint;
- (void)writeDatagrams:(id)a0 sentByEndpoints:(id)a1 completionHandler:(id /* block */)a2;

@end
