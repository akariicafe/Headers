@class NSMutableArray;
@protocol ATXPETEventTracker2Protocol;

@interface ATXAppClipSingleSuggestionLogger : NSObject

@property (retain, nonatomic) id<ATXPETEventTracker2Protocol> tracker;
@property (retain, nonatomic) NSMutableArray *positiveEventBuffer;
@property (retain, nonatomic) NSMutableArray *negativeEventBuffer;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTracker:(id)a0;
- (id)_appClipEngagementMetricWithBundleId:(id)a0 urlHash:(id)a1 interactionType:(int)a2 consumerSubType:(id)a3;
- (void)_logAppClipEngagementMetric:(id)a0;
- (void)_flushEventBuffer:(id)a0 numEventsToSample:(long long)a1 isNegative:(BOOL)a2;
- (void)handleSingleSuggestion:(id)a0;
- (void)flushEventBuffers;

@end
