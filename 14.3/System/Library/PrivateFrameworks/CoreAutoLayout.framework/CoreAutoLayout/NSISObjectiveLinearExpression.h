@class NSISEngine;

@interface NSISObjectiveLinearExpression : NSObject {
    NSISEngine *_engine;
    struct { struct { struct **values; int count; unsigned int capacity; } heap; struct *values; unsigned int count; unsigned int tombstones; unsigned int size; unsigned short grow_shift; } _priorityMap;
    struct { struct *values; unsigned short count; unsigned short capacity; unsigned int key; unsigned int heap_position; } _constant;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithEngine:(id)a0;

@end
