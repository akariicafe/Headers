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

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_loadConfigurationFromDiskIfNecessary;
- (void)_updateConfigurationIfNecessary;
- (void)_initializeProviderConfigurationsWithConfiguration:(id)a0;
- (void)_scheduleConfigurationUpdateDaily;
- (void)_resetProviderConfigurationsDidChange;
- (void)_initializeToDefaultProviderConfigurations;
- (id)_providerToTurnOffFromProviderDictionary:(id)a0;
- (void)_simplifyProviderConfigurations;
- (id)_urlOfDownloadedConfiguration;
- (void)_writeConfigurationToDisk:(id)a0;
- (void)_notifyProviderConfigurationsDidChangeIfNecessary;
- (id)_lastConfigurationUpdateAttemptDate;
- (void)_downloadConfigurationWithCompletionHandler:(id /* block */)a0;
- (BOOL)_shouldUpdateConfigurationGivenLastConfigurationUpdateAttemptDate:(id)a0;
- (void)_setCurrentDateAsLastConfigurationUpdateAttemptDate;
- (void)_didReceiveConfigurationData:(id)a0;
- (void)_setCurrentConfiguration:(id)a0;
- (BOOL)forceLoadConfigurationFromDisk;
- (BOOL)forceUpdateConfigurationFromServer;

@end
