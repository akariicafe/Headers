@class HKHRCardioFitnessAnalyticsSignalSource, NSObject;
@protocol OS_dispatch_queue;

@interface HKHRCardioFitnessAnalyticsManager : NSObject {
    HKHRCardioFitnessAnalyticsSignalSource *_signalSource;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)initWithSignalSource:(id)a0;
- (id)submitClassificationChartOverlaySelectedEventCurrentOverlay:(id)a0 previousOverlay:(id)a1;
- (void)_setKey:(id)a0 value:(id)a1 onPayloadIfPresent:(id)a2;
- (void).cxx_destruct;
- (id)submitOnboardingEventForStep:(id)a0 acceptDefaults:(BOOL)a1 countryCode:(id)a2;
- (id)submitDailyEventWithSource:(id)a0;

@end
