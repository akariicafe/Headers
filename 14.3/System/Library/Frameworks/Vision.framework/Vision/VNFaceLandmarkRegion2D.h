@class NSArray, NSMutableDictionary;

@interface VNFaceLandmarkRegion2D : VNFaceLandmarkRegion {
    NSMutableDictionary *_sizedPointsCache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pointsCalculatorLock;
}

@property (readonly) void *points;
@property (readonly) NSArray *occlusionFlagsPerPoint;
@property (readonly) const struct CGPoint { double x0; double x1; } *normalizedPoints;
@property (readonly) NSArray *precisionEstimatesPerPoint;

+ (BOOL)supportsSecureCoding;

- (void)_initLocks;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void /* unknown type, empty encoding */)pointAtIndex:(unsigned long long)a0;
- (id)initWithRequestRevision:(unsigned long long)a0 faceBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithRequestRevision:(unsigned long long)a0 faceBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 points:(void *)a2 pointCount:(unsigned long long)a3 precisionEstimatesPerPoint:(id)a4 occlusionFlagsPerPoint:(id)a5;
- (const struct CGPoint { double x0; double x1; } *)pointsInImageOfSize:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
