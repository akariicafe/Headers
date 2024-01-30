@class NSString, NSData, PKSecureElementCertificateSet;

@interface PKWrappedPayment : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *transactionIdentifier;
@property (copy, nonatomic) NSData *transactionData;
@property (copy, nonatomic) NSData *transactionInstructionsSignature;
@property (copy, nonatomic) PKSecureElementCertificateSet *certificates;
@property (copy, nonatomic) NSString *merchantCountryCode;
@property (copy, nonatomic) NSString *kextBlacklistVersion;
@property (copy, nonatomic) NSData *enrollmentSignature;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
