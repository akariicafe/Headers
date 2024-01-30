@class PGGraphCalendarUnitNode, NSString, MARelation, PGGraphSeasonNode, PGGraphDateNodeCollection, MANodeFilter;

@interface PGGraphDateNode : PGGraphOptimizedNode <MAUniquelyIdentifiableNode>

@property (class, readonly) MARelation *seasonOfDate;
@property (class, readonly) MARelation *yearOfDate;
@property (class, readonly) MARelation *monthDayOfDate;
@property (class, readonly) MARelation *momentOfDate;

@property (readonly) NSString *name;
@property (readonly) PGGraphCalendarUnitNode *dayNode;
@property (readonly) PGGraphCalendarUnitNode *monthNode;
@property (readonly) PGGraphCalendarUnitNode *monthDayNode;
@property (readonly) PGGraphCalendarUnitNode *yearNode;
@property (readonly) PGGraphCalendarUnitNode *weekOfYearNode;
@property (readonly) PGGraphCalendarUnitNode *weekOfMonthNode;
@property (readonly, nonatomic) PGGraphSeasonNode *seasonNode;
@property (readonly) long long day;
@property (readonly) long long month;
@property (readonly) long long monthDay;
@property (readonly) long long year;
@property (readonly) PGGraphDateNodeCollection *collection;
@property (readonly, nonatomic) MANodeFilter *uniquelyIdentifyingFilter;

+ (id)filter;
+ (id)holidayOfDate;
+ (id)weekOfMonthOfDate;
+ (id)weekOfYearOfDate;
+ (id)dayOfDate;
+ (id)monthOfDate;
+ (id)filterWithDateNames:(id)a0;
+ (id)dateNodeForDayNode:(id)a0 monthNode:(id)a1 yearNode:(id)a2;

- (BOOL)hasProperties:(id)a0;
- (id)description;
- (id)propertyDictionary;
- (id)label;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (id)propertyForKey:(id)a0;
- (void)enumerateMomentEdgesAndNodesUsingBlock:(id /* block */)a0;
- (id)localDate;
- (id)associatedNodesForRemoval;
- (void)enumerateHolidayEdgesAndNodesUsingBlock:(id /* block */)a0;
- (void)enumerateHolidayNodesUsingBlock:(id /* block */)a0;
- (id)sameWeekDateNodes;
- (id)lastWeekDateNodes;

@end
