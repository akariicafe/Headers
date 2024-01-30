@class MKLocalPointsOfInterestRequest, MKLocalSearchRequest;
@protocol MKMapServiceSpatialPlaceLookupTicket, MKMapServiceTicket;

@interface MKLocalSearch : NSObject {
    MKLocalSearchRequest *_request;
    id<MKMapServiceTicket> _ticket;
    MKLocalPointsOfInterestRequest *_pointsOfInterestRequest;
    id<MKMapServiceSpatialPlaceLookupTicket> _spatialPlaceLookupTicket;
}

@property (readonly, nonatomic, getter=isSearching) BOOL searching;

- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_handleMapItems:(id)a0 boundingRegion:(id)a1 error:(id)a2 withCompletionHandler:(id /* block */)a3 queue:(id)a4;
- (void)_startWithCompletionHandler:(id /* block */)a0 queue:(id)a1;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)_startPointsOfInterestFetchWithCompletionHandler:(id /* block */)a0 queue:(id)a1;
- (id)initWithPointsOfInterestRequest:(id)a0;
- (void)_phoneOnlyStartWithCompletionHandler:(id /* block */)a0 queue:(id)a1;
- (void)cancel;

@end
