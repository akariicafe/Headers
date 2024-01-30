@class ACAccount;

@interface AAEmailVettingRequest : AARequest

@property (retain, nonatomic) ACAccount *account;

- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)initWithURLString:(id)a0 account:(id)a1;

@end
