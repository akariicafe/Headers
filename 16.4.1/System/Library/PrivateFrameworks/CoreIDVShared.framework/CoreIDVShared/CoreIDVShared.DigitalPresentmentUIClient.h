@interface CoreIDVShared.DigitalPresentmentUIClient : NSObject <CoreIDVShared.DigitalPresentmentUIProtocol> {
    void /* unknown type, empty encoding */ serverConnection;
    void /* unknown type, empty encoding */ remoteObjectProxy;
}

- (id)init;
- (void).cxx_destruct;
- (void)prepareForDisplayWithCompletion:(id /* block */)a0;
- (void)userCancelledWithCompletion:(id /* block */)a0;

@end
