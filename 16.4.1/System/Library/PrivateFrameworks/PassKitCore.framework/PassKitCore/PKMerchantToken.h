@class NSString, NSURL;

@interface PKMerchantToken : NSObject

@property (readonly, copy, nonatomic) NSString *merchantTokenId;
@property (readonly, copy, nonatomic) NSString *appleMerchantId;
@property (readonly, copy, nonatomic) NSString *merchantName;
@property (readonly, nonatomic) NSURL *merchantIconURL;
@property (readonly, nonatomic) NSURL *merchantTokenManagementURL;
@property (readonly, copy, nonatomic) NSString *tokenCategory;
@property (readonly, nonatomic) BOOL isDeferredPayment;
@property (readonly, nonatomic) BOOL isAMPPaymentToken;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithMerchantTokenId:(id)a0 appleMerchantId:(id)a1 merchantName:(id)a2 merchantIconURL:(id)a3 merchantTokenManagementURL:(id)a4 tokenCategory:(id)a5 isDeferredPayment:(BOOL)a6;

@end
