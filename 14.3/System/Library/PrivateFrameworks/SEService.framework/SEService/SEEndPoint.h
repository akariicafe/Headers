@class NSNumber, NSString, NSArray, NSData, SEEndPointConfiguration, SEEndPointPrivacyEncryptResponse;

@interface SEEndPoint : NSObject <SEEndPoint, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *issuerIdentifier;
@property (readonly, nonatomic) NSString *privacyKeyIdentifier;
@property (readonly, nonatomic) NSData *keyIdentifier;
@property (retain, nonatomic) NSData *revocationAttestation;
@property (retain, nonatomic) SEEndPointPrivacyEncryptResponse *carOEMProprietaryData;
@property (retain, nonatomic) NSArray *sharingRecords;
@property (readonly) NSString *identifier;
@property (readonly) NSString *subjectIdentifier;
@property (readonly) NSData *publicKey;
@property (readonly) NSData *publicKeyIdentifier;
@property (readonly) NSData *privacyPublicKey;
@property (readonly) NSData *privacyPublicKeyIdentifier;
@property (readonly) SEEndPointConfiguration *configuration;
@property (readonly) NSData *readerIdentifier;
@property (readonly) NSData *readerPublicKey;
@property (copy) NSData *readerLongTermPublicKeyCertificate;
@property (readonly) NSArray *authorizedKeys;
@property (readonly) NSNumber *confidentialMailBoxSize;
@property (readonly) NSNumber *privateMailBoxSize;
@property (readonly) NSNumber *counter;
@property (readonly) NSArray *certificates;
@property (copy) NSString *friendlyName;
@property (copy) NSString *readerInfo;
@property (copy) NSString *invitationIdentifier;
@property (copy) NSData *mailboxMapping;
@property (copy) NSData *trackingRequest;
@property (copy) NSData *trackingReceipt;
@property (copy) NSData *deviceConfiguration;
@property (copy) NSString *environment;
@property (copy) NSNumber *sharingTokenAvailabilityBitmap;
@property (copy) NSNumber *bluetoothPSM;
@property (copy) NSString *bluetoothUUID;
@property (copy) NSData *sharingAttestationData;
@property (copy) NSData *ownerEphemeralKey;
@property (copy) NSData *sharingEncryptedData;

+ (id)endPointWithIdentifier:(id)a0 certificateData:(id)a1 error:(id *)a2;
+ (id)revokedEndpointWithPublicKeyIdentifier:(id)a0 revocationAttestation:(id)a1 error:(id *)a2;
+ (id)decodeWithData:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)dumpState;
- (id)description;
- (id)encodeWithError:(id *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)generateEndPointPrivacyLongTermPrivacyKey;
- (id)validateAuthorizedEndpointConfig:(id)a0;
- (void)prependCertificateChain:(id)a0;
- (id)configurePrivateData:(id)a0 confidentialData:(id)a1 contaclessPersistentVisibility:(id)a2 wiredPersistentVisibility:(id)a3;
- (void)configurePrivateDataOffset:(unsigned short)a0 privateDataLength:(unsigned short)a1 confidentialDataOffset:(unsigned short)a2 confidentialDataLength:(unsigned short)a3 contaclessVisibility:(BOOL)a4 wiredVisibility:(BOOL)a5;
- (id)decryptPrivacyData:(id)a0 serverPrivacyPublicKeyData:(id)a1 plainText:(id *)a2;
- (id)encryptPrivacyData:(id)a0 serverPrivacyPublicKeyData:(id)a1 ephemeralPublicKeyData:(id *)a2 cipherText:(id *)a3;
- (id)deleteEndPointLongTermPrivacyKey;

@end
