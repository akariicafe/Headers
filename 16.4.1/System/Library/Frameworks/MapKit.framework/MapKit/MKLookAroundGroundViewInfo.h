@class GEOLocationInfo;

@interface MKLookAroundGroundViewInfo : NSObject

@property (readonly, nonatomic) double startHeading;
@property (readonly, nonatomic) double endHeading;
@property (readonly, nonatomic) GEOLocationInfo *locationInfo;

- (void).cxx_destruct;
- (id)initWithStartHeading:(double)a0 endHeading:(double)a1 localityName:(id)a2 locationName:(id)a3 secondaryLocationName:(id)a4;
- (BOOL)isHeadingInRange:(double)a0;

@end
