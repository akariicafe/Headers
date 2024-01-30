@class NSString, NSArray;

@interface MKMultiPolyline : MKShape <MKGeoJSONObject, MKOverlay>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *polylines;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (readonly, nonatomic) struct { struct { double x; double y; } origin; struct { double width; double height; } size; } boundingMapRect;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_initWithGeoJSONObject:(id)a0 error:(id *)a1;
- (id)initWithPolylines:(id)a0;

@end
