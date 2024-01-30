@class mutationsPtr;
@protocol NSFastEnumeration;

@interface __NSFastEnumerationEnumerator : NSEnumerator {
    id<NSFastEnumeration> _obj;
    id _origObj;
    unsigned long long _index;
    unsigned long long _count;
    unsigned long long _mut;
    id _objects[16];
    struct { unsigned long long state; mutationsPtr **itemsPtr; unsigned long long *x0; unsigned long long extra[5]; } _state;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)initWithObject:(id)a0;
- (void)dealloc;
- (id)nextObject;

@end
