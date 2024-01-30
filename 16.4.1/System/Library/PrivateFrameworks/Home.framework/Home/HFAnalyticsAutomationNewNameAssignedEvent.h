@class NSNumber;

@interface HFAnalyticsAutomationNewNameAssignedEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *didNamingSucceed;
@property (retain, nonatomic) NSNumber *errorType;
@property (retain, nonatomic) NSNumber *modifiesExistingTrigger;
@property (retain, nonatomic) NSNumber *namingType;

- (id)initWithData:(id)a0;
- (id)payload;
- (void).cxx_destruct;

@end
