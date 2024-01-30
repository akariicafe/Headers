@class PDAnimationTarget, NSString, NSMutableArray;

@interface PDSequentialTimeNode : PDTimeNode

@property (retain, nonatomic) PDAnimationTarget *target;
@property (nonatomic) int presetClass;
@property (nonatomic) int presetId;
@property (nonatomic) int triggerType;
@property (nonatomic) int iterateType;
@property (nonatomic) double delay;
@property (nonatomic) double direction;
@property (retain, nonatomic) NSString *groupId;
@property (nonatomic) BOOL concurrent;
@property (nonatomic) int previousAction;
@property (nonatomic) int nextAction;
@property (retain, nonatomic) NSMutableArray *previousConditions;
@property (retain, nonatomic) NSMutableArray *nextConditions;

+ (unsigned long long)buildPartsFromTarget:(id)a0;
+ (id)newSequentialTimeNodeGroupForAnimationInfo;
+ (id)newSequentialTimeNodeGroupForAnimationInfoWithClass:(Class)a0;
+ (id)newSequentialTimeNodeGroupForAnimationInfoWithClass:(Class)a0 target:(id)a1;
+ (id)timeNodeUnion:(id)a0 initWithClass:(Class)a1;

- (void).cxx_destruct;
- (id)level1ParallelTimeNodeGroupAtNodeIndex:(unsigned long long)a0;
- (id)level2ParallelTimeNodeGroupAtNodeIndex:(unsigned long long)a0 level1NodeIndex:(unsigned long long)a1;
- (id)level3BehaviorAtNodeIndex:(unsigned long long)a0 level2NodeIndex:(unsigned long long)a1 level1NodeIndex:(unsigned long long)a2;
- (void)setLevel2ParallelAttribute:(id /* block */)a0;

@end
