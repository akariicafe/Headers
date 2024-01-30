@class ACAccount;

@interface AAAddEmailUIRequest : AARequest

@property (retain, nonatomic) ACAccount *account;

- (id)initWithAccount:(id)a0;
- (id)urlRequest;
- (id)initWithURLString:(id)a0 account:(id)a1;
- (id)urlString;
- (void).cxx_destruct;

@end
