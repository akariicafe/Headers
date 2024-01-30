@protocol MPSNNGramMatrixCallback;

@interface MPSNNGramMatrixCalculationNode : MPSNNFilterNode

@property (readonly, nonatomic) float alpha;
@property (retain, nonatomic) id<MPSNNGramMatrixCallback> propertyCallBack;

+ (id)nodeWithSource:(id)a0;
+ (id)nodeWithSource:(id)a0 alpha:(float)a1;

- (id)initWithSource:(id)a0;
- (void)dealloc;
- (Class)gradientClass;
- (id)initWithSource:(id)a0 alpha:(float)a1;
- (void *)newFilterNode;

@end
