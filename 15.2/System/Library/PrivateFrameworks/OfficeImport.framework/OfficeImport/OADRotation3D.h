@interface OADRotation3D : NSObject <NSCopying> {
    float mLatitude;
    float mLongitude;
    float mRevolution;
}

- (float)longitude;
- (float)latitude;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (float)revolution;
- (id)initWithLatitude:(float)a0 longitude:(float)a1 revolution:(float)a2;

@end
