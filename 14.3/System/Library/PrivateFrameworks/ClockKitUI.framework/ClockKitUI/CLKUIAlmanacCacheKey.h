@interface CLKUIAlmanacCacheKey : NSObject

@property (readonly, nonatomic) long long latitude;
@property (readonly, nonatomic) long long longitude;
@property (readonly, nonatomic) long long altitude;
@property (readonly, nonatomic) long long time;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithLocation:(struct { double x0; double x1; })a0 altitude:(double)a1 time:(double)a2;
- (BOOL)matchesLocation:(struct { double x0; double x1; })a0 altitude:(double)a1;

@end
