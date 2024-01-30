@class IDSAccount;

@interface IMDIDSAccount : IMDAccount

@property (readonly, retain, nonatomic) IDSAccount *idsAccount;

- (void)writeAccountDefaults:(id)a0;
- (id)initWithAccountID:(id)a0 defaults:(id)a1 service:(id)a2 idsAccount:(id)a3;
- (id)accountDefaults;
- (BOOL)multiplePhoneNumbersTiedToAccount;
- (BOOL)canMakeDowngradeRoutingChecks;
- (id)description;
- (void).cxx_destruct;

@end
