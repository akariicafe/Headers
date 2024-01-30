@class MAEdgeFilter;

@interface PGGraphCalendarUnitEdge : PGGraphPropertylessEdge {
    unsigned char _calendarUnit : 8;
}

@property (class, readonly, nonatomic) MAEdgeFilter *dayFilter;
@property (class, readonly, nonatomic) MAEdgeFilter *monthFilter;
@property (class, readonly, nonatomic) MAEdgeFilter *yearFilter;
@property (class, readonly, nonatomic) MAEdgeFilter *weekOfYearFilter;
@property (class, readonly, nonatomic) MAEdgeFilter *weekOfMonthFilter;
@property (class, readonly, nonatomic) MAEdgeFilter *dayOfWeekFilter;

- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4;
- (id)initWithLabel:(id)a0 fromDateNode:(id)a1 toCalendarUnitNode:(id)a2;
- (unsigned short)domain;
- (id)label;

@end
