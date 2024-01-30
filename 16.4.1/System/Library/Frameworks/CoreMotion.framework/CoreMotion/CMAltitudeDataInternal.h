@interface CMAltitudeDataInternal : NSObject <NSCopying> {
    float fAltitude;
    float fPressure;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAltitude:(float)a0 andPressure:(float)a1;
- (void)setAltitude:(float)a0 andPressure:(float)a1;

@end
