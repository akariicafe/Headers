@class AFPreferences;

@interface UIDictationConnectionPreferences : NSObject

@property (retain, nonatomic) AFPreferences *afPreferences;

+ (id)sharedInstance;

- (BOOL)suppressDictationOptIn;
- (void).cxx_destruct;
- (BOOL)dictationIsEnabled;
- (BOOL)isSmartLanguageSelectionEnabled;
- (BOOL)ignoreServerManualEndpointingThreshold;
- (BOOL)suppressDataSharingOptIn;
- (id)manualEndpointingThreshold;
- (id)languageCode;
- (id)dictationSLSEnabledLanguages;
- (long long)dataSharingOptInStatus;
- (id)initSingleton;
- (void)afPreferencesChanged:(id)a0;

@end
