@protocol MPSNNGramMatrixCallback;

@interface MPSNNGramMatrixCalculationNode : MPSNNFilterNode

@property (readonly, nonatomic) float alpha;
@property (retain, nonatomic) id<MPSNNGramMatrixCallback> propertyCallBack;

+ (id)nodeWithSource:(id)a0;
+ (id)nodeWithSource:(id)a0 alpha:(float)a1;

- (void)dealloc;
- (id)initWithSource:(id)a0;
- (void *)newFilterNode;
- (Class)gradientClass;
- (id)initWithSource:(id)a0 alpha:(float)a1;

@end
