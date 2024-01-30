@class MAEdgeFilter;

@interface PGGraphCalendarUnitEdge : PGGraphPropertylessEdge {
    unsigned char _calendarUnit : 8;
}

@property (class, readonly, nonatomic) MAEdgeFilter *dayFilter;
@property (class, readonly, nonatomic) MAEdgeFilter *monthFilter;
@property (class, readonly, nonatomic) MAEdgeFilter *monthDayFilter;
@property (class, readonly, nonatomic) MAEdgeFilter *yearFilter;
@property (class, readonly, nonatomic) MAEdgeFilter *weekOfYearFilter;
@property (class, readonly, nonatomic) MAEdgeFilter *weekOfMonthFilter;
@property (class, readonly, nonatomic) MAEdgeFilter *dayOfWeekFilter;

- (id)label;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;
- (id)initWithCalendarUnit:(unsigned long long)a0 fromDateNode:(id)a1 toCalendarUnitNode:(id)a2;

@end
