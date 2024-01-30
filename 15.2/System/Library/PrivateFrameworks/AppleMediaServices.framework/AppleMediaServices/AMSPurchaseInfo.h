@class NSString, NSURL, NSMutableDictionary, AMSBuyParams, NSDictionary, ACAccount, AMSPurchase, AMSProcessInfo;
@protocol AMSPurchaseDelegate;

@interface AMSPurchaseInfo : NSObject

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSMutableDictionary *additionalHeaders;
@property (nonatomic) BOOL addKBSync;
@property (retain, nonatomic) AMSBuyParams *buyParams;
@property (readonly, nonatomic) NSString *clientCorrelationKey;
@property (readonly, nonatomic) AMSProcessInfo *clientInfo;
@property (retain, nonatomic) id<AMSPurchaseDelegate> delegate;
@property (retain, nonatomic) NSDictionary *dialog;
@property (retain, nonatomic) NSString *dialogId;
@property (nonatomic) BOOL hasBeenAuthedForBuy;
@property (nonatomic) BOOL hasRetriedOriginalOwnerAccount;
@property (retain, nonatomic) NSURL *paymentServicesURL;
@property (retain, nonatomic) NSString *paymentToken;
@property (readonly, nonatomic) AMSPurchase *purchase;

- (id)description;
- (id)initWithPurchase:(id)a0;
- (id)_purchaseStringForType:(long long)a0;
- (void).cxx_destruct;

@end
