@interface NSPointerFunctions : NSObject <NSCopying>

@property void /* function */ *hashFunction;
@property void /* function */ *isEqualFunction;
@property void /* function */ *sizeFunction;
@property void /* function */ *descriptionFunction;
@property void /* function */ *relinquishFunction;
@property void /* function */ *acquireFunction;
@property BOOL usesStrongWriteBarrier;
@property BOOL usesWeakReadAndWriteBarriers;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)pointerFunctionsWithOptions:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOptions:(unsigned long long)a0;

@end
