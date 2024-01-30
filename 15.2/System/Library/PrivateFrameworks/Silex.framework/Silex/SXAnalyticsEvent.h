@class NSDate;

@interface SXAnalyticsEvent : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)determineEndDate;

@end
