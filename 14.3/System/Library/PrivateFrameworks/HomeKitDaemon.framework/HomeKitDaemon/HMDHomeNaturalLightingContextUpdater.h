@class NSString, HMDNaturalLightingCurve, HMDHome, NSNotificationCenter, NSObject;
@protocol OS_dispatch_queue, HMDLightProfileDataSource;

@interface HMDHomeNaturalLightingContextUpdater : HMFObject <HMFLogging>

@property (readonly, weak) HMDHome *home;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) id<HMDLightProfileDataSource> dataSource;
@property long long curveMinimumBrightness;
@property long long curveMaximumBrightness;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (copy) HMDNaturalLightingCurve *curve;
@property (readonly, getter=isDemoModeEnabled) BOOL demoModeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0 demoModeEnabled:(BOOL)a1;
- (void)handleResidentDeviceUpdated:(id)a0;
- (id)initWithHome:(id)a0 workQueue:(id)a1 demoModeEnabled:(BOOL)a2 logIdentifier:(id)a3 notificationCenter:(id)a4 dataSource:(id)a5;
- (void)initalizeCurve;
- (void)updateNaturalLightingContext;
- (id)colorTemperatureTransitionPointsForMaximumBrightnessWithEncodeNaturalLightingCurve:(id)a0;
- (id)colorTemperatureTransitionPointsForMinimumBrightnessWithEncodeNaturalLightingCurve:(id)a0;
- (long long)timeOfDayForMinimumBrightnessTransitionPoint:(id)a0 maximumBrighnessTransitionPoint:(id)a1;
- (long long)colorTemperatureForTransitionPoint:(id)a0;
- (BOOL)areEncodedBrightnessLevelTransitionPointsValid:(id)a0;

@end
