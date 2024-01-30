@class NSArray, NSIndexPath, VNContoursObservation;

@interface VNContour : NSObject <NSCopying, VNRequestRevisionProviding> {
    VNContoursObservation *_observation;
    struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > { void *__begin_; void *__end_; struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > { void *__value_; } __end_cap_; } _contourPoints;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pathLock;
    struct CGPath { } *_normalizedPath;
}

@property (readonly) unsigned long long topLevelIndex;
@property (readonly) NSIndexPath *indexPath;
@property (readonly) long long childContourCount;
@property (readonly) NSArray *childContours;
@property (readonly) long long pointCount;
@property (readonly) const void *normalizedPoints;
@property (readonly) const struct CGPath { } *normalizedPath;
@property (readonly) float aspectRatio;
@property (readonly, nonatomic) unsigned long long requestRevision;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithObservation:(id)a0 topLevelIndex:(unsigned long long)a1 indexPath:(id)a2 aspectRatio:(float)a3;
- (id)initWithPoints:(const struct vector<float __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > { struct __compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::allocator<float __attribute__((ext_vector_type(2)))> > { void *x0; } **x0; } *)a0 topLevelIndex:(unsigned long long)a1 indexPath:(id)a2 aspectRatio:(float)a3;
- (id)childContourAtIndex:(unsigned long long)a0 error:(id *)a1;
- (const void *)createNormalizedPointsCorrectedForAspectRatio;
- (id)polygonApproximationWithEpsilon:(float)a0 error:(id *)a1;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;

@end
