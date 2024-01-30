@class ACAccount;

@interface AAAddEmailUIRequest : AARequest

@property (retain, nonatomic) ACAccount *account;

- (id)urlString;
- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithURLString:(id)a0 account:(id)a1;
- (id)initWithAccount:(id)a0;

@end
