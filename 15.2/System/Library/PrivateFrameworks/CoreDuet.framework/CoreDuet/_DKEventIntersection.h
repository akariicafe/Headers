@class NSArray, NSDate;

@interface _DKEventIntersection : NSObject

@property (readonly) NSDate *startDate;
@property (readonly) NSDate *endDate;
@property (readonly) NSArray *events;

+ (id)eventIntersectionWithStartDate:(id)a0 endDate:(id)a1 events:(id)a2;

- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 events:(id)a2;

@end
