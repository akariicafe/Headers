@class NSString, EDAMUser, EDAMUserUrls, NSNumber, EDAMPublicUserInfo;

@interface EDAMAuthenticationResult : FATObject

@property (retain, nonatomic) NSNumber *currentTime;
@property (retain, nonatomic) NSString *authenticationToken;
@property (retain, nonatomic) NSNumber *expiration;
@property (retain, nonatomic) EDAMUser *user;
@property (retain, nonatomic) EDAMPublicUserInfo *publicUserInfo;
@property (retain, nonatomic) NSString *noteStoreUrl;
@property (retain, nonatomic) NSString *webApiUrlPrefix;
@property (retain, nonatomic) NSNumber *secondFactorRequired;
@property (retain, nonatomic) NSString *secondFactorDeliveryHint;
@property (retain, nonatomic) EDAMUserUrls *urls;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
