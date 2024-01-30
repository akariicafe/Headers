@interface CKVAssistantSettingsBridge : NSObject

+ (id)currentDictationLanguageCodes;
+ (BOOL)isDictationEnabled;
+ (id)getConformingSharedUserIds;
+ (id)currentSiriLanguageCode;
+ (BOOL)isCustomerInstall;
+ (BOOL)isLinkVocabularyEnabled;
+ (BOOL)isSiriMuxSupported;
+ (BOOL)isAssistantEnabled;
+ (BOOL)isSpeechProfileEnabled;
+ (BOOL)isUnifiedAssetNamespaceEnabled;
+ (BOOL)isSiriUODSupported;
+ (BOOL)isASRSupported;

- (id)init;

@end
