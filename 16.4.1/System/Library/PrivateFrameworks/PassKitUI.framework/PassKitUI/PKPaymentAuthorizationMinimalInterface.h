@class NSString, UIViewController;

@interface PKPaymentAuthorizationMinimalInterface : NSObject <PKPaymentAuthorizationInterface>

@property (readonly, nonatomic) UIViewController *primaryViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPrimaryViewController:(id)a0;

@end
