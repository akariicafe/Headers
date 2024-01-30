@class NSDate;

@interface SXAnalyticsEvent : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)determineEndDate;

@end
