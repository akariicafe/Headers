@class OADRotation3D;

@interface OADCamera : NSObject <NSCopying> {
    OADRotation3D *mRotation;
    int mCameraType;
    float mFieldOfView;
    float mZoom;
}

- (id)rotation;
- (id)init;
- (void).cxx_destruct;
- (float)zoom;
- (void)setRotation:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setFieldOfView:(float)a0;
- (void)setZoom:(float)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (float)fieldOfView;
- (void)setCameraType:(int)a0;
- (int)cameraType;

@end
