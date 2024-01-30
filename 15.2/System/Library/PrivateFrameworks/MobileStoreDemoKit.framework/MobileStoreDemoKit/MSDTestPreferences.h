@interface MSDTestPreferences : NSObject

+ (id)sharedInstance;

- (BOOL)fakeActivationDemoBit;
- (long long)deviceActivationFlag;
- (id)getValueFromTestPreferencesForKey:(id)a0;
- (id)findMyHubServerURL;
- (long long)findMyHubRetryDelay;
- (unsigned int)rebootDelayForStaging;
- (BOOL)disableParallelProcessing;
- (BOOL)pauseContentUpdateOnError;
- (long long)concurrentDownloadRequest;
- (long long)concurrentDownloadOperation;
- (long long)concurrentSession;
- (double)cachingHubRetryInterval;
- (double)appUsagePollingInterval;
- (unsigned long long)systemAppTimeoutInterval;
- (unsigned long long)systemAppPollingInterval;
- (id)screenSaverIdleDelay;

@end
