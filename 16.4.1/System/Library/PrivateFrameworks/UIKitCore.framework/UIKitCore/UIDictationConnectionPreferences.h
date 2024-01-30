@class AFPreferences;

@interface UIDictationConnectionPreferences : NSObject

@property (retain, nonatomic) AFPreferences *afPreferences;

+ (id)sharedInstance;

- (BOOL)dictationIsEnabled;
- (BOOL)suppressDataSharingOptIn;
- (id)languageCode;
- (BOOL)isOnDeviceDictationSupportAvailableForLanguage:(id)a0;
- (BOOL)suppressDictationOptIn;
- (long long)dataSharingOptInStatus;
- (id)dictationSLSEnabledLanguages;
- (void)afPreferencesChanged:(id)a0;
- (id)manualEndpointingThreshold;
- (id)getOfflineDictationStatusForLanguage:(id)a0;
- (BOOL)isOnDeviceEmojiRecognitionSupportAvailableForLanguage:(id)a0;
- (id)initSingleton;
- (BOOL)ignoreServerManualEndpointingThreshold;
- (void).cxx_destruct;
- (BOOL)isSmartLanguageSelectionEnabled;
- (BOOL)isOnDeviceDictationSupportMissingAssetForLanguage:(id)a0;

@end
