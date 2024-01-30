@class HMFPowerLogger, HMDIntervalMapper, HMDLogEventDispatcher;

@interface HMDPowerLogObserverContext : NSObject

@property (readonly, nonatomic) HMDIntervalMapper *homeConfigurationEventHistogram;
@property (readonly, nonatomic) HMDIntervalMapper *cameraConfigurationEventHistogram;
@property (readonly, weak, nonatomic) HMDLogEventDispatcher *logEventDispatcher;
@property (readonly, weak, nonatomic) HMFPowerLogger *powerLogger;

- (void).cxx_destruct;
- (id)initWithLogEventDispatcher:(id)a0 powerLogger:(id)a1;

@end
