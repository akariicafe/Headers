@class NSString, NSArray;

@interface GEOPathMatcherInternalInfo : NSObject

@property (nonatomic) struct GEOPolylineCoordinateRange { struct PolylineCoordinate { unsigned int index; float offset; } start; struct PolylineCoordinate { unsigned int index; float offset; } end; } range;
@property (retain, nonatomic) NSString *base64Path;
@property (retain, nonatomic) NSArray *matchedSegments;

- (id).cxx_construct;
- (void).cxx_destruct;

@end
