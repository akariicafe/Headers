@class NSDictionary, SSCoalescingQueue;

@interface SSMetricsTimingDefaults : NSObject

@property (retain, nonatomic) SSCoalescingQueue *updateQueue;
@property (retain, nonatomic) NSDictionary *cachedValues;
@property (nonatomic, getter=isRunningTests) BOOL runningTests;
@property (readonly) NSDictionary *values;
@property (readonly) double sessionDurationLoadURL;
@property (readonly) double samplingPercentageUsersLoadURL;
@property (readonly) double samplingPercentageCachedResponsesLoadURL;
@property (readonly) double sessionDurationPageRender;
@property (readonly) double samplingPercentageUsersPageRender;

+ (id)sharedInstance;
+ (id)sharedInstanceWithSessionDelegate:(id)a0;

- (void).cxx_destruct;
- (id)initWithSessionDelegate:(id)a0;
- (void)update;

@end
