@class NSData;

@interface PKAccountPaymentFundingDetails : NSObject <NSSecureCoding> {
    NSData *_encryptedData;
    NSData *_publicKeyHash;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)hashComponentWithCertificatesResponse:(id)a0;
- (id)jsonDictionaryRepresentationWithCertificatesResponse:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)jsonString;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)jsonDictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)fundingDetailsUnencryptedDictionary;
- (id)_encryptedDataWithCertificatesResponse:(id)a0 publicKeyHash:(id *)a1;
- (id)initWithDictionary:(id)a0;

@end
