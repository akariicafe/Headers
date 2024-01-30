@interface AKAutoBugCapture : NSObject

+ (void)triggerAutoBugCaptureWithSubType:(id)a0 andBundleID:(id)a1 userInfo:(id)a2;
+ (BOOL)shouldCapturePromptBugForContext:(id)a0;
+ (id)userInfoFromContext:(id)a0;
+ (id)userInfoFromAccount:(id)a0;

@end
