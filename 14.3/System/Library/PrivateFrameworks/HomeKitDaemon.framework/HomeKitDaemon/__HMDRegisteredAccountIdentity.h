@class HMDAccount;

@interface __HMDRegisteredAccountIdentity : __HMDRegisteredIdentity

@property (readonly) HMDAccount *account;

- (void).cxx_destruct;
- (id)initWithIdentity:(id)a0;
- (id)initWithIdentity:(id)a0 account:(id)a1;

@end
