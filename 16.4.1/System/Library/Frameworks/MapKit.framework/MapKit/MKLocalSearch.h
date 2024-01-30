@class MKLocalPointsOfInterestRequest, MKLocalSearchRequest;
@protocol MKMapServiceSpatialPlaceLookupTicket, MKMapServiceTicket;

@interface MKLocalSearch : NSObject {
    MKLocalSearchRequest *_request;
    id<MKMapServiceTicket> _ticket;
    MKLocalPointsOfInterestRequest *_pointsOfInterestRequest;
    id<MKMapServiceSpatialPlaceLookupTicket> _spatialPlaceLookupTicket;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    BOOL _searching;
    BOOL _cancelled;
}

@property (readonly, nonatomic, getter=isSearching) BOOL searching;

- (id)initWithRequest:(id)a0;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)_handleMapItems:(id)a0 boundingRegion:(id)a1 error:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)_phoneOnlyStartWithCompletionHandler:(id /* block */)a0 queue:(id)a1;
- (void)_startPointsOfInterestFetchWithCompletionHandler:(id /* block */)a0 queue:(id)a1;
- (void)_startWithCompletionHandler:(id /* block */)a0 queue:(id)a1;
- (id)_ticketForSearchRequest:(id)a0;
- (id)initWithPointsOfInterestRequest:(id)a0;

@end
