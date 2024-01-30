@class NWEndpoint;

@interface NEAppProxyUDPFlow : NEAppProxyFlow

@property (readonly) NWEndpoint *localEndpoint;

- (void).cxx_destruct;
- (void)readDatagramsWithCompletionHandler:(id /* block */)a0;
- (id)description;
- (id)initWithNEFlow:(struct _NEFlow { } *)a0 queue:(id)a1;
- (void)openWithLocalEndpoint:(id)a0 completionHandler:(id /* block */)a1;
- (void)writeDatagrams:(id)a0 sentByEndpoints:(id)a1 completionHandler:(id /* block */)a2;

@end
