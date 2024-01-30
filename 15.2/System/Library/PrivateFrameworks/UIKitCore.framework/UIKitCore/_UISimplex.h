@class NSArray, NSString;

@interface _UISimplex : NSObject <_UIHyperregion_Internal, NSSecureCoding, NSCopying> {
    double *__points;
    struct { unsigned char metadata : 1; } _clean;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double *_projection;
@property (readonly, nonatomic) unsigned long long _missingNormalCount;
@property (readonly, nonatomic) double *_missingNormals;
@property (readonly, nonatomic) double *_facetNormals;
@property (readonly, nonatomic) double *_facetNormalOffsets;
@property (readonly, nonatomic) double *_incenter;
@property (readonly, nonatomic) NSArray *_facets;
@property (readonly, nonatomic) int _cggetriWorkspaceSize;
@property (readonly, nonatomic) double *_cggetriWorkspace;
@property (readonly, nonatomic) double *_temp;
@property (readonly, nonatomic) unsigned long long _pointCount;
@property (readonly, nonatomic) const double *_points;
@property (readonly, nonatomic) unsigned long long _dimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingSelf;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_closestPoint:(double *)a0 toPoint:(const double *)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_mutatePoints:(id /* block */)a0;
- (id)initWithDimensions:(unsigned long long)a0 pointCount:(unsigned long long)a1;
- (void)dealloc;
- (void)_recomputeMetadata;

@end
