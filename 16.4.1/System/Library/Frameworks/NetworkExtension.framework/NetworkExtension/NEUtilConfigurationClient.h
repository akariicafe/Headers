@class NEDNSProxyProviderProtocol, NEFilterProviderConfiguration, NSArray, NEAppPush, NSString, NEDNSSettingsBundle, NEConfigurationManager, NSMutableArray, NEConfiguration;

@interface NEUtilConfigurationClient : NSObject <NEConfigurationCommandHandling> {
    NEConfigurationManager *_manager;
    NSMutableArray *_createdConfigurations;
    NSMutableArray *_currentConfigurations;
    NSMutableArray *_identities;
    NEConfiguration *_currentConfiguration;
}

@property BOOL enabled;
@property BOOL onDemandEnabled;
@property BOOL onDemandUserOverrideDisabled;
@property (nonatomic) BOOL disconnectOnDemandEnabled;
@property (copy) NSArray *onDemandRules;
@property (readonly) BOOL isAlwaysOn;
@property (readonly) NEFilterProviderConfiguration *filterConfiguration;
@property (readonly) NEDNSProxyProviderProtocol *dnsProxyConfiguration;
@property (readonly) NEDNSSettingsBundle *dnsSettingsBundle;
@property (readonly) NEAppPush *appPush;
@property (readonly) NSString *clientName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientWithName:(id)a0;
+ (void)removeClientWithName:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)unsetCommonParameters:(id)a0 errorStr:(id *)a1;
- (BOOL)addOnDemandRuleWithParameters:(id)a0 errorStr:(id *)a1;
- (BOOL)createConfigurationWithParameters:(id)a0 errorStr:(id *)a1;
- (void)handleCommand:(int)a0 forConfigWithName:(id)a1 withParameters:(id)a2 completionHandler:(id /* block */)a3;
- (id)initInternalWithClientName:(id)a0;
- (id)initWithClientName:(id)a0;
- (id)protocolForParameters:(id)a0;
- (BOOL)removeOnDemandRuleWithParameters:(id)a0 errorStr:(id *)a1;
- (BOOL)setAppPushParameters:(id)a0 errorStr:(id *)a1;
- (BOOL)setCommonParameters:(id)a0 errorStr:(id *)a1;
- (BOOL)setDNSParameters:(id)a0 errorStr:(id *)a1;
- (BOOL)setDNSProxyWithParameters:(id)a0 errorStr:(id *)a1;
- (BOOL)setFilterPluginWithParameters:(id)a0 errorStr:(id *)a1;
- (BOOL)setIPSecParameters:(id)a0 errorStr:(id *)a1;
- (BOOL)setPasswordWithParameters:(id)a0 errorStr:(id *)a1;
- (BOOL)setProtocolWithParameters:(id)a0 errorStr:(id *)a1;
- (BOOL)setProviderTypeWithParameters:(id)a0 errorStr:(id *)a1;
- (BOOL)setProxyParameters:(id)a0 errorStr:(id *)a1;
- (BOOL)setProxyServer:(id)a0 errorStr:(id *)a1;
- (BOOL)setSharedSecretWithParameters:(id)a0 errorStr:(id *)a1;
- (BOOL)unsetAppPushParameters:(id)a0 errorStr:(id *)a1;
- (BOOL)unsetDNSParameters:(id)a0 errorStr:(id *)a1;
- (BOOL)unsetDNSProxyWithParameters:(id)a0 errorStr:(id *)a1;
- (BOOL)unsetFilterPluginParameters:(id)a0 errorStr:(id *)a1;
- (BOOL)unsetIPSecParameters:(id)a0 errorStr:(id *)a1;
- (BOOL)unsetPasswordWithParameters:(id)a0 errorStr:(id *)a1;
- (BOOL)unsetProxyParameters:(id)a0 errorStr:(id *)a1;
- (BOOL)unsetProxyServer:(id)a0 errorStr:(id *)a1;
- (BOOL)unsetSharedSecretWithParameters:(id)a0 errorStr:(id *)a1;

@end
