@class IDSAccount;

@interface IMDIDSAccount : IMDAccount

@property (readonly, retain, nonatomic) IDSAccount *idsAccount;

- (void)writeAccountDefaults:(id)a0;
- (BOOL)canMakeDowngradeRoutingChecks;
- (id)accountDefaults;
- (void)dealloc;
- (id)initWithAccountID:(id)a0 defaults:(id)a1 service:(id)a2 idsAccount:(id)a3;
- (id)description;
- (BOOL)multiplePhoneNumbersTiedToAccount;

@end
