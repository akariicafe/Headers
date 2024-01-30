@class NSString;

@interface SASettingOpenVoiceControl : SASettingOpenSettings <SASettingSettingsAction>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)openVoiceControl;
+ (id)openVoiceControlWithDictionary:(id)a0 context:(id)a1;

@end
