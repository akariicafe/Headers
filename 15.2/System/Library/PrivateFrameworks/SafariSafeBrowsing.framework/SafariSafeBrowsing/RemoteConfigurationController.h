@class ProviderConfiguration, NSDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RemoteConfigurationController : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSDictionary *_currentConfiguration;
    NSObject<OS_dispatch_source> *_updateTimer;
    BOOL _googleConfigurationDidChange;
    BOOL _tencentConfigurationDidChange;
}

@property (readonly, nonatomic, getter=isSafeBrowsingOff) BOOL safeBrowsingOff;
@property (readonly, nonatomic) ProviderConfiguration *googleProviderConfiguration;
@property (readonly, nonatomic) ProviderConfiguration *tencentProviderConfiguration;

+ (id)sharedController;

- (void)_scheduleConfigurationUpdateDaily;
- (void)_downloadConfigurationWithCompletionHandler:(id /* block */)a0;
- (id)_providerToTurnOffFromProviderDictionary:(id)a0;
- (void)_simplifyProviderConfigurations;
- (void)_setCurrentDateAsLastConfigurationUpdateAttemptDate;
- (id)_urlOfDownloadedConfiguration;
- (BOOL)_shouldUpdateConfigurationGivenLastConfigurationUpdateAttemptDate:(id)a0;
- (void)_setCurrentConfiguration:(id)a0;
- (void)_updateConfigurationIfNecessary;
- (BOOL)forceLoadConfigurationFromDisk;
- (void)_initializeProviderConfigurationsWithConfiguration:(id)a0;
- (BOOL)forceUpdateConfigurationFromServer;
- (void)_didReceiveConfigurationData:(id)a0;
- (void)_resetProviderConfigurationsDidChange;
- (void)_writeConfigurationToDisk:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_loadConfigurationFromDiskIfNecessary;
- (void)_initializeToDefaultProviderConfigurations;
- (void)dealloc;
- (void)_notifyProviderConfigurationsDidChangeIfNecessary;
- (id)_lastConfigurationUpdateAttemptDate;

@end
