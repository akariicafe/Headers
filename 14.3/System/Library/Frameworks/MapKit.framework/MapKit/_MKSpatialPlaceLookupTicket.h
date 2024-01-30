@class GEOMapRegion, NSString, NSError;
@protocol GEOMapServiceSpatialPlaceLookupTicket;

@interface _MKSpatialPlaceLookupTicket : NSObject <MKMapServiceSpatialPlaceLookupTicket> {
    id<GEOMapServiceSpatialPlaceLookupTicket> _spatialPlaceLookupTicket;
    NSError *_error;
    GEOMapRegion *_resultBoundingRegion;
}

@property (readonly, nonatomic) GEOMapRegion *boundingRegion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void).cxx_destruct;
- (id)traits;
- (id)initWithTicket:(id)a0;
- (void)submitWithHandler:(id /* block */)a0 queue:(id)a1;

@end
