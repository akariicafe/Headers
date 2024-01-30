@class OADCamera, OADLightRig, OADBackdrop;

@interface OADScene3D : NSObject <NSCopying> {
    OADCamera *mCamera;
    OADLightRig *mLightRig;
    OADBackdrop *mBackdrop;
}

+ (id)nullScene3D;

- (void)setCamera:(id)a0;
- (void)setBackdrop:(id)a0;
- (id)backdrop;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)camera;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)lightRig;
- (void)setLightRig:(id)a0;

@end
