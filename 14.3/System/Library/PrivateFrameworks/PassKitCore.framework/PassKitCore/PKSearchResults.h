@class NSArray;

@interface PKSearchResults : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *suggestedAutocompleteTokens;
@property (copy, nonatomic) NSArray *paymentPassResults;
@property (copy, nonatomic) NSArray *barcodePassResults;
@property (copy, nonatomic) NSArray *categoryResults;
@property (copy, nonatomic) NSArray *merchantResults;
@property (copy, nonatomic) NSArray *transactionResults;
@property (copy, nonatomic) NSArray *personResults;
@property (copy, nonatomic) NSArray *locationResults;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
