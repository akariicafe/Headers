@class NSDate;

@interface PLAccountingRange : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) double length;

+ (id)emptyRange;
+ (id)rangeWithStartDate:(id)a0 withEndDate:(id)a1;

- (id)intersect:(id)a0;
- (BOOL)containsDate:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)overlaps:(id)a0;
- (id)description;
- (id)initWithStartDate:(id)a0 withEndDate:(id)a1;
- (void).cxx_destruct;

@end
