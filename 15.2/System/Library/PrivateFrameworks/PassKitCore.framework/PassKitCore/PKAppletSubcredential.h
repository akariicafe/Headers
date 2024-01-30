@class PKAppletSubcredentialEncryptedRequest, NSString, PKAppletSubcredentialEntitlement, NSData, PKAppletSubcredentialSharingConfirguration, NSSet, NSUUID;

@interface PKAppletSubcredential : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long credentialState;
@property (retain, nonatomic) PKAppletSubcredentialEncryptedRequest *trackingRequest;
@property (retain, nonatomic) NSData *transactionKey;
@property (retain, nonatomic) NSData *readerIdentifier;
@property (retain, nonatomic) NSString *appletIdentifier;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long state;
@property (retain, nonatomic) PKAppletSubcredentialEntitlement *entitlement;
@property (nonatomic) long long credentialType;
@property (readonly, nonatomic, getter=isShareable) BOOL shareable;
@property (readonly, nonatomic) BOOL canShare;
@property (retain, nonatomic) PKAppletSubcredentialSharingConfirguration *sharingConfiguration;
@property (copy, nonatomic) NSString *invitationIdentifier;
@property (copy, nonatomic) NSString *partnerIdentifier;
@property (copy, nonatomic) NSString *pairedReaderIdentifier;
@property (nonatomic) BOOL isOnlineImmobilizerToken;
@property (nonatomic) unsigned long long supportedRadioTechnologies;
@property (copy, nonatomic) NSSet *sharedCredentials;
@property (copy, nonatomic) NSSet *invitationReceipts;
@property (copy, nonatomic) NSString *endpointIdentifier;
@property (readonly, nonatomic, getter=isSharedCredential) BOOL sharedCredential;
@property (retain, nonatomic) NSUUID *sharingSessionIdentifier;
@property (copy, nonatomic) NSString *originatorIDSHandle;
@property (copy, nonatomic) NSString *isoFormat;

- (id)asDictionary;
- (id)initWithIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)initWithKeyInformation:(id)a0;

@end
