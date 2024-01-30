@class NSArray, NSOrderedSet;

@interface MIOMultiArrayShapeConstraint : NSObject {
    NSOrderedSet *_shapeSet;
}

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSArray *sizeRangeForDimension;
@property (readonly, copy, nonatomic) NSArray *enumeratedShapes;

- (id)initWithSpecification:(const void *)a0;
- (id)initWithSizeRangeForDimension:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithEnumeratedShapes:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
