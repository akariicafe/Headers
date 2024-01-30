@interface CMAltitudeDataInternal : NSObject <NSCopying> {
    float fAltitude;
    float fPressure;
}

- (void)setAltitude:(float)a0 andPressure:(float)a1;
- (id)initWithAltitude:(float)a0 andPressure:(float)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
