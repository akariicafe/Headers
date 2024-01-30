@class NSString;

@interface _UIHyperplane : NSObject <_UIHyperregion_Internal, NSSecureCoding, NSCopying> {
    double *__point;
    double *__normal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) const double *_point;
@property (readonly, nonatomic) const double *_normal;
@property (readonly, nonatomic) unsigned long long _dimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingSelf;

- (id)initWithDimensions:(unsigned long long)a0;
- (void)_closestPoint:(double *)a0 toPoint:(const double *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)_mutateNormal:(id /* block */)a0;
- (void)_mutatePoint:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;

@end
