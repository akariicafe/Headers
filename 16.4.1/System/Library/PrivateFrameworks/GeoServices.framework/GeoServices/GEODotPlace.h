@class NSString, GEOMapItemIdentifier, GEOLatLng, GEOStyleAttributes;

@interface GEODotPlace : NSObject

@property (readonly, nonatomic) GEOMapItemIdentifier *identifier;
@property (readonly, nonatomic) GEOLatLng *latLng;
@property (readonly, nonatomic) GEOStyleAttributes *styleAttributes;
@property (readonly, nonatomic) NSString *name;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDotPlace:(id)a0;

@end
