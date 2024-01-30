@interface ATXDisplayCacheLockscreenFilter : NSObject

+ (unsigned long long)_getPredictionConfidenceForActions:(id)a0;
+ (BOOL)shouldPredictActionOnLockScreen:(id)a0;
+ (id)indicesOfLockScreenActionsForActionPredictions:(id)a0;
+ (id)indicesOfLockScreenActionsForActionPredictions:(id)a0 criteria:(id /* block */)a1;

@end
