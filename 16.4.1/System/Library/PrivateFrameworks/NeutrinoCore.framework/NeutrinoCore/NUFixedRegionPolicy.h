@class NSString, NURegion;

@interface NUFixedRegionPolicy : NSObject <NURegionPolicy>

@property struct { long long numerator; long long denominator; } scale;
@property long long roundingPolicy;
@property (readonly) NURegion *region;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithRegion:(id)a0;
- (id)regionForGeometry:(id)a0;

@end
