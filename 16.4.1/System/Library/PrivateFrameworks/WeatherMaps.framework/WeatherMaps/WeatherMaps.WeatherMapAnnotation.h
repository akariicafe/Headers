@class NSString;

@interface WeatherMaps.WeatherMapAnnotation : NSObject <MKAnnotation> {
    void /* unknown type, empty encoding */ annotatedLocation;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;

- (id)init;
- (void).cxx_destruct;

@end
