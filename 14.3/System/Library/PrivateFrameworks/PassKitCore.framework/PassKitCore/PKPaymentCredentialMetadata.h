@class NSString;

@interface PKPaymentCredentialMetadata : NSObject

@property (readonly, copy, nonatomic) NSString *localizedDisplayName;
@property (readonly, copy, nonatomic) NSString *value;

+ (id)paymentCredentialMetadataWithConfiguration:(id)a0;
+ (Class)classForValueType:(id)a0;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)displayString;

@end
