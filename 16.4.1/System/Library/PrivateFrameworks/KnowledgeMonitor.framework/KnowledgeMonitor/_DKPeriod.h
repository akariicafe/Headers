@class NSDate;

@interface _DKPeriod : NSObject <DKPeriodType>

@property (readonly) NSDate *startDate;
@property (readonly) NSDate *endDate;
@property (readonly) double duration;

+ (id)periodWithStart:(id)a0 end:(id)a1;
+ (id)periodWithEnd:(id)a0 duration:(double)a1;
+ (id)periodWithStart:(id)a0 duration:(double)a1;

- (BOOL)contains:(id)a0;
- (id)initWithStart:(id)a0 andEnd:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
