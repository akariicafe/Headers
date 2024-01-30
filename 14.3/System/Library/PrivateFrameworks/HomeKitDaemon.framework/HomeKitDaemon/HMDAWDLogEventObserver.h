@class NSString;

@interface HMDAWDLogEventObserver : HMFObject <HMDLogEventObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedAWDServerConnection;
+ (id)stringForAWDMetricType:(unsigned int)a0;
+ (void)_submitAWDMetric:(id)a0 type:(unsigned int)a1;

- (id)init;
- (void)didReceiveEventFromDispatcher:(id)a0 withLogContext:(id)a1;

@end
