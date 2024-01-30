@class NSArray, NSMutableDictionary;

@interface VNFaceLandmarkRegion2D : VNFaceLandmarkRegion {
    NSMutableDictionary *_sizedPointsCache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pointsCalculatorLock;
}

@property (readonly) void *points;
@property (readonly) const struct CGPoint { double x0; double x1; } *normalizedPoints;
@property (readonly) NSArray *precisionEstimatesPerPoint;
@property (readonly, nonatomic) long long pointsClassification;

+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (void)_initLocks;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void /* unknown type, empty encoding */)pointAtIndex:(unsigned long long)a0;
- (const struct CGPoint { double x0; double x1; } *)pointsInImageOfSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithOriginatingRequestSpecifier:(id)a0 faceBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 pointCount:(unsigned long long)a2;
- (id)initWithOriginatingRequestSpecifier:(id)a0 faceBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 pointsClassification:(long long)a2 points:(void *)a3 pointCount:(unsigned long long)a4 precisionEstimatesPerPoint:(id)a5;
- (const struct CGPoint { double x0; double x1; } *)normalizedPointsInTopLeftOrigin:(BOOL)a0 orientation:(unsigned int)a1;

@end
