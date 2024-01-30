@class NSString;

@interface SASettingSetVoiceControl : SASettingSetBool <SASettingSettingsAction>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)setVoiceControl;
+ (id)setVoiceControlWithDictionary:(id)a0 context:(id)a1;

@end
