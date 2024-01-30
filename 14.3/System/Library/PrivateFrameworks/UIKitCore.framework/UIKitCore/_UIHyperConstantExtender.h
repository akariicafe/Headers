@class NSString;

@interface _UIHyperConstantExtender : NSObject <_UIHyperExtender_Internal, _UIHyperExtender, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, setter=_setMaximumDistance:) double _maximumDistance;
@property (readonly, nonatomic) unsigned long long _dimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingSelf;

- (id)initWithDimensions:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)_extentVector:(double *)a0 forUnconstrainedPoint:(const double *)a1 closestPoint:(const double *)a2;
- (void)encodeWithCoder:(id)a0;

@end
