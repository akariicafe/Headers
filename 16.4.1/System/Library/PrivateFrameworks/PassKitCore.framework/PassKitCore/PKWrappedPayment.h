@class PKSecureElementCertificateSet, NSString, NSArray, NSData;

@interface PKWrappedPayment : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *transactionIdentifier;
@property (copy, nonatomic) NSData *transactionData;
@property (copy, nonatomic) NSData *transactionInstructionsSignature;
@property (copy, nonatomic) PKSecureElementCertificateSet *certificates;
@property (copy, nonatomic) NSString *merchantCountryCode;
@property (copy, nonatomic) NSString *kextBlacklistVersion;
@property (copy, nonatomic) NSData *enrollmentSignature;
@property (copy, nonatomic) NSArray *SEPCertificates;
@property (copy, nonatomic) NSData *confirmationBlobHash;
@property (nonatomic) long long confirmationBlobVersion;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
