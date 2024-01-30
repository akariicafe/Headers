@interface RPWirelessPairingSession_Internal : NSObject {
    void /* unknown type, empty encoding */ _connection;
    void /* unknown type, empty encoding */ _lock;
    void /* unknown type, empty encoding */ _invalidationHandlers;
    void /* unknown type, empty encoding */ _state;
}

@property (nonatomic, readonly) BOOL invalidated;

- (void)endSession;
- (id)init;
- (void).cxx_destruct;
- (void)registerInvalidationHandlerWithInvokingOnQueue:(id)a0 handler:(id /* block */)a1;

@end
