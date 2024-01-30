@interface OADRotation3D : NSObject <NSCopying> {
    float mLatitude;
    float mLongitude;
    float mRevolution;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)latitude;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (float)longitude;
- (float)revolution;
- (id)initWithLatitude:(float)a0 longitude:(float)a1 revolution:(float)a2;

@end
