@class NSData;

@interface PKAccountPaymentFundingDetails : NSObject <NSSecureCoding> {
    NSData *_encryptedData;
    NSData *_publicKeyHash;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (id)hashComponentWithCertificatesResponse:(id)a0;
- (id)jsonDictionaryRepresentationWithCertificatesResponse:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)jsonString;
- (BOOL)isEqual:(id)a0;
- (id)jsonDictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)_encryptedDataWithCertificatesResponse:(id)a0 publicKeyHash:(id *)a1;
- (id)fundingDetailsUnencryptedDictionary;
- (void)encodeWithCoder:(id)a0;

@end
