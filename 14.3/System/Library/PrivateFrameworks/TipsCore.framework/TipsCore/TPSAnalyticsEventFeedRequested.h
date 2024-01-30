@class NSString;

@interface TPSAnalyticsEventFeedRequested : TPSAnalyticsEvent {
    BOOL _tipFeed;
}

@property (retain, nonatomic) NSString *serviceError;
@property (retain, nonatomic) NSString *clientError;

+ (id)tipFeedRequestEventWithServiceError:(id)a0 clientError:(id)a1;
+ (id)rulesFeedRequestEventWithServiceError:(id)a0 clientError:(id)a1;
+ (BOOL)supportsSecureCoding;

- (id)eventName;
- (void).cxx_destruct;
- (id)_initTipFeedRequestWithServiceError:(id)a0 clientError:(id)a1;
- (id)_initRulesFeedRequestWithServiceError:(id)a0 clientError:(id)a1;
- (id)mutableAnalyticsEventRepresentation;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
