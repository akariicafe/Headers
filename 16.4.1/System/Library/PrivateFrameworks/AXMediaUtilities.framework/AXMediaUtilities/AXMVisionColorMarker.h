@class NSArray, NSString;

@interface AXMVisionColorMarker : AXMVisionColor

@property (class, readonly, nonatomic) NSArray *allColorMarkers;

@property (retain, nonatomic) NSString *localizedName;

+ (id)closestMarkerToColor:(id)a0 withMaximumThreshold:(double)a1;
+ (id)colorWithHueDegrees:(double)a0 saturation:(double)a1 brightness:(double)a2 localizedName:(id)a3;

- (id)description;
- (void).cxx_destruct;

@end
