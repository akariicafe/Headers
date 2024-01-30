@class NSString, NSDictionary, AMSBuyParams, ACAccount, NSNumber, AMSProcessInfo;

@interface AMSPurchase : NSObject <NSCopying>

@property (retain, nonatomic) ACAccount *account;
@property (copy, nonatomic) NSNumber *accountId;
@property (copy, nonatomic) NSDictionary *additionalHeaders;
@property (readonly, nonatomic) AMSBuyParams *buyParams;
@property (copy, nonatomic) NSString *callerBundleId;
@property (copy, nonatomic) NSString *clientId;
@property (copy, nonatomic) AMSProcessInfo *clientInfo;
@property (nonatomic) BOOL ignoreRequirePasswordRestriction;
@property (copy, nonatomic) NSString *logUUID;
@property (copy, nonatomic) NSNumber *ownerAccountId;
@property (copy, nonatomic) NSDictionary *metricsOverlay;
@property (readonly) long long purchaseType;
@property (nonatomic) BOOL requiresAccount;
@property (copy, nonatomic) NSString *storefront;
@property (readonly, nonatomic) NSNumber *uniqueIdentifier;
@property (nonatomic, getter=isUserInitiated) BOOL userInitiated;
@property (nonatomic) BOOL useJSONContentType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithPurchaseType:(long long)a0 buyParams:(id)a1;
- (id)_generateIdentifier;

@end
