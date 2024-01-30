@interface PLModelingUtilities : NSObject

+ (BOOL)isMac;
+ (BOOL)isiPhone;
+ (BOOL)internalBuild;
+ (BOOL)isHomePod;
+ (BOOL)isiPad;
+ (BOOL)isWatch;
+ (BOOL)isAppleTV;
+ (BOOL)hasAOD;
+ (BOOL)isARMMac;
+ (BOOL)carrierBuild;
+ (BOOL)isiPod;
+ (BOOL)isTVOS;
+ (BOOL)alsCurveHigherThanDefault;
+ (double)defaultBatteryEnergyCapacity;
+ (double)duetDiscretionaryBudget;
+ (double)getDefaultL0bThresholdForDeviceType;
+ (BOOL)isHeySiriAlwaysOn;
+ (BOOL)isLowPowerModeSupported;
+ (BOOL)isNarrowScreen;
+ (BOOL)isPercentageSupported;
+ (double)networkingEnergyWithBytes:(int)a0 withDuration:(double)a1;
+ (BOOL)shouldShowBatteryGraphs;
+ (id)valueForMobileGestaltCapability:(id)a0;

@end
