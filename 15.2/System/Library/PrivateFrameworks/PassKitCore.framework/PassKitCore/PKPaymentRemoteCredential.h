@class PKPaymentPass, NSString, NSArray, NSURL, PKPaymentRemoteCredentialFIDOProfile;

@interface PKPaymentRemoteCredential : PKPaymentCredential {
    NSString *_summaryMetadataDescription;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSURL *passURL;
@property (copy, nonatomic) NSString *nonce;
@property (readonly, copy, nonatomic) NSArray *summaryMetadata;
@property (readonly, copy, nonatomic) NSArray *metadata;
@property (readonly, copy, nonatomic) NSString *summaryMetadataDescription;
@property (readonly, copy, nonatomic) NSString *statusDescription;
@property (readonly, copy, nonatomic) NSString *ownershipTokenIdentifier;
@property (retain, nonatomic) PKPaymentPass *paymentPass;
@property (nonatomic) unsigned long long rank;
@property (readonly, nonatomic) NSString *productIdentifier;
@property (copy, nonatomic) NSString *serialNumber;
@property (nonatomic) BOOL requiresMetadata;
@property (retain, nonatomic) PKPaymentRemoteCredentialFIDOProfile *fidoProfile;

- (void)updateWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)initWithIdentifier:(id)a0 status:(long long)a1 credentialType:(long long)a2 passURL:(id)a3;
- (unsigned long long)hash;

@end
