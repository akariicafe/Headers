@class NSDictionary, NSString, NSDate;

@interface AMSBagNetworkTaskResult : NSObject

@property (retain, nonatomic) NSDictionary *data;
@property (retain, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) BOOL expired;
@property (retain, nonatomic) NSString *storefront;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
