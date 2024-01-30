@interface CSEndpointLoggingHelper : NSObject

+ (void)reportMHEndpointerAccessibleContextEventWithThresholdType:(id)a0 MhId:(id)a1;
+ (id)getMHClientEventByMhUUID:(id)a0;
+ (id)getMHStatisticDistributionInfoFromDictionary:(id)a0;
+ (id)getMHStatisticDistributionInfoFromDictionary:(id)a0 withScaleFactor:(double)a1;
+ (void)reportServerEndpointWithMhId:(id)a0;

@end
