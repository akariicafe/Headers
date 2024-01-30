@class NSString;

@interface _UIHyperrectangle : NSObject <_UIHyperregion_Internal, _UIHyperregion, NSSecureCoding, NSCopying> {
    double *__maximumPoint;
    double *__minimumPoint;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) const double *_minimumPoint;
@property (readonly, nonatomic) const double *_maximumPoint;
@property (readonly, nonatomic) unsigned long long _dimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingSelf;

- (void)_closestPoint:(double *)a0 toPoint:(const double *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithDimensions:(unsigned long long)a0;
- (void)_mutateMaximumPoint:(id /* block */)a0;
- (void)_mutateMinimumPoint:(id /* block */)a0;

@end
