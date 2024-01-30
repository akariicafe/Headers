@class next;

@interface __CFPrefsWeakObservers : NSObject <NSMutableCopying> {
    struct __cfobservers_t { next *slot; struct __cfobservers_t *x0; } values;
    unsigned long long count;
}

- (unsigned long long)approximateCount;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned char)addObject:(id)a0;
- (unsigned long long)borrowObjects:(id *)a0 count:(unsigned long long)a1;
- (void)dealloc;
- (unsigned char)removeObject:(id)a0;
- (id)debugDescription;

@end
