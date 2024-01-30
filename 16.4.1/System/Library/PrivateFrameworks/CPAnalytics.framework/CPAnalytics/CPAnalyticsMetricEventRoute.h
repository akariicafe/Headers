@class NSString, NSArray;

@interface CPAnalyticsMetricEventRoute : NSObject

@property (readonly, nonatomic) NSString *destination;
@property (readonly, nonatomic) NSString *destinationEventKey;
@property (readonly, nonatomic) NSArray *propertiesToInclude;

- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;

@end
