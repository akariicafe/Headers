@class NEConfiguration, NSMutableArray;

@interface PUINetworkController : PSListController

@property (retain) NEConfiguration *pathControllerConfiguration;
@property (retain) NSMutableArray *dnsConfigurations;

- (id)init;
- (void).cxx_destruct;
- (id)pathRuleForBundleID:(id)a0 create:(BOOL)a1;
- (id)isLocalNetworkEnabled:(id)a0;
- (void)setLocalNetworkEnabled:(id)a0 specifier:(id)a1;
- (id)specifiers;
- (void)loadConfigurationsForceRefresh:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)dnsConfigurationChanged:(id)a0;
- (id)eligibleApplications;
- (void)saveConfiguration;
- (id)networkConfigurationEnabled:(id)a0;

@end
