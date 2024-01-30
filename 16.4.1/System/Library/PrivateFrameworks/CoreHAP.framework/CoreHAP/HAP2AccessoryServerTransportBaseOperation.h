@class HAP2AccessoryServerTransportBase;

@interface HAP2AccessoryServerTransportBaseOperation : HAP2AsynchronousOperation {
    HAP2AccessoryServerTransportBase *_transport;
}

- (void).cxx_destruct;
- (id)initWithName:(id)a0 transport:(id)a1;

@end
