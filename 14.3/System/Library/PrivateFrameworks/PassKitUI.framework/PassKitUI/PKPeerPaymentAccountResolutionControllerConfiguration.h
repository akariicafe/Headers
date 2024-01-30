@class NSString, PKCurrencyAmount;

@interface PKPeerPaymentAccountResolutionControllerConfiguration : NSObject

@property (retain, nonatomic) PKCurrencyAmount *currencyAmount;
@property (nonatomic) unsigned long long registrationFlowState;
@property (copy, nonatomic) NSString *senderAddress;
@property (nonatomic) BOOL manuallyTriggered;
@property (nonatomic, getter=isGraduation) BOOL graduation;

- (void).cxx_destruct;
- (id)description;

@end
