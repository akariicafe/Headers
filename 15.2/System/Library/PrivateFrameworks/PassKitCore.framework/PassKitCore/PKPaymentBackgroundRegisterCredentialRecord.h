@class NSString, NSData;

@interface PKPaymentBackgroundRegisterCredentialRecord : PKPaymentBackgroundDownloadRecord

@property (copy, nonatomic) NSString *credentialIdentifier;
@property (copy, nonatomic) NSData *responseData;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCredentialIdentifier:(id)a0;

@end
