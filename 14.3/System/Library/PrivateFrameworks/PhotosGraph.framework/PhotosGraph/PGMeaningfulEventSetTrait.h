@class NSSet;

@interface PGMeaningfulEventSetTrait : PGMeaningfulEventTrait

@property (readonly, nonatomic) NSSet *nodes;
@property (readonly, nonatomic) NSSet *negativeNodes;
@property (copy, nonatomic) id /* block */ additionalMatchingBlock;

- (void).cxx_destruct;
- (id)initWithNodes:(id)a0;
- (id)initWithNodes:(id)a0 negativeNodes:(id)a1;
- (BOOL)isActive;
- (id)debugDescriptionWithMomentNode:(id)a0;

@end
