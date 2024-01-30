@class ARCamera, NSArray, ARGeoTrackingStatus;

@interface ARCoachingFrame : NSObject

@property (retain, nonatomic) ARCamera *camera;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) ARGeoTrackingStatus *geoTrackingStatus;
@property (retain, nonatomic) NSArray *anchors;
@property (nonatomic) long long interfaceOrientation;

- (id)initWithFrame:(id)a0;
- (void).cxx_destruct;

@end
