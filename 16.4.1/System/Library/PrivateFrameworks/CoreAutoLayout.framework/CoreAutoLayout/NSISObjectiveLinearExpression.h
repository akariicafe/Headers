@class NSISEngine;

@interface NSISObjectiveLinearExpression : NSObject {
    NSISEngine *_engine;
    struct { struct { struct **values; int count; unsigned int capacity; } heap; struct *values; unsigned int count; unsigned int tombstones; unsigned int size; unsigned short grow_shift; } _priorityMap;
    struct { struct *values; unsigned short count; unsigned short capacity; unsigned int key; unsigned int heap_position; } _constant;
}

- (unsigned long long)_variableCount;
- (void)_replaceVar:(struct { unsigned int x0; })a0 withExpression:(struct { unsigned short x0; unsigned int x1; double x2; union { struct { id x0; struct *x1; unsigned long long x2; } x0; struct { unsigned long long x0; } x1; unsigned char x2[48]; } x3; } *)a1 processVarNewToReceiver:(id /* block */)a2 processVarDroppedFromReceiver:(id /* block */)a3;
- (void)dealloc;
- (id)_initWithEngine:(id)a0;
- (void)_addVar:(struct { unsigned int x0; })a0 priority:(double)a1 times:(double)a2;
- (id)init;
- (id)description;
- (void)_removeVar:(struct { unsigned int x0; })a0;
- (BOOL)_restrictedVarWithCoefficientOfLargestNegativeMagnitudeOutVar:(struct { unsigned int x0; } *)a0;

@end
