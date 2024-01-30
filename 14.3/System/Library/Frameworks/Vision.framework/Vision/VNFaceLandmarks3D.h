@class VNFaceLandmarkRegion3D;

@interface VNFaceLandmarks3D : VNFaceLandmarks {
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
}

@property (readonly) VNFaceLandmarkRegion3D *allPoints;
@property (readonly) VNFaceLandmarkRegion3D *faceContour;
@property (readonly) VNFaceLandmarkRegion3D *leftEye;
@property (readonly) VNFaceLandmarkRegion3D *rightEye;
@property (readonly) VNFaceLandmarkRegion3D *leftEyebrow;
@property (readonly) VNFaceLandmarkRegion3D *rightEyebrow;
@property (readonly) VNFaceLandmarkRegion3D *nose;
@property (readonly) VNFaceLandmarkRegion3D *noseCrest;
@property (readonly) VNFaceLandmarkRegion3D *medianLine;
@property (readonly) VNFaceLandmarkRegion3D *outerLips;
@property (readonly) VNFaceLandmarkRegion3D *innerLips;

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)landmarkPointSizeInBytes;

- (void)_initLocks;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void *)_createPointArray:(const int *)a0 count:(unsigned long long)a1;
- (id)initWithRequestRevision:(unsigned long long)a0 pointsData:(id)a1 pointCount:(unsigned long long)a2 userFacingBBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 alignedBBox:(struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x0; float x1; } x0; struct _Geometry2D_size2D_ { float x0; float x1; } x1; })a4 landmarkScore:(float)a5;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
