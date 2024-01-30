@class ACAccount;

@interface AAEmailVettingRequest : AARequest

@property (retain, nonatomic) ACAccount *account;

- (id)urlRequest;
- (void).cxx_destruct;
- (id)initWithURLString:(id)a0 account:(id)a1;
- (id)initWithAccount:(id)a0;

@end
