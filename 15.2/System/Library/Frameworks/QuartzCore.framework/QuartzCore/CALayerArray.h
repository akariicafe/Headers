@class count;

@interface CALayerArray : NSArray {
    struct _CALayerArrayIvars { count **layers; unsigned long long x0; unsigned long long capacity; unsigned long long mutations; BOOL retained; } _ivars;
}

- (id)initWithLayers:(id *)a0 count:(unsigned long long)a1 retain:(BOOL)a2;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)getObjects:(id *)a0;
- (void)dealloc;

@end
