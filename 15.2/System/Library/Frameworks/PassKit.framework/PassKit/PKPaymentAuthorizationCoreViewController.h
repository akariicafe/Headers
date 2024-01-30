@class PKPaymentAuthorizationStateMachine, PKPaymentAuthorizationDataModel, PKPaymentAuthorizationLayout, NSString;
@protocol PKPaymentAuthorizationHostProtocol;

@interface PKPaymentAuthorizationCoreViewController : UIViewController <PKPaymentAuthorizationServiceProtocol>

@property (readonly, nonatomic) long long paymentAuthorizationStyle;
@property (readonly, nonatomic) PKPaymentAuthorizationLayout *paymentAuthorizationLayout;
@property (readonly, nonatomic) PKPaymentAuthorizationStateMachine *stateMachine;
@property (readonly, nonatomic) PKPaymentAuthorizationDataModel *dataModel;
@property (weak, nonatomic) id<PKPaymentAuthorizationHostProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
