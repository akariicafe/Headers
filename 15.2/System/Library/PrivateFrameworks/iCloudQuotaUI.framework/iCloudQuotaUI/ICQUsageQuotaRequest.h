@class ACAccount, ACAccountStore;

@interface ICQUsageQuotaRequest : AARequest

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) ACAccountStore *accountStore;

+ (void)addHeadersForPrimaryAccountToRequest:(id)a0;
+ (void)addHeadersToRequest:(id)a0 forAccount:(id)a1;

- (void).cxx_destruct;
- (id)urlRequest;
- (id)initWithAccount:(id)a0 accountStore:(id)a1 URLString:(id)a2;

@end
