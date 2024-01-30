@class PKAppletSubcredentialEncryptedRequest, NSString, PKAppletSubcredentialSharingConfirguration, NSData, NSUUID, PKPassEntitlement;

@interface PKAppletSubcredential : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long credentialState;
@property (retain, nonatomic) PKAppletSubcredentialEncryptedRequest *trackingRequest;
@property (retain, nonatomic) NSData *transactionKey;
@property (retain, nonatomic) NSData *readerIdentifier;
@property (retain, nonatomic) NSString *appletIdentifier;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long state;
@property (retain, nonatomic) PKPassEntitlement *entitlement;
@property (nonatomic) long long credentialType;
@property (readonly, nonatomic, getter=isShareable) BOOL shareable;
@property (readonly, nonatomic) BOOL canShare;
@property (retain, nonatomic) PKAppletSubcredentialSharingConfirguration *sharingConfiguration;
@property (copy, nonatomic) NSString *invitationIdentifier;
@property (copy, nonatomic) NSString *partnerIdentifier;
@property (readonly, nonatomic) NSString *manufacturerIdentifier;
@property (copy, nonatomic) NSString *pairedReaderIdentifier;
@property (copy, nonatomic) NSString *brandIdentifier;
@property (nonatomic) BOOL isOnlineImmobilizerToken;
@property (nonatomic) unsigned long long supportedRadioTechnologies;
@property (copy, nonatomic) NSString *endpointIdentifier;
@property (readonly, nonatomic, getter=isSharedCredential) BOOL sharedCredential;
@property (retain, nonatomic) NSUUID *sharingSessionIdentifier;
@property (copy, nonatomic) NSString *originatorIDSHandle;
@property (copy, nonatomic) NSString *isoFormat;

- (id)asDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithKeyInformation:(id)a0;

@end
