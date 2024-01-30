@class OADCamera, OADLightRig, OADBackdrop;

@interface OADScene3D : NSObject <NSCopying> {
    OADCamera *mCamera;
    OADLightRig *mLightRig;
    OADBackdrop *mBackdrop;
}

+ (id)nullScene3D;

- (void)setBackdrop:(id)a0;
- (id)camera;
- (id)backdrop;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setCamera:(id)a0;
- (unsigned long long)hash;
- (void)setLightRig:(id)a0;
- (id)lightRig;

@end
