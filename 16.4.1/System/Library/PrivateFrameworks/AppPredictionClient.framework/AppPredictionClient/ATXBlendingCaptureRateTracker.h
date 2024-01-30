@interface ATXBlendingCaptureRateTracker : NSObject

+ (void)logAppDirectoryCaptureWithTracker:(id)a0;
+ (void)logAppDirectoryDiversionWithCaptureType:(int)a0 tracker:(id)a1;
+ (void)logHomeScreenCaptureWithTracker:(id)a0;
+ (void)logHomeScreenDiversionWithCaptureType:(int)a0 tracker:(id)a1;
+ (void)logSpotlightActionCaptureWithTracker:(id)a0;
+ (void)logSpotlightActionDiversionWithCaptureType:(int)a0 tracker:(id)a1;
+ (void)logSpotlightAppCaptureWithTracker:(id)a0;
+ (void)logSpotlightAppDiversionWithCaptureType:(int)a0 tracker:(id)a1;

@end
