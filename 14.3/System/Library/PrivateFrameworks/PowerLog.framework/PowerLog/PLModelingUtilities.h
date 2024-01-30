@interface PLModelingUtilities : NSObject

+ (BOOL)internalBuild;
+ (BOOL)isARMMac;
+ (BOOL)isMac;
+ (BOOL)carrierBuild;
+ (double)defaultBatteryEnergyCapacity;
+ (double)duetDiscretionaryBudget;
+ (id)valueForMobileGestaltCapability:(id)a0;
+ (BOOL)shouldShowBatteryGraphs;
+ (BOOL)alsCurveHigherThanDefault;
+ (double)networkingEnergyWithBytes:(int)a0 withDuration:(double)a1;
+ (BOOL)isPercentageSupported;
+ (BOOL)isLowPowerModeSupported;
+ (BOOL)isNarrowScreen;
+ (BOOL)isHeySiriAlwaysOn;
+ (BOOL)isHomePod;
+ (BOOL)isiPad;
+ (BOOL)isWatch;
+ (BOOL)isiPhone;
+ (BOOL)isiPod;

@end
