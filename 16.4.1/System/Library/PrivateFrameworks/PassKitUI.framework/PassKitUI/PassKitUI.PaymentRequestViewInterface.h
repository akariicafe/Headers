@interface PassKitUI.PaymentRequestViewInterface : NSObject {
    void /* unknown type, empty encoding */ hostDelegate;
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ stateMachine;
    void /* unknown type, empty encoding */ context;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ viewController;
@property (nonatomic, retain) void /* unknown type, empty encoding */ serviceDelegate;

- (void)stop;
- (id)init;
- (void)start;
- (void)invalidate;
- (void).cxx_destruct;

@end
