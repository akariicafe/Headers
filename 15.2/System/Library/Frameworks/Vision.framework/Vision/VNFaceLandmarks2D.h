@class NSArray, VNFaceLandmarkRegion2D;

@interface VNFaceLandmarks2D : VNFaceLandmarks {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _allPointsLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _faceContourLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _leftEyeLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _rightEyeLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _leftEyebrowLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _rightEyebrowLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _noseLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _noseCrestLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _medianLineLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _outerLipsLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _innerLipsLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _leftPupilLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _rightPupilLock;
}

@property (readonly) unsigned long long constellation;
@property (copy) NSArray *precisionEstimatesPerPoint;
@property (readonly) VNFaceLandmarkRegion2D *allPoints;
@property (readonly) VNFaceLandmarkRegion2D *faceContour;
@property (readonly) VNFaceLandmarkRegion2D *leftEye;
@property (readonly) VNFaceLandmarkRegion2D *rightEye;
@property (readonly) VNFaceLandmarkRegion2D *leftEyebrow;
@property (readonly) VNFaceLandmarkRegion2D *rightEyebrow;
@property (readonly) VNFaceLandmarkRegion2D *nose;
@property (readonly) VNFaceLandmarkRegion2D *noseCrest;
@property (readonly) VNFaceLandmarkRegion2D *medianLine;
@property (readonly) VNFaceLandmarkRegion2D *outerLips;
@property (readonly) VNFaceLandmarkRegion2D *innerLips;
@property (readonly) VNFaceLandmarkRegion2D *leftPupil;
@property (readonly) VNFaceLandmarkRegion2D *rightPupil;

+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;
+ (unsigned long long)landmarkPointSizeInBytes;
+ (id)_createNSArrayFrom:(id)a0 withPointIndices:(const int *)a1 andPointCount:(unsigned long long)a2;

- (void)encodeWithCoder:(id)a0;
- (void)_initLocks;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void *)_createPointArray:(const int *)a0 count:(unsigned long long)a1;
- (id)initWithOriginatingRequestSpecifier:(id)a0 pointsData:(id)a1 pointCount:(unsigned long long)a2 constellation:(unsigned long long)a3 precisionEstimatesPerPoint:(id)a4 userFacingBBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 alignedBBox:(struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x0; float x1; } x0; struct _Geometry2D_size2D_ { float x0; float x1; } x1; })a6 landmarkScore:(float)a7;
- (id)_createFaceLandmarks2DRegionFromPointIndexes:(const int *)a0 andPointCount:(unsigned long long)a1;

@end
