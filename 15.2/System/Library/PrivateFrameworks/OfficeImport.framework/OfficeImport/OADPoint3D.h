@interface OADPoint3D : NSObject <NSCopying> {
    float mX;
    float mY;
    float mZ;
}

- (float)y;
- (float)x;
- (float)z;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithX:(float)a0 y:(float)a1 z:(float)a2;
- (unsigned long long)hash;

@end
