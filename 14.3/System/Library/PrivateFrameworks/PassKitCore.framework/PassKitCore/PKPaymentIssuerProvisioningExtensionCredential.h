@class NSArray, NSExtension, PKIssuerProvisioningExtensionPaymentPassEntry;

@interface PKPaymentIssuerProvisioningExtensionCredential : PKPaymentCredential

@property (readonly, nonatomic) NSExtension *extension;
@property (readonly, nonatomic) PKIssuerProvisioningExtensionPaymentPassEntry *entry;
@property (readonly, copy, nonatomic) NSArray *metadata;

- (void).cxx_destruct;
- (id)initWithExtension:(id)a0 entry:(id)a1;

@end
