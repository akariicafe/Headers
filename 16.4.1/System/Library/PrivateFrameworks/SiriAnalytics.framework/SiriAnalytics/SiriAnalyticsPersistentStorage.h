@class SiriAnalyticsDataVault;

@interface SiriAnalyticsPersistentStorage : NSObject

@property (class, nonatomic, readonly) SiriAnalyticsDataVault *dataVault;

- (id)init;

@end
