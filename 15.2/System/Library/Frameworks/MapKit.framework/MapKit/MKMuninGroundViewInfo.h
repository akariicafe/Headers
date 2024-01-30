@class GEOLocationInfo;

@interface MKMuninGroundViewInfo : NSObject

@property (readonly, nonatomic) double startHeading;
@property (readonly, nonatomic) double endHeading;
@property (readonly, nonatomic) GEOLocationInfo *locationInfo;

- (BOOL)isHeadingInRange:(double)a0;
- (id)initWithStartHeading:(double)a0 endHeading:(double)a1 localityName:(id)a2 locationName:(id)a3 secondaryLocationName:(id)a4;
- (void).cxx_destruct;

@end
