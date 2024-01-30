@class ACAccount;

@interface AAAddEmailUIRequest : AARequest

@property (retain, nonatomic) ACAccount *account;

- (id)urlString;
- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)initWithURLString:(id)a0 account:(id)a1;

@end
