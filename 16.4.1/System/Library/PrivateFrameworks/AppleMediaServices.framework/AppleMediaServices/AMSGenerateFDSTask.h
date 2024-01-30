@class NSString, AMSFDSRequest, ACAccount, NSNumber;
@protocol AMSBagProtocol;

@interface AMSGenerateFDSTask : AMSTask

@property (readonly, nonatomic) AMSFDSRequest *request;
@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) unsigned long long action;
@property (readonly, nonatomic) id<AMSBagProtocol> bag;
@property (readonly, nonatomic) BOOL deviceSupportsAFDSValues;
@property (readonly, nonatomic) BOOL deviceSupportsAFDSValuesV2;
@property (readonly, nonatomic) NSString *logKey;
@property (readonly, nonatomic) NSNumber *purchaseIdentifier;

+ (BOOL)deviceSupportsAFDSV2WithBag:(id)a0 logKey:(id)a1;

- (id)initWithPurchaseInfo:(id)a0 bag:(id)a1;
- (id)initWithRequest:(id)a0 bag:(id)a1;
- (void).cxx_destruct;
- (id)runTask;

@end
