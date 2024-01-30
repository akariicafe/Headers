@class NSDate;

@interface PGGraphBusinessEdge : PGGraphOptimizedEdge

@property (readonly) double confidence;
@property (readonly, nonatomic) BOOL hasRoutineInfo;
@property (readonly, nonatomic) NSDate *universalStartDate;
@property (readonly, nonatomic) NSDate *universalEndDate;

- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;
- (id)edgeDescription;
- (void)checkConsistencyOfProperties:(id)a0 withExtraPropertyKeys:(id)a1;
- (id)initFromSourceNode:(id)a0 toBusinessNode:(id)a1 confidence:(double)a2 hasRoutineInfo:(BOOL)a3 universalStartDate:(id)a4 universalEndDate:(id)a5;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 properties:(id)a4;

@end
