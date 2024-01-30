@class NSString, ATXDNDModeConfigurationClient;

@interface ATXDNDModeConfigurationClientListener : NSObject <DNDModeConfigurationServiceListener> {
    ATXDNDModeConfigurationClient *_configClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)modeConfigurationService:(id)a0 didReceiveAvailableModesUpdate:(id)a1;
- (id)initWithConfigClient:(id)a0;

@end
