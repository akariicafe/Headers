@class NSData, HAP2AccessoryServerTransportRequest;

@interface HAP2AccessoryServerTransportBaseOperationSendRequest : HAP2AccessoryServerTransportBaseOperation {
    HAP2AccessoryServerTransportRequest *_request;
    NSData *_response;
    id /* block */ _clientCompletion;
}

- (void)main;
- (void).cxx_destruct;
- (id)initWithTransport:(id)a0 request:(id)a1 completion:(id /* block */)a2;

@end
