@class NSString, NSNumberFormatter;

@interface NPKPeerPaymentNumberFormatter : NSObject {
    NSNumberFormatter *_decimalNumberFormatter;
    NSNumberFormatter *_nonDecimalNumberFormatter;
}

@property (copy, nonatomic) NSString *currencyCode;

- (id)currencySymbol;
- (id)init;
- (id)initWithCurrencyCode:(id)a0;
- (void).cxx_destruct;
- (id)stringFromNumber:(id)a0;

@end
