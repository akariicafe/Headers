@interface PaymentUI.PaymentRequestViewInterface : NSObject {
    void /* unknown type, empty encoding */ hostDelegate;
    void /* unknown type, empty encoding */ stateMachine;
    void /* unknown type, empty encoding */ context;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ viewController;
@property (nonatomic, retain) void /* unknown type, empty encoding */ serviceDelegate;

- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)stop;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1;

@end
