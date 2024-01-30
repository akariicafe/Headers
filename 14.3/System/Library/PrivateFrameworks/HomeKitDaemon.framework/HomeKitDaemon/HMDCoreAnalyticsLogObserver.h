@class NSString, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HMDCoreAnalyticsLogObserver : HMFObject <HMDLogEventObserver, HMFLogging>

@property (class, readonly) HMDCoreAnalyticsLogObserver *sharedObserver;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain, nonatomic) NSDictionary *homeConfigurationCommonDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)supportedEventTypes;
+ (BOOL)isSupportedEvent:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)didReceiveEventFromDispatcher:(id)a0 withLogContext:(id)a1;
- (BOOL)shouldSubmitEvent:(id)a0;
- (id)updateHomeConfigurationCommonDimensions;
- (void)addHomeConfigurationCommonDimensionsToEventDictionary:(id)a0;

@end
