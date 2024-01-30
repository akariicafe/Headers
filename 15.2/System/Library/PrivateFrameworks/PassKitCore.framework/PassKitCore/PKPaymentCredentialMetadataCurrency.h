@class NSString;

@interface PKPaymentCredentialMetadataCurrency : PKPaymentCredentialMetadata

@property (readonly, copy, nonatomic) NSString *currencyCode;

- (BOOL)_isEqualToMetadata:(id)a0;
- (id)displayString;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
