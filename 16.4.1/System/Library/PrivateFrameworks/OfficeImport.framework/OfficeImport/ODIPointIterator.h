@interface ODIPointIterator : NSObject

+ (BOOL)addPoint:(id)a0 state:(struct ODIPointIteratorState { int x0; unsigned int x1; int x2; int x3; id x4; } *)a1;
+ (BOOL)isDoneForState:(struct ODIPointIteratorState { int x0; unsigned int x1; int x2; int x3; id x4; } *)a0;
+ (BOOL)isPoint:(id)a0 ofType:(int)a1;
+ (void)processSelfAxisFromPoint:(id)a0 state:(struct ODIPointIteratorState { int x0; unsigned int x1; int x2; int x3; id x4; } *)a1;
+ (id)pointsForSpecification:(id)a0 startingPoint:(id)a1 isLast:(BOOL)a2;
+ (id)processAttributes:(id)a0 startingPoint:(id)a1 isLast:(BOOL)a2;
+ (void)processChildAxisFromPoint:(id)a0 state:(struct ODIPointIteratorState { int x0; unsigned int x1; int x2; int x3; id x4; } *)a1;
+ (void)processFollowingSiblingAxisFromPoint:(id)a0 state:(struct ODIPointIteratorState { int x0; unsigned int x1; int x2; int x3; id x4; } *)a1;

@end
