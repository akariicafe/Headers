@class OADPoint3D, OADVector3D;

@interface OADBackdrop : NSObject <NSCopying> {
    OADPoint3D *mAnchor;
    OADVector3D *mNormal;
    OADVector3D *mUp;
}

- (id)anchor;
- (void)setAnchor:(id)a0;
- (id)normal;
- (id)description;
- (id)up;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setUp:(id)a0;
- (unsigned long long)hash;
- (void)setNormal:(id)a0;

@end
