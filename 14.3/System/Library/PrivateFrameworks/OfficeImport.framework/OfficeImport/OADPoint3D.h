@interface OADPoint3D : NSObject <NSCopying> {
    float mX;
    float mY;
    float mZ;
}

- (float)y;
- (float)z;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)x;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithX:(float)a0 y:(float)a1 z:(float)a2;

@end
