@class _PFWeakReference, NSKnownKeysDictionary;

@interface _PFResultArray : NSArray {
    int _cd_rc;
    unsigned int _count;
    unsigned int _resultType;
    struct { unsigned int x0; double x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 28; } x7; int x8; void **x9; unsigned int *x10; void *x11; void *x12; } *_resultSet;
    _PFWeakReference *_weakRequestStore;
    NSKnownKeysDictionary *_metadata;
}

+ (void)initialize;
+ (Class)classForKeyedUnarchiver;
+ (BOOL)accessInstanceVariablesDirectly;

- (unsigned long long)indexOfObjectIdenticalTo:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (void)getObjects:(id *)a0;
- (void)dealloc;
- (id)initWithObjects:(struct { unsigned int x0; double x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned int x4 : 28; } x7; int x8; void **x9; unsigned int *x10; void *x11; void *x12; } *)a0 count:(unsigned int)a1 store:(id)a2 metadata:(id)a3;
- (unsigned long long)retainCount;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)indexOfObject:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (unsigned long long)count;
- (unsigned long long)indexOfObject:(id)a0;
- (unsigned long long)indexOfObjectIdenticalTo:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (Class)classForCoder;
- (id)objectAtIndex:(unsigned long long)a0;

@end
