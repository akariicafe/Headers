@class NSString, NSArray, CPAnalyticsEventMatcher;

@interface CPAnalyticsLogEventMatcher : CPAnalyticsEventMatcher {
    CPAnalyticsEventMatcher *_eventMatcher;
}

@property (readonly, nonatomic) NSString *eventTypeLabel;
@property (readonly, nonatomic) BOOL shouldLogEventName;
@property (readonly, nonatomic) NSArray *eventPropertiesToLog;
@property (readonly, nonatomic) NSArray *eventPublicPropertiesToLog;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (BOOL)doesMatch:(id)a0;

@end
