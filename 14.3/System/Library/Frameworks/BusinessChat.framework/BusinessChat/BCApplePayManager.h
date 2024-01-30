@protocol BCApplePayManagerDelegate;

@interface BCApplePayManager : NSObject <BCApplePayManagerProtocol>

@property (weak, nonatomic) id<BCApplePayManagerDelegate> delegate;

- (void).cxx_destruct;
- (id)message;
- (id)initWithMessage:(id)a0 delegate:(id)a1;
- (long long)applePayStatus;
- (void)presentApplePayWithWindow:(id)a0;

@end
