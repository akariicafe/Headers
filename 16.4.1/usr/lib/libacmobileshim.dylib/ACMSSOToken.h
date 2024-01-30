@class ACFPrincipal, NSString, NSDictionary, ACFMessage, NSDate, NSNumber;

@interface ACMSSOToken : ACMToken <ACCSSOTokenProtocol>

@property (readonly) NSDictionary *tokenDictionary;
@property (retain, nonatomic) ACFPrincipal *principal;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSString *nonce;
@property (retain, nonatomic) NSString *sessionToken;
@property (retain, nonatomic) NSDate *recentAuthenticationDate;
@property (retain, nonatomic) NSNumber *personID;
@property (retain, nonatomic) NSNumber *isTwoStepVerificationRequired;
@property (retain, nonatomic) ACFMessage *initialRequest;
@property (retain, nonatomic) NSString *userPreferences;
@property (retain, nonatomic) NSDate *recentUnlockDate;
@property (retain, nonatomic) NSString *clientSecret;
@property (retain, nonatomic) NSNumber *clientSecretCreationTimestamp;
@property (retain, nonatomic) NSNumber *isUserEnrolledFor2SV;
@property (nonatomic) BOOL longLiveSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tokenWithKeychainTokenInfo:(id)a0;
+ (id)tokenWithToken:(id)a0 data:(id)a1;

- (void)dealloc;

@end
