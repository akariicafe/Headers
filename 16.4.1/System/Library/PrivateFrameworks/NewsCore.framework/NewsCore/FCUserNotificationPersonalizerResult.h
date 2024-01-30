@class FCFeedPersonalizedItems;
@protocol FCTodayPrivateData;

@interface FCUserNotificationPersonalizerResult : NSObject

@property (readonly, nonatomic) FCFeedPersonalizedItems *items;
@property (readonly, nonatomic) double baselineClickThroughRate;
@property (readonly, nonatomic) id<FCTodayPrivateData> todayData;

- (void).cxx_destruct;
- (id)initWithItems:(id)a0 baselineClickThroughRate:(double)a1 todayData:(id)a2;

@end
