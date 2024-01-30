@class HMFMessageDestination, HMHomeManager;

@interface HMNetworkRouterFirewallRuleManager : NSObject

@property (readonly, weak, nonatomic) HMHomeManager *homeManager;
@property (readonly, nonatomic) HMFMessageDestination *messageDestination;

- (id)initWithHomeManager:(id)a0;
- (void)listCloudRecordsForProductGroup:(id)a0 rawOutput:(BOOL)a1 completion:(id /* block */)a2;
- (void)_fetchCloudChangesWithForceChangesFound:(BOOL)a0 completion:(id /* block */)a1;
- (void)dumpLocalRulesForProductGroup:(id)a0 ignoreOverrides:(BOOL)a1 rawOutput:(BOOL)a2 completion:(id /* block */)a3;
- (void)fetchCloudChangesAndForceChangesFoundWithCompletion:(id /* block */)a0;
- (void)_removeOverridesForProductGroup:(id)a0 productNumber:(id)a1 completion:(id /* block */)a2;
- (void)removeOverridesForProductGroup:(id)a0 productNumber:(id)a1 completion:(id /* block */)a2;
- (void)setOverrides:(id)a0 completion:(id /* block */)a1;
- (void)_dumpPairedMetadataForProductGroup:(id)a0 productNumber:(id)a1 firmwareVersion:(id)a2 ignoreOverrides:(BOOL)a3 rawOutput:(BOOL)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;
- (void)removeAllOverridesWithCompletion:(id /* block */)a0;
- (void)_dumpLocalRulesForProductGroup:(id)a0 productNumber:(id)a1 firmwareVersion:(id)a2 ignoreOverrides:(BOOL)a3 rawOutput:(BOOL)a4 completion:(id /* block */)a5;
- (void)dumpPairedMetadataForProductGroup:(id)a0 productNumber:(id)a1 firmwareVersion:(id)a2 ignoreOverrides:(BOOL)a3 rawOutput:(BOOL)a4 completion:(id /* block */)a5;
- (void)_dumpCloudRecordsForProductGroup:(id)a0 productNumber:(id)a1 rawOutput:(BOOL)a2 listOnly:(BOOL)a3 verifySignatures:(BOOL)a4 completion:(id /* block */)a5;
- (void)dumpCloudRecordsForProductGroup:(id)a0 productNumber:(id)a1 rawOutput:(BOOL)a2 verifySignatures:(BOOL)a3 completion:(id /* block */)a4;
- (void)dumpLocalRulesForProductGroup:(id)a0 productNumber:(id)a1 firmwareVersion:(id)a2 ignoreOverrides:(BOOL)a3 rawOutput:(BOOL)a4 completion:(id /* block */)a5;
- (void)_addOverrides:(id)a0 replace:(BOOL)a1 completion:(id /* block */)a2;
- (void)addOverrides:(id)a0 completion:(id /* block */)a1;
- (void)removeAllLocalRulesWithCompletion:(id /* block */)a0;
- (void)dumpAllLocalRulesIgnoringOverrides:(BOOL)a0 rawOutput:(BOOL)a1 completion:(id /* block */)a2;
- (void)fetchCloudChangesWithCompletion:(id /* block */)a0;
- (void)__sendMessage:(id)a0;

@end
