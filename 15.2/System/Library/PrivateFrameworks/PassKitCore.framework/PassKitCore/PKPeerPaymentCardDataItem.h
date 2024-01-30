@class PKPeerPaymentQuote, PKPaymentPass;

@interface PKPeerPaymentCardDataItem : PKPaymentDataItem {
    PKPaymentPass *_pass;
}

@property (readonly, nonatomic) PKPaymentPass *pass;
@property (readonly, nonatomic) PKPeerPaymentQuote *quote;

+ (long long)dataType;

- (BOOL)isValidWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)shouldShowDisclosure;

@end
