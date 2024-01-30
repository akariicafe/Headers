@class GEOStorefrontImagery;

@interface GEOStorefrontView : NSObject

@property (readonly, nonatomic) unsigned long long identifier;
@property (readonly, nonatomic) GEOStorefrontImagery *imageryInfo;
@property (readonly, nonatomic) struct GEOOrientedPosition { struct { double x; double y; double z; } position; float yaw; float pitch; float roll; } lookAt;

- (id)initWithStorefrontView:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
