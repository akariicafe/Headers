@interface SBVoiceDisabledBundles : NSObject

+ (void)setAppDisabledVoiceControl:(BOOL)a0 bundleIdentifier:(id)a1;
+ (BOOL)voiceControlDisabledByCurrentlyRunningApp;

@end
