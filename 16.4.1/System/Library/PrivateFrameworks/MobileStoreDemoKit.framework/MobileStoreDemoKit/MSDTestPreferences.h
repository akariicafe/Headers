@interface MSDTestPreferences : NSObject

+ (id)sharedInstance;

- (double)appUsagePollingInterval;
- (double)caLogsUploadInterval;
- (double)cachingHubRetryInterval;
- (long long)concurrentDownloadOperation;
- (long long)concurrentDownloadRequest;
- (long long)concurrentSession;
- (id)contentSyncTimeoutInterval;
- (id)demoUnitServerURL;
- (long long)deviceActivationFlag;
- (BOOL)disableParallelProcessing;
- (BOOL)enablePeerDemoService;
- (BOOL)fakeActivationDemoBit;
- (long long)findMyHubRetryDelay;
- (id)findMyHubServerURL;
- (id)getValueFromTestPreferencesForKey:(id)a0;
- (id)mockAccountSettingsFile;
- (BOOL)mockForBetterTogetherDemo;
- (BOOL)pauseContentUpdateOnError;
- (id)pressDemoTestTarget;
- (id)pressDemoXCTestProductsPath;
- (unsigned int)rebootDelayForStaging;
- (id)screenSaverIdleDelay;
- (BOOL)skipMarkAsNotDemo;
- (long long)storePickerUIMode;
- (unsigned int)systemAppPollingInterval;
- (unsigned int)systemAppTimeoutInterval;
- (unsigned int)timeShowingFatalError;

@end
