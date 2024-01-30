@interface PLModelingUtilities : NSObject

+ (BOOL)isWatch;
+ (BOOL)isiPad;
+ (BOOL)isiPhone;
+ (BOOL)isMac;
+ (BOOL)isARMMac;
+ (BOOL)internalBuild;
+ (BOOL)carrierBuild;
+ (BOOL)isiPod;
+ (BOOL)isAppleTV;
+ (BOOL)isTVOS;
+ (BOOL)isHomePod;
+ (double)duetDiscretionaryBudget;
+ (double)defaultBatteryEnergyCapacity;
+ (id)valueForMobileGestaltCapability:(id)a0;
+ (double)getDefaultL0bThresholdForDeviceType;
+ (BOOL)shouldShowBatteryGraphs;
+ (BOOL)alsCurveHigherThanDefault;
+ (double)networkingEnergyWithBytes:(int)a0 withDuration:(double)a1;
+ (BOOL)isPercentageSupported;
+ (BOOL)isLowPowerModeSupported;
+ (BOOL)isNarrowScreen;
+ (BOOL)isHeySiriAlwaysOn;

@end
