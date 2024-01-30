@protocol BCApplePayManagerDelegate;

@interface BCApplePayManager : NSObject <BCApplePayManagerProtocol>

@property (weak, nonatomic) id<BCApplePayManagerDelegate> delegate;

- (id)message;
- (void).cxx_destruct;
- (long long)applePayStatus;
- (id)initWithMessage:(id)a0 delegate:(id)a1;
- (void)presentApplePayWithWindow:(id)a0;

@end
