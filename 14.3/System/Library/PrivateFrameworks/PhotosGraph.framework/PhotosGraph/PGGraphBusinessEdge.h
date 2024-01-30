@class NSDate;

@interface PGGraphBusinessEdge : PGGraphOptimizedEdge {
    float _weight;
}

@property (readonly, nonatomic) BOOL hasRoutineInfo;
@property (readonly, nonatomic) NSDate *universalStartDate;
@property (readonly, nonatomic) NSDate *universalEndDate;

- (id)edgeDescription;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4;
- (void)setWeight:(float)a0;
- (void).cxx_destruct;
- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (void)setLocalProperties:(id)a0;
- (float)weight;
- (id)initWithLabel:(id)a0 fromSourceNode:(id)a1 toBusinessNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4;

@end
