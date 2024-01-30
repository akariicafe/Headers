@class OADRotation3D;

@interface OADLightRig : NSObject <NSCopying> {
    OADRotation3D *mRotation;
    int mType;
    int mDirection;
}

- (int)direction;
- (void)setDirection:(int)a0;
- (void)setRotation:(id)a0;
- (int)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)setType:(int)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)rotation;
- (void).cxx_destruct;

@end
