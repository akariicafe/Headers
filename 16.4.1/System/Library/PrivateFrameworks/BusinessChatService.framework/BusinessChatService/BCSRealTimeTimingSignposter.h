@class NSString;

@interface BCSRealTimeTimingSignposter : BCSRealTimeShardSignposter <BCSRealTimeTimingMeasurementHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)timingMeasurementDidBegin:(id)a0;
- (void)timingMeasurementDidEnd:(id)a0;

@end
