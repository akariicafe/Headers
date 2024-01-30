@class PGGraphCalendarUnitNode, NSString, MARelation, PGGraphSeasonNode;

@interface PGGraphDateNode : PGGraphOptimizedNode

@property (class, readonly) MARelation *seasonOfDate;
@property (class, readonly) MARelation *yearOfDate;
@property (class, readonly) MARelation *momentOfDate;

@property (readonly) NSString *name;
@property (readonly) PGGraphCalendarUnitNode *dayNode;
@property (readonly) PGGraphCalendarUnitNode *monthNode;
@property (readonly) PGGraphCalendarUnitNode *yearNode;
@property (readonly) PGGraphCalendarUnitNode *weekOfYearNode;
@property (readonly) PGGraphCalendarUnitNode *weekOfMonthNode;
@property (readonly, nonatomic) PGGraphSeasonNode *seasonNode;
@property (readonly) long long day;
@property (readonly) long long month;
@property (readonly) long long year;

+ (id)filter;
+ (id)dateNodeForDayNode:(id)a0 monthNode:(id)a1 yearNode:(id)a2;

- (id)momentNodes;
- (id)associatedNodesForRemoval;
- (void)enumerateMomentNodesUsingBlock:(id /* block */)a0;
- (id)sameWeekDateNodes;
- (id)lastWeekDateNodes;
- (id)init;
- (void).cxx_destruct;
- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (void)setLocalProperties:(id)a0;
- (unsigned short)domain;
- (id)description;
- (id)label;
- (void)enumerateHolidayNodesUsingBlock:(id /* block */)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2;
- (id)localDate;

@end
