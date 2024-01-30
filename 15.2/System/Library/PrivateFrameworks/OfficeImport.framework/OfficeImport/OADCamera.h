@class OADRotation3D;

@interface OADCamera : NSObject <NSCopying> {
    OADRotation3D *mRotation;
    int mCameraType;
    float mFieldOfView;
    float mZoom;
}

- (id)rotation;
- (float)fieldOfView;
- (void)setFieldOfView:(float)a0;
- (void)setZoom:(float)a0;
- (void)setRotation:(id)a0;
- (float)zoom;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)cameraType;
- (unsigned long long)hash;
- (void)setCameraType:(int)a0;

@end
