@class NSMutableArray;
@protocol ATXPETEventTracker2Protocol;

@interface ATXHeroAppSingleSuggestionLogger : NSObject

@property (retain, nonatomic) id<ATXPETEventTracker2Protocol> tracker;
@property (retain, nonatomic) NSMutableArray *positiveEventBuffer;
@property (retain, nonatomic) NSMutableArray *negativeEventBuffer;

- (id)initWithTracker:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_flushEventBuffer:(id)a0 numEventsToSample:(long long)a1 isNegative:(BOOL)a2;
- (void)handleSingleSuggestion:(id)a0;
- (void)flushEventBuffers;
- (id)_heroAppEngagementMetricWithBundleId:(id)a0 interactionType:(int)a1 consumerSubType:(id)a2;
- (void)_logHeroAppEngagementMetric:(id)a0;

@end
