@interface MKGeoJSONDecoder : NSObject

+ (id)_decodeGeometry:(id)a0 error:(id *)a1;
+ (id)_decodeGeometryCollection:(id)a0 error:(id *)a1;

- (id)init;
- (id)_decodeFeatureCollection:(id)a0 error:(id *)a1;
- (id)geoJSONObjectsWithData:(id)a0 error:(id *)a1;

@end
