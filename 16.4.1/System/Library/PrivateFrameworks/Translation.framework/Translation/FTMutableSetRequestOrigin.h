@interface FTMutableSetRequestOrigin : FTSetRequestOrigin

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) BOOL enable_geo_location_features;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
