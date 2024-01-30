@class _TtC9PassKitUI27PaymentRequestViewInterface;

@interface PKPaymentRequestViewInterface : NSObject

@property (retain, nonatomic) _TtC9PassKitUI27PaymentRequestViewInterface *wrappedInterface;
@property (readonly, nonatomic) id serviceDelegate;

- (id)viewController;
- (void)stop;
- (void)start;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1;

@end
