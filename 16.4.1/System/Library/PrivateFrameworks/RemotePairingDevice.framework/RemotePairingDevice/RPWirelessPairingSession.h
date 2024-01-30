@class RPWirelessPairingSession_Internal;

@interface RPWirelessPairingSession : NSObject

@property (readonly, nonatomic) RPWirelessPairingSession_Internal *underlyingObject;
@property (readonly, nonatomic) BOOL invalidated;

- (void)endSession;
- (void).cxx_destruct;
- (id)initWithUnderlyingObject:(id)a0;
- (void)registerInvalidationHandlerOnQueue:(id)a0 handler:(id /* block */)a1;

@end
