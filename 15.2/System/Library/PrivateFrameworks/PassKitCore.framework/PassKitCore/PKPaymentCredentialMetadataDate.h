@class NSString;

@interface PKPaymentCredentialMetadataDate : PKPaymentCredentialMetadata

@property (readonly, copy, nonatomic) NSString *displayFormat;

- (BOOL)_isEqualToMetadata:(id)a0;
- (id)displayString;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
