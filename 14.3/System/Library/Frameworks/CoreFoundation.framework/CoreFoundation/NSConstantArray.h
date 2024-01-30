@interface NSConstantArray : NSArray {
    unsigned long long _count;
    const id *_objects;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)new;

- (id)init;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)mutableCopy;
- (id)autorelease;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (id)copy;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectEnumerator;
- (id)retain;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;

@end
