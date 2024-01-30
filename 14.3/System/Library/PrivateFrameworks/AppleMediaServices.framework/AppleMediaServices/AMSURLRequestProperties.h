@class NSMutableDictionary, AMSKeychainOptions, NSDictionary, NSString, ACAccount, AMSProcessInfo, AMSPurchaseInfo;
@protocol AMSBagProtocol, AMSResponseDecoding;

@interface AMSURLRequestProperties : NSObject <NSCopying, NSMutableCopying>

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSDictionary *additionalMetrics;
@property (nonatomic) long long anisetteType;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (nonatomic) long long dialogOptions;
@property (nonatomic) BOOL disableLoadURLMetrics;
@property (retain, nonatomic) AMSKeychainOptions *keychainOptions;
@property (nonatomic) BOOL knownToBeTrusted;
@property (retain, nonatomic) NSString *logUUID;
@property (nonatomic) long long maxRetryCount;
@property (nonatomic) long long mescalType;
@property (retain, nonatomic) AMSPurchaseInfo *purchaseInfo;
@property (nonatomic) BOOL remoteSecuritySigningEnabled;
@property (retain, nonatomic) id<AMSResponseDecoding> responseDecoder;
@property (nonatomic) BOOL disableResponseDecoding;
@property (nonatomic) long long reversePushType;
@property (nonatomic) BOOL shouldSetCookiesFromResponse;
@property (nonatomic) BOOL shouldSetStorefrontFromResponse;
@property (retain, nonatomic) NSMutableDictionary *userInfo;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
