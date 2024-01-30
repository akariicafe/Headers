@class ACFPrincipal, NSString, NSMutableDictionary, ACFMessage, NSDate, NSNumber, NSData;

@interface ACCAuthContext : NSObject <ACCAuthContextProtocol>

@property (retain) NSDate *expirationDate;
@property (retain) ACFPrincipal *principal;
@property (retain) ACFMessage *request;
@property NSNumber *authenticationType;
@property (retain) NSNumber *appID;
@property (retain) NSString *encryptionHash;
@property (retain) NSString *nonce;
@property (retain) NSString *oldUserKey;
@property (retain) NSString *currentUserKey;
@property (retain) NSString *appIDKey;
@property (retain) NSString *dsKeyVersion;
@property (retain) NSString *sessionToken;
@property (retain) NSString *tokenVersion;
@property (retain) NSDate *creationDate;
@property (readonly, nonatomic) NSMutableDictionary *parametersDictionary;
@property (readonly, nonatomic) NSString *tokenSourceString;
@property (retain, nonatomic) NSData *encryptionKey;
@property (retain, nonatomic) NSData *initializationVector;
@property (retain, nonatomic) NSNumber *personID;
@property (retain, nonatomic) NSString *selectedDeviceId;
@property (retain, nonatomic) NSString *selectedDeviceType;
@property (retain, nonatomic) NSString *twoStepVerificationCode;
@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSString *recoveryKey;
@property (retain, nonatomic) NSString *clientSecretTokenHmac;
@property (retain, nonatomic) NSNumber *clientSecretCreateDate;
@property (retain, nonatomic) NSNumber *touchIDSupport;
@property (readonly, nonatomic) NSString *xmlTokenSourceString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)authContextWithRequest:(id)a0;

- (id)initWithRequest:(id)a0;
- (void)dealloc;
- (id)strippedPropertyListString:(id)a0;

@end
