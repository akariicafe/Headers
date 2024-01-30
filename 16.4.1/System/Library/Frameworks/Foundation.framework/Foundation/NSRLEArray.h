@interface NSRLEArray : NSObject <NSCopying, NSMutableCopying> {
    struct _NSRefCountedRunArray { struct os_unfair_lock_s { unsigned int x0; } x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; struct _NSRunArrayItem { unsigned long long x0; id x1; } x7[0]; } *theList;
}

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 runIndex:(unsigned long long *)a2;
- (void)_makeNewListFrom:(struct _NSRefCountedRunArray { struct os_unfair_lock_s { unsigned int x0; } x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; struct _NSRunArrayItem { unsigned long long x0; id x1; } x7[0]; } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)objectAtRunIndex:(unsigned long long)a0 length:(unsigned long long *)a1;
- (void)dealloc;
- (id)init;
- (id)initWithRefCountedRunArray:(struct _NSRefCountedRunArray { struct os_unfair_lock_s { unsigned int x0; } x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; struct _NSRunArrayItem { unsigned long long x0; id x1; } x7[0]; } *)a0;
- (id)description;
- (id)objectAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;

@end
