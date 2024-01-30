@class NSString, CPAnalyticsEventMatcher, NSObject;

@interface CPAnalyticsCoreDuetEventMatcher : CPAnalyticsEventMatcher {
    CPAnalyticsEventMatcher *_eventMatcher;
}

@property (readonly, nonatomic) NSString *datasetName;
@property (readonly, nonatomic) NSString *identifierPropertyName;
@property (readonly, nonatomic) NSString *subsetPropertyName;
@property (readonly, nonatomic) NSObject *subsetPropertyValue;
@property (readonly, nonatomic) BOOL matchNextEvent;

- (BOOL)doesMatch:(id)a0;
- (id)initWithConfig:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
