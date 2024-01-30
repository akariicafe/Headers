@interface NetworkAnalyticsQueueStatisticsSlotEntry : NSObject

@property (nonatomic) unsigned char slot;
@property (nonatomic) unsigned long long minimumQueueDelay;
@property (nonatomic) unsigned long long maximumQueueDelay;
@property (nonatomic) unsigned long long averageQueueDelay;

- (id)description;

@end
