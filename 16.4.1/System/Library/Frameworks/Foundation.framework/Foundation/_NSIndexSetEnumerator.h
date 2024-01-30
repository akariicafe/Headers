@class NSIndexSet;

@interface _NSIndexSetEnumerator : NSEnumerator {
    NSIndexSet *_indexSet;
    unsigned long long _index;
}

- (id)nextObject;
- (id)initWithIndexSet:(id)a0;
- (void)dealloc;

@end
