@class NSString;

@interface _UIHyperAsymmetricExtender : NSObject <_UIHyperExtender_Internal, _UIHyperExtender, NSSecureCoding, NSCopying> {
    double *__extentBeyondMinimum;
    double *__extentBeyondMaximum;
    double *__temp;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) const double *_extentBeyondMinimum;
@property (readonly, nonatomic) const double *_extentBeyondMaximum;
@property (readonly, nonatomic) unsigned long long _dimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingSelf;

- (id)initWithDimensions:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)_mutateExtentBeyondMinimum:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (void)_extentVector:(double *)a0 forUnconstrainedPoint:(const double *)a1 closestPoint:(const double *)a2;
- (void)_mutateExtentBeyondMaximum:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;

@end
