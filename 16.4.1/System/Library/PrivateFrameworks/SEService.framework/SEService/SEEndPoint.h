@class NSNumber, NSString, NSArray, NSData, SEEndPointConfiguration, SEEndPointPrivacyEncryptResponse;

@interface SEEndPoint : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *issuerIdentifier;
@property (readonly, nonatomic) NSString *privacyKeyIdentifier;
@property (readonly, nonatomic) NSData *keyIdentifier;
@property (retain, nonatomic) NSData *revocationAttestation;
@property (retain, nonatomic) SEEndPointPrivacyEncryptResponse *carOEMProprietaryData;
@property (retain, nonatomic) NSString *terminatedByTaskID;
@property (readonly) long long endPointType;
@property (readonly) NSData *appletIdentifier;
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
@property (copy) NSString *bleUUID;
@property (copy) NSData *bleIntroKey;
@property (copy) NSData *bleOOBKey;
@property (copy) NSData *bleOOBMasterKey;
@property (copy) NSData *bleDCKIdentifier;
@property (copy) NSData *bleAddress;
@property (copy) NSNumber *blePairingRequest;
@property (copy) NSArray *supportedRKEFunctions;
@property (copy) NSData *longTermSharedSecret;
@property (copy) NSString *ownerIDSIdentifier;
@property (copy) NSString *sharingSessionUUID;
@property (copy) NSData *hupData;
@property (copy) NSNumber *hupDone;
@property (copy) NSArray *sharingRecords;
@property (copy) NSData *sharingAttestationData;
@property (copy) NSData *ownerEphemeralKey;
@property (copy) NSData *sharingEncryptedData;

+ (id)endPointWithType:(long long)a0 appletIdentifier:(id)a1 identifier:(id)a2 certificateData:(id)a3 error:(id *)a4;
+ (id)decodeWithData:(id)a0 error:(id *)a1;
+ (id)revokedEndpointWithPublicKeyIdentifier:(id)a0 appletIdentifier:(id)a1 revocationAttestation:(id)a2 error:(id *)a3;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dumpState;
- (id)description;
- (void).cxx_destruct;
- (id)encodeWithError:(id *)a0;
- (unsigned long long)getEndpointUser;
- (id)configurePrivateData:(id)a0 confidentialData:(id)a1 contaclessPersistentVisibility:(id)a2 wiredPersistentVisibility:(id)a3 nfcExpressOnlyInLPM:(id)a4;
- (void)configurePrivateDataOffset:(unsigned short)a0 privateDataLength:(unsigned short)a1 confidentialDataOffset:(unsigned short)a2 confidentialDataLength:(unsigned short)a3 contaclessVisibility:(BOOL)a4 wiredVisibility:(BOOL)a5;
- (id)decryptPrivacyData:(id)a0 serverPrivacyPublicKeyData:(id)a1 plainText:(id *)a2;
- (id)deleteEndPointLongTermPrivacyKey;
- (id)encryptPrivacyData:(id)a0 serverPrivacyPublicKeyData:(id)a1 ephemeralPublicKeyData:(id *)a2 cipherText:(id *)a3;
- (id)generateEndPointPrivacyLongTermPrivacyKey;
- (void)prependCertificateChain:(id)a0;
- (id)validateAuthorizedEndpointConfig:(id)a0;

@end
