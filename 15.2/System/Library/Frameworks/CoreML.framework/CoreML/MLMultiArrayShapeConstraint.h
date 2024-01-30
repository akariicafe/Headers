@class NSOrderedSet, NSArray;

@interface MLMultiArrayShapeConstraint : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSOrderedSet *shapeSet;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSArray *sizeRangeForDimension;
@property (readonly, nonatomic) NSArray *enumeratedShapes;

- (id)initWithSizeRangeForDimension:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)findAvailableShape:(id)a0;
- (void).cxx_destruct;
- (id)initWithEnumeratedShapes:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initUnspecified;
- (BOOL)isAllowedShape:(id)a0 error:(id *)a1;

@end
