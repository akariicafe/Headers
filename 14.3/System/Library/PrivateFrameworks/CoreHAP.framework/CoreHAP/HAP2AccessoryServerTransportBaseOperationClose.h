@class NSError;

@interface HAP2AccessoryServerTransportBaseOperationClose : HAP2AccessoryServerTransportBaseOperation {
    NSError *_desiredError;
    id /* block */ _clientCompletion;
}

- (void).cxx_destruct;
- (void)main;
- (id)initWithTransport:(id)a0 desiredError:(id)a1 completion:(id /* block */)a2;

@end
