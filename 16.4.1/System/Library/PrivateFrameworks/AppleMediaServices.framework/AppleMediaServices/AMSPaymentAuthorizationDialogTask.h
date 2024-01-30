@class AMSPaymentAuthorizationDialogRequest, NSString, NSDictionary, AMSPurchaseInfo;
@protocol AMSBagProtocol;

@interface AMSPaymentAuthorizationDialogTask : AMSTask

@property (retain, nonatomic) NSDictionary *idmsToken;
@property (retain, nonatomic) NSString *passwordEquivalentToken;
@property (retain, nonatomic) AMSPaymentAuthorizationDialogRequest *request;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) AMSPurchaseInfo *purchaseInfo;

- (id)initWithRequest:(id)a0 bag:(id)a1;
- (id)perform;
- (void).cxx_destruct;

@end
