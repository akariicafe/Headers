@class NSOrderedSet, NSDate;

@interface ATXPOICategoryVisitEvent : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSOrderedSet *possibleCategoryNames;
@property (readonly, nonatomic) BOOL hasExited;

- (BOOL)isEqualToATXPOICategoryVisitEvent:(id)a0;
- (id)identifier;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithPossibleCategoryNames:(id)a0 startDate:(id)a1 endDate:(id)a2 hasExited:(BOOL)a3;
- (void).cxx_destruct;

@end
