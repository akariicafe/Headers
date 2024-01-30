@interface CKVAssistantSettingsBridge : NSObject

+ (id)currentSiriLanguageCode;
+ (BOOL)isCustomerInstall;
+ (BOOL)isSiriUODEnabled;

- (id)init;

@end
