@interface PRSL2FeatureVectorProcessingContext : NSObject

@property (nonatomic) unsigned short *expandedFeatureExecutionOrder;
@property (nonatomic) unsigned long long expandedFeatureCount;

- (void)dealloc;
- (id)initWithFeatureOrder:(id)a0 withInflation:(unsigned long long)a1 withInflatedIndexToSize:(id)a2;

@end
