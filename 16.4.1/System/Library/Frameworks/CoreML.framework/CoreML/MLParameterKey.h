@interface MLParameterKey : MLKey

@property (class, readonly, nonatomic) MLParameterKey *linkedModelFileName;
@property (class, readonly, nonatomic) MLParameterKey *linkedModelSearchPath;
@property (class, readonly, nonatomic) MLParameterKey *weights;
@property (class, readonly, nonatomic) MLParameterKey *biases;
@property (class, readonly, nonatomic) MLParameterKey *learningRate;
@property (class, readonly, nonatomic) MLParameterKey *momentum;
@property (class, readonly, nonatomic) MLParameterKey *miniBatchSize;
@property (class, readonly, nonatomic) MLParameterKey *beta1;
@property (class, readonly, nonatomic) MLParameterKey *beta2;
@property (class, readonly, nonatomic) MLParameterKey *eps;
@property (class, readonly, nonatomic) MLParameterKey *epochs;
@property (class, readonly, nonatomic) MLParameterKey *shuffle;
@property (class, readonly, nonatomic) MLParameterKey *seed;
@property (class, readonly, nonatomic) MLParameterKey *numberOfNeighbors;

+ (id)maxDepth;
+ (id)updateType;
+ (id)minChildWeight;
+ (id)numClasses;
+ (id)numTrees;
+ (id)objective;

- (id)initWithKeyName:(id)a0;
- (id)deletingPrefixingScope:(id)a0;
- (id)scopedTo:(id)a0;

@end
