@class PKPaymentPass, PKPaymentCredential, NSString, UIImage;

@interface PKPaymentCredentialCache : NSObject

@property (retain, nonatomic) PKPaymentCredential *credential;
@property (retain, nonatomic) UIImage *passSnapshot;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) PKPaymentPass *paymentPass;
@property (copy, nonatomic) NSString *cellSubtitle;

- (void).cxx_destruct;

@end
