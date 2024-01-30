@class OADRotation3D;

@interface OADLightRig : NSObject <NSCopying> {
    OADRotation3D *mRotation;
    int mType;
    int mDirection;
}

- (void)setDirection:(int)a0;
- (id)rotation;
- (void)setRotation:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)direction;
- (int)type;
- (unsigned long long)hash;
- (void)setType:(int)a0;

@end
