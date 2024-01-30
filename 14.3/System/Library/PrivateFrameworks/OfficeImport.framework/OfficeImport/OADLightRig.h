@class OADRotation3D;

@interface OADLightRig : NSObject <NSCopying> {
    OADRotation3D *mRotation;
    int mType;
    int mDirection;
}

- (id)rotation;
- (void)setDirection:(int)a0;
- (id)init;
- (void).cxx_destruct;
- (int)direction;
- (void)setRotation:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setType:(int)a0;
- (unsigned long long)hash;
- (id)description;
- (int)type;
- (BOOL)isEqual:(id)a0;

@end
