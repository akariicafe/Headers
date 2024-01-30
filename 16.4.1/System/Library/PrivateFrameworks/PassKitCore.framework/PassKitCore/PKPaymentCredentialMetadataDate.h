@class NSString;

@interface PKPaymentCredentialMetadataDate : PKPaymentCredentialMetadata

@property (readonly, copy, nonatomic) NSString *displayFormat;

- (id)displayString;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isEqualToMetadata:(id)a0;

@end
