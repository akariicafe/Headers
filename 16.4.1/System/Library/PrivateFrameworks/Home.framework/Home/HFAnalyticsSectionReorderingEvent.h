@class NSNumber, NSString;

@interface HFAnalyticsSectionReorderingEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *numberOfSections;
@property (retain, nonatomic) NSString *reorderingAction;

- (id)initWithData:(id)a0;
- (id)payload;
- (void).cxx_destruct;

@end
