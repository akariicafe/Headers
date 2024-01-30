@class OADRotation3D;

@interface OADCamera : NSObject <NSCopying> {
    OADRotation3D *mRotation;
    int mCameraType;
    float mFieldOfView;
    float mZoom;
}

- (float)zoom;
- (void)setRotation:(id)a0;
- (void)setZoom:(float)a0;
- (float)fieldOfView;
- (int)cameraType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)setFieldOfView:(float)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)rotation;
- (void).cxx_destruct;
- (void)setCameraType:(int)a0;

@end
