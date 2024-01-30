@interface GeohashCodec : NSObject

+ (id)encodeCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 withPrecision:(long long)a1;
+ (void)decodeExactly:(id)a0 intoInterimState:(id)a1;
+ (void)decodeGeohash:(id)a0 intoCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; } *)a1;

@end
