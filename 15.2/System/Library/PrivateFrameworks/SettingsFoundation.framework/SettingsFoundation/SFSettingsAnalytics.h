@interface SFSettingsAnalytics : NSObject

+ (void)trackingAppActivitySaved;
+ (void)trackingStateOfRequest:(BOOL)a0 askAppsToStopTracking:(BOOL)a1;
+ (void)trackingAppAccessTransparencyVisited:(id)a0;
+ (void)trackingSettingsOpenByURL:(BOOL)a0 url:(id)a1;
+ (void)trackingStateOfRequestForSpecificApp:(unsigned long long)a0 view:(id)a1;
+ (void)trackingViewVisited;
+ (void)trackingViewControllersVisitedInRootController:(id)a0;
+ (void)trackingControlValueChanged:(id)a0 sender:(id)a1;
+ (void)trackingRecordAppActivityVisited;
+ (void)trackingPerformSelector:(id)a0 targetString:(id)a1;

@end
