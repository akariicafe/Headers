@interface TSWPRangeArray : NSObject <NSCopying> {
    void *_rangeVectorOpaque;
}

@property (readonly, nonatomic) unsigned long long rangeCount;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) unsigned long long start;
@property (readonly, nonatomic) unsigned long long finish;

- (id)initWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)enumerateRangesUsingBlock:(id /* block */)a0;
- (void)addRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)description;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeAtIndex:(unsigned long long)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)removeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithRangeVector:(const void *)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; } *)rangeReferenceAtIndex:(unsigned long long)a0;
- (void)enumerateRangesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;

@end
