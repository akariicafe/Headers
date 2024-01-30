@interface NSMutableRLEArray : NSRLEArray

- (void)_setBlockCapacity:(unsigned long long)a0;
- (void)deleteObjectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)insertObject:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withObject:(id)a1 length:(unsigned long long)a2;

@end
