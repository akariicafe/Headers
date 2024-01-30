@class PKPaymentPass, NSString, NSArray, NSURL;

@interface PKPaymentRemoteCredential : PKPaymentCredential

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSURL *passURL;
@property (readonly, copy, nonatomic) NSArray *summaryMetadata;
@property (readonly, copy, nonatomic) NSArray *metadata;
@property (readonly, copy, nonatomic) NSString *summaryMetadataDescription;
@property (readonly, copy, nonatomic) NSString *statusDescription;
@property (readonly, copy, nonatomic) NSString *ownershipTokenIdentifier;
@property (retain, nonatomic) PKPaymentPass *paymentPass;
@property (nonatomic) unsigned long long rank;
@property (readonly, nonatomic) NSString *productIdentifier;
@property (copy, nonatomic) NSString *serialNumber;

- (void)updateWithDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)_isEqualToCredential:(id)a0;
- (id)initWithIdentifier:(id)a0 status:(long long)a1 credentialType:(long long)a2 passURL:(id)a3;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
