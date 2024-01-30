@class PKPaymentPassAction;

@interface PKPaymentRemoteContentPassActionResponse : PKPaymentWebServiceResponse

@property (retain, nonatomic) PKPaymentPassAction *updatedAction;

- (void).cxx_destruct;
- (id)initWithExistingAction:(id)a0 data:(id)a1;

@end
