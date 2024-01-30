@class NSString, NSNumber, NSURL;

@interface PKMerchantToken : NSObject

@property (readonly, copy, nonatomic) NSString *merchantTokenId;
@property (readonly, copy, nonatomic) NSString *merchantName;
@property (readonly, nonatomic) NSNumber *merchantAdamId;
@property (readonly, nonatomic) NSURL *merchantTokenManagementURL;
@property (readonly, copy, nonatomic) NSString *tokenCategory;
@property (readonly, nonatomic) BOOL isAMPPaymentToken;

- (id)initWithMerchantTokenId:(id)a0 merchantName:(id)a1 merchantAdamId:(id)a2 merchantTokenManagementURL:(id)a3 tokenCategory:(id)a4;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
