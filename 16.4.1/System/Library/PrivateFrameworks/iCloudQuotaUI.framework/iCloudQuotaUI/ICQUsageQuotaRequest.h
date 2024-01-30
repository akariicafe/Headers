@class ACAccount, ACAccountStore;

@interface ICQUsageQuotaRequest : AARequest

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) ACAccountStore *accountStore;

+ (void)addHeadersToRequest:(id)a0 forAccount:(id)a1;
+ (void)addHeadersForPrimaryAccountToRequest:(id)a0;

- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 accountStore:(id)a1 URLString:(id)a2;

@end
