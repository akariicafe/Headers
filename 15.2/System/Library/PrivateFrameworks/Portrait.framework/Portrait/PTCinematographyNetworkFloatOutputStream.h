@interface PTCinematographyNetworkFloatOutputStream : NSObject

@property (readonly) float *fp;
@property (readonly) unsigned long long count;
@property unsigned long long index;

- (unsigned long long)remainingCount;
- (id)initWithDestination:(float *)a0 count:(unsigned long long)a1;
- (void)writeZerosWithCount:(unsigned long long)a0;
- (void)writeFloat:(float)a0;
- (void)writeOneHot:(unsigned long long)a0 count:(unsigned long long)a1;
- (void)writeFloats:(float *)a0 count:(unsigned long long)a1;

@end
