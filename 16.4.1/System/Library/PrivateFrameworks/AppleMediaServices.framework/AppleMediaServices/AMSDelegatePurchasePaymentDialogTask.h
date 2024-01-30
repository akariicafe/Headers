@class NSNumber, AMSDelegatePurchaseRequest, ACAccount;
@protocol AMSBagProtocol;

@interface AMSDelegatePurchasePaymentDialogTask : AMSTask

@property (retain, nonatomic) AMSDelegatePurchaseRequest *currentRequest;
@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) id<AMSBagProtocol> bag;
@property (readonly, nonatomic) NSNumber *designVersion;

- (void).cxx_destruct;
- (id)performTask;
- (id)_encodedURLRequest;
- (id)_legacyUserAgentString;
- (id)_purchaseResultFromPurchaseResult:(id)a0 andPaymentSheetInfo:(id)a1;
- (id)initWithDelegatePurchaseRequest:(id)a0 bag:(id)a1 andDesignVersion:(id)a2;

@end
