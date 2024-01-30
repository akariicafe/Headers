@class NSError, MKMapItem;
@protocol MKLocationManagerOperation, MKMapServiceTicket;

@interface MUNearestStationProvider : NSObject {
    id<MKLocationManagerOperation> _locationOperation;
    id<MKMapServiceTicket> _nearestStationTicket;
}

@property (readonly, nonatomic) unsigned long long lastRequestedNearestID;
@property (readonly, nonatomic) MKMapItem *nearestStation;
@property (readonly, nonatomic) NSError *nearestStationError;

- (void)cancel;
- (void).cxx_destruct;
- (void)fetchStationForLineItemIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)resetNearestStation;

@end
