@class NSError, NSString, AMSBiometricsSignatureResult;

@interface _PaymentSheetState : NSObject

@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL didAuthorizePayment;
@property (nonatomic) BOOL didBiometricsLockout;
@property (nonatomic) unsigned long long cancellationType;
@property (nonatomic) BOOL didPresent;
@property (retain, nonatomic) NSString *passwordEquivalentToken;
@property (retain, nonatomic) NSString *paymentToken;
@property (retain, nonatomic) AMSBiometricsSignatureResult *signatureResult;

- (id)init;
- (void).cxx_destruct;

@end
