@class NSString;

@interface HMDAWDLogEventObserver : HMFObject <HMMLogEventObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)_submitAWDMetric:(id)a0 type:(unsigned int)a1;
+ (id)sharedAWDServerConnection;
+ (id)stringForAWDMetricType:(unsigned int)a0;

- (id)init;
- (void)didReceiveEventFromDispatcher:(id)a0;

@end
