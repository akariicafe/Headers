@class AFPreferences;

@interface UIDictationConnectionPreferences : NSObject

@property (retain, nonatomic) AFPreferences *afPreferences;

+ (id)sharedInstance;

- (BOOL)suppressDictationOptIn;
- (BOOL)ignoreServerManualEndpointingThreshold;
- (id)manualEndpointingThreshold;
- (BOOL)suppressDataSharingOptIn;
- (id)dictationSLSEnabledLanguages;
- (BOOL)dictationIsEnabled;
- (id)languageCode;
- (void).cxx_destruct;
- (id)initSingleton;
- (void)afPreferencesChanged:(id)a0;
- (long long)dataSharingOptInStatus;
- (BOOL)isSmartLanguageSelectionEnabled;

@end
