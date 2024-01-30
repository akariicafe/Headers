@class NSMutableDictionary;

@interface IMSimulatedAccountController : IMAccountController {
    NSMutableDictionary *_simulatedAccountsPerService;
}

- (id)activeSMSAccount;
- (id)init;
- (void).cxx_destruct;
- (id)activeAccounts;
- (void)setSimulatedAccounts:(id)a0 forServiceNamed:(id)a1;
- (id)activeIMessageAccount;

@end
