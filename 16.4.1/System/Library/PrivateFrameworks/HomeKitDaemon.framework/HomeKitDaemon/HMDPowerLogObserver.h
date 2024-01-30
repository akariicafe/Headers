@class HMDPowerLogObserverContext, NSString;

@interface HMDPowerLogObserver : HMFObject <HMMLogEventObserver>

@property (retain, nonatomic) HMDPowerLogObserverContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedEventClasses;

- (id)initWithContext:(id)a0;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (void)_reportCameraSettingsConfiguration:(id)a0;
- (void)_reportConfiguration:(id)a0;
- (id)initWithLogEventDispatcher:(id)a0;
- (void)_handleHH2CloudKitOperationEvent:(id)a0;

@end
