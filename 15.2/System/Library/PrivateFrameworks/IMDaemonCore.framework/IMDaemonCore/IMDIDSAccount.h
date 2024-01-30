@class IDSAccount;

@interface IMDIDSAccount : IMDAccount

@property (readonly, retain, nonatomic) IDSAccount *idsAccount;

- (BOOL)canMakeDowngradeRoutingChecks;
- (id)accountDefaults;
- (void)writeAccountDefaults:(id)a0;
- (id)description;
- (BOOL)multiplePhoneNumbersTiedToAccount;
- (id)initWithAccountID:(id)a0 defaults:(id)a1 service:(id)a2 idsAccount:(id)a3;
- (void)dealloc;

@end
