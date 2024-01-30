@interface OSATasking : NSObject

+ (id)getDefaultTasking;
+ (id)normalizeInstructions:(id)a0;
+ (id)applyTasking:(id)a0 taskId:(id)a1 fromBlob:(id)a2;
+ (void)setCRKeyToRandomValue;
+ (BOOL)shouldApplyPreference:(id)a0;
+ (BOOL)preference:(id)a0 alreadySetInInstructions:(id)a1;
+ (id)proxyTasking:(id)a0 taskId:(id)a1 usingConfig:(id)a2 fromBlob:(id)a3;
+ (void)checkTaskingRelevance;
+ (id)getInstalledTaskIds;
+ (id)getAvailableTaskingRoutings;
+ (id)selectConfigFromBlob:(id)a0;

@end
