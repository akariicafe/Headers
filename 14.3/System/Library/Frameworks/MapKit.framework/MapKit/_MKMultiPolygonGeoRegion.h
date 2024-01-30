@class NSArray, NSString;

@interface _MKMultiPolygonGeoRegion : NSObject <MKGeoJSONCoverageRegion>

@property (retain, nonatomic) NSArray *polygons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContentsOfFile:(id)a0 error:(id *)a1;
- (BOOL)coordinateLiesInRegion:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (BOOL)_loadWithRootJSONObject:(id)a0 error:(id *)a1;
- (BOOL)_loadWithJSONObject:(id)a0 error:(id *)a1;
- (id)initWithJSONObject:(id)a0 error:(id *)a1;

@end
