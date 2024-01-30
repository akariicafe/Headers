@class NSMutableDictionary;

@interface IMSimulatedAccountController : IMAccountController {
    NSMutableDictionary *_simulatedAccountsPerService;
}

- (void)setSimulatedAccounts:(id)a0 forServiceNamed:(id)a1;
- (id)activeSMSAccount;
- (id)activeIMessageAccount;
- (void).cxx_destruct;
- (id)init;
- (id)activeAccounts;

@end
