@interface PCWeakPointerValue : NSObject <NSCopying> {
    id _zeroingWeakValue;
    BOOL _hasZeroingWeakReference;
}

@property (readonly, nonatomic) id nonretainedObjectValue;
@property (readonly, nonatomic) id pointerValue;

+ (id)valueWithNonretainedObject:(id)a0;
+ (id)valueWithPointer:(void *)a0;
+ (id)weakPointerValueArrayFromArray:(id)a0;
+ (id)arrayFromWeakPointerValueArray:(id)a0;
+ (id)weakPointerValueSetFromSet:(id)a0;
+ (id)setFromWeakPointerValueSet:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithNonretainedObject:(id)a0;
- (id)initWithPointer:(void *)a0;

@end
