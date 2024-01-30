@class NSString, MKRouteStepPolyline, GEOComposedRouteStep;

@interface MKRouteStep : NSObject

@property (readonly, nonatomic, getter=_geoComposedRouteStep) GEOComposedRouteStep *geoComposedRouteStep;
@property (readonly, nonatomic) NSString *instructions;
@property (readonly, nonatomic) NSString *notice;
@property (readonly, nonatomic) MKRouteStepPolyline *polyline;
@property (readonly, nonatomic) double distance;
@property (readonly, nonatomic) unsigned long long transportType;

- (void).cxx_destruct;
- (id)_initWithGEOComposedRouteStep:(id)a0 instructions:(id)a1 transportType:(unsigned long long)a2 polyline:(id)a3;

@end
