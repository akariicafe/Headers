@class PKPaymentPassActionGroup;

@interface PKPaymentRemoteContentPassActionGroupResponse : PKPaymentWebServiceResponse

@property (retain, nonatomic) PKPaymentPassActionGroup *updatedActionGroup;

- (void).cxx_destruct;
- (id)initWithExistingActionGroup:(id)a0 data:(id)a1;

@end
