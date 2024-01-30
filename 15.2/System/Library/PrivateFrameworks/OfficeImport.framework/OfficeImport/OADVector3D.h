@interface OADVector3D : NSObject <NSCopying> {
    float mDx;
    float mDy;
    float mDz;
}

- (float)dx;
- (float)dy;
- (float)dz;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithDx:(float)a0 dy:(float)a1 dz:(float)a2;

@end
