@class NSString, NSArray, CPAnalyticsEventMatcher;

@interface CPAnalyticsLogEventMatcher : CPAnalyticsEventMatcher {
    CPAnalyticsEventMatcher *_eventMatcher;
}

@property (readonly, nonatomic) NSString *eventTypeLabel;
@property (readonly, nonatomic) BOOL shouldLogEventName;
@property (readonly, nonatomic) NSArray *eventPropertiesToLog;
@property (readonly, nonatomic) NSArray *eventPublicPropertiesToLog;

- (BOOL)doesMatch:(id)a0;
- (id)initWithConfig:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
