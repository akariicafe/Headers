@class NSString, AMSPurchase, NSDictionary, NSError;

@interface AMSPurchaseResult : NSObject

@property (copy, nonatomic) NSString *correlationID;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) AMSPurchase *purchase;
@property (copy, nonatomic) NSDictionary *responseDictionary;

- (void).cxx_destruct;

@end
