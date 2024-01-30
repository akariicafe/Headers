@class NSPointerFunctions;

@interface NSPointerArray : NSObject <NSFastEnumeration, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSPointerFunctions *pointerFunctions;
@property unsigned long long count;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)pointerArrayWithPointerFunctions:(id)a0;
+ (id)weakObjectsPointerArray;
+ (id)strongObjectsPointerArray;
+ (id)pointerArrayWithStrongObjects;
+ (id)pointerArrayWithWeakObjects;
+ (id)pointerArrayWithOptions:(unsigned long long)a0;

- (id)initWithOptions:(unsigned long long)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)init;
- (void)compact;
- (void)replacePointerAtIndex:(unsigned long long)a0 withPointer:(void *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableArray;
- (id)initWithCoder:(id)a0;
- (void *)pointerAtIndex:(unsigned long long)a0;
- (void)addPointer:(void *)a0;
- (void)removePointerAtIndex:(unsigned long long)a0;
- (id)initWithPointerFunctions:(id)a0;
- (void)insertPointer:(void *)a0 atIndex:(unsigned long long)a1;
- (id)allObjects;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;

@end
