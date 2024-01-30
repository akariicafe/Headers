@class OADPoint3D, OADVector3D;

@interface OADBackdrop : NSObject <NSCopying> {
    OADPoint3D *mAnchor;
    OADVector3D *mNormal;
    OADVector3D *mUp;
}

- (id)anchor;
- (id)up;
- (void)setUp:(id)a0;
- (id)normal;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAnchor:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)setNormal:(id)a0;

@end
