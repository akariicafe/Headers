@class NSDate;

@interface PLAccountingRange : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) double length;

+ (id)emptyRange;
+ (id)rangeWithStartDate:(id)a0 withEndDate:(id)a1;

- (BOOL)containsDate:(id)a0;
- (void).cxx_destruct;
- (id)intersect:(id)a0;
- (BOOL)overlaps:(id)a0;
- (id)initWithStartDate:(id)a0 withEndDate:(id)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
