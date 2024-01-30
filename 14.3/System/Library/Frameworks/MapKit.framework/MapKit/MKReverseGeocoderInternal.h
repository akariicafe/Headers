@class MKMapItem;
@protocol MKMapServiceTicket, MKReverseGeocoderDelegate;

@interface MKReverseGeocoderInternal : NSObject {
    struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
    id<MKReverseGeocoderDelegate> delegate;
    MKMapItem *mapItem;
    id<MKMapServiceTicket> ticket;
    BOOL querying;
}

- (void).cxx_destruct;

@end
