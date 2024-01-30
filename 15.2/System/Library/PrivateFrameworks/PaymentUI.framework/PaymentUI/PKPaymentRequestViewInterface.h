@class _TtC9PaymentUI27PaymentRequestViewInterface;

@interface PKPaymentRequestViewInterface : NSObject

@property (retain, nonatomic) _TtC9PaymentUI27PaymentRequestViewInterface *wrappedInterface;
@property (readonly, nonatomic) id serviceDelegate;

- (void)start;
- (id)viewController;
- (void).cxx_destruct;
- (void)invalidate;
- (void)stop;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1;

@end
