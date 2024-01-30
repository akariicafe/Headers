@interface NSIndexSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    struct { unsigned char _isEmpty : 1; unsigned char _hasSingleRange : 1; unsigned char _cacheValid : 1; unsigned int _reservedArrayBinderController : 29; } _indexSetFlags;
    union { struct { struct _NSRange { unsigned long long location; unsigned long long length; } _range; } _singleRange; struct { void *_data; void *_reserved; } _multipleRanges; } _internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long count;
@property (readonly) unsigned long long firstIndex;
@property (readonly) unsigned long long lastIndex;

+ (id)_alloc;
+ (id)indexSetWithIndexesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)indexSet;
+ (id)indexSetWithIndexes:(const unsigned long long *)a0 count:(unsigned long long)a1;
+ (BOOL)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (id)indexSetWithIndex:(unsigned long long)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (unsigned long long)rangeCount;
- (unsigned long long)countOfIndexesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)__forwardEnumerateRanges:(id /* block */)a0;
- (unsigned long long)__getContainmentVector:(out BOOL *)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)indexGreaterThanIndex:(unsigned long long)a0;
- (id)initWithIndex:(unsigned long long)a0;
- (unsigned long long)_indexClosestToIndex:(unsigned long long)a0 equalAllowed:(BOOL)a1 following:(BOOL)a2;
- (void)enumerateRangesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)enumerateIndexesWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)enumerateIndexesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (unsigned long long)_indexOfRangeAfterOrContainingIndex:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIndexesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)_indexOfRangeBeforeOrContainingIndex:(unsigned long long)a0;
- (void)enumerateIndexesUsingBlock:(id /* block */)a0;
- (void)enumerateRangesWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)indexesWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (unsigned long long)indexGreaterThanOrEqualToIndex:(unsigned long long)a0;
- (id)indexesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 options:(unsigned long long)a1 passingTest:(id /* block */)a2;
- (void)_setContentToContentFromIndexSet:(id)a0;
- (unsigned long long)indexInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 options:(unsigned long long)a1 passingTest:(id /* block */)a2;
- (unsigned long long)_indexAtIndex:(unsigned long long)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateRangesUsingBlock:(id /* block */)a0;
- (BOOL)intersectsIndexesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)containsIndexes:(id)a0;
- (id)_numberEnumerator;
- (unsigned long long)indexPassingTest:(id /* block */)a0;
- (id)description;
- (unsigned long long)_indexOfRangeContainingIndex:(unsigned long long)a0;
- (unsigned long long)indexWithOptions:(unsigned long long)a0 passingTest:(id /* block */)a1;
- (id)initWithIndexes:(const unsigned long long *)a0 count:(unsigned long long)a1;
- (BOOL)isEqualToIndexSet:(id)a0;
- (unsigned long long)getIndexes:(unsigned long long *)a0 maxCount:(unsigned long long)a1 inIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (unsigned long long)indexLessThanOrEqualToIndex:(unsigned long long)a0;
- (BOOL)containsIndexesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)indexLessThanIndex:(unsigned long long)a0;
- (id)indexesPassingTest:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeAtIndex:(unsigned long long)a0;
- (id)init;
- (id)replacementObjectForPortCoder:(id)a0;
- (Class)classForCoder;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (BOOL)containsIndex:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIndexSet:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
