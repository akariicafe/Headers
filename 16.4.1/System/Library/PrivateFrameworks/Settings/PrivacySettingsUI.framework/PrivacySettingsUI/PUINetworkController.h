@class NEConfiguration, NSMutableArray;

@interface PUINetworkController : PSListController

@property (retain) NEConfiguration *pathControllerConfiguration;
@property (retain) NSMutableArray *dnsConfigurations;

- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)isLocalNetworkEnabled:(id)a0;
- (id)pathRuleForBundleID:(id)a0 create:(BOOL)a1;
- (void)setLocalNetworkEnabled:(id)a0 specifier:(id)a1;
- (void)dnsConfigurationChanged:(id)a0;
- (id)eligibleApplications;
- (void)loadConfigurationsForceRefresh:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)networkConfigurationEnabled:(id)a0;
- (void)saveConfiguration;

@end
