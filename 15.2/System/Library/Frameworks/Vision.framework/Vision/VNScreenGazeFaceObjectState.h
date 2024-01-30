@class NSUUID, VNFaceObservation;

@interface VNScreenGazeFaceObjectState : NSObject {
    VNFaceObservation *_faceObservation;
    unsigned long long _imageWidth;
    unsigned long long _imageHeight;
    unsigned int _frameIndex;
    NSUUID *_uuid;
    struct _Geometry2D_point2D_ { float x; float y; } _leftPupil;
    struct _Geometry2D_point2D_ { float x; float y; } _rightPupil;
    void *_screenGazeState;
    struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x; float y; } origin; struct _Geometry2D_size2D_ { float height; float width; } size; } _unalignedFaceBoundingBox;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
