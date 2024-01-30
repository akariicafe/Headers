@class NSString;

@interface HFAnalyticsSideBarInteractionEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *itemClassName;
@property (retain, nonatomic) NSString *deviceOrientationStr;

- (id)initWithData:(id)a0;
- (id)payload;
- (void).cxx_destruct;

@end
