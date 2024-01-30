@class NSString, NSDictionary;

@interface ARCoreAnalyticsEvent : NSObject {
    BOOL _isReportedToCoreAnalytics;
}

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *eventDictionary;

- (void).cxx_destruct;
- (void)reportEvent;
- (id)initWithEventName:(id)a0 eventDictionary:(id)a1;

@end
