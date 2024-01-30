@class NSMutableArray;

@interface GKCompositeBehavior : GKBehavior {
    NSMutableArray *_subBehaviors;
    NSMutableArray *_subBehaviorWeights;
}

@property (readonly) long long behaviorCount;

+ (id)behaviorWithBehaviors:(id)a0;
+ (id)behaviorWithBehaviors:(id)a0 andWeights:(id)a1;

- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)removeBehavior:(id)a0;
- (id)init;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)removeAllBehaviors;
- (void /* unknown type, empty encoding */)getTotalForce:(double)a0 agent:(id)a1;
- (id)initWithBehaviors:(id)a0;
- (id)initWithBehaviors:(id)a0 andWeights:(id)a1;
- (void)setWeight:(float)a0 forBehavior:(id)a1;
- (float)weightForBehavior:(id)a0;

@end
