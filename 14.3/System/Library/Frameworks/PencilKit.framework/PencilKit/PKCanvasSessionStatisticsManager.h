@class NSMutableDictionary;

@interface PKCanvasSessionStatisticsManager : NSObject {
    NSMutableDictionary *_featureDictionary;
}

+ (id)sharedStatisticsManager;

- (void)endSession;
- (void).cxx_destruct;
- (void)didUseSmartSelection;
- (void)didDrawStroke;
- (void)didCopyAsText;
- (void)didUseInsertSpace;
- (void)didUseSmartShapes;
- (void)didUseDataDetectors;
- (void)_sendUsageSessionStatistics;
- (id)_featureUsageFlattenedDictionary;
- (void)_messageHandwritingAnalyticsWithProxyBlock:(id /* block */)a0;
- (void)logFeatureUsed:(id)a0;
- (void)_testManuallyTriggeringDailyStatistics;

@end
