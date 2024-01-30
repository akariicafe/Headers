@interface HSGetAuthorizedAccountsTokenRequest : HSRequest

+ (id)requestWithDSID:(unsigned long long)a0 deviceGUID:(id)a1;

- (id)canonicalResponseForResponse:(id)a0;
- (id)initWithDSID:(unsigned long long)a0 deviceGUID:(id)a1;

@end
