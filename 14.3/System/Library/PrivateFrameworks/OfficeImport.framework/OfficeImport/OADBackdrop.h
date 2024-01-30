@class OADPoint3D, OADVector3D;

@interface OADBackdrop : NSObject <NSCopying> {
    OADPoint3D *mAnchor;
    OADVector3D *mNormal;
    OADVector3D *mUp;
}

- (id)anchor;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)up;
- (unsigned long long)hash;
- (id)description;
- (void)setUp:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)setAnchor:(id)a0;
- (id)normal;
- (void)setNormal:(id)a0;

@end
