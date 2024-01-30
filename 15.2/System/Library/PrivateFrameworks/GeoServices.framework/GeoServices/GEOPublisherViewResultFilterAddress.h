@class NSString, GEOPDPublisherViewResultFilterAddress, GEOMapItemIdentifier, GEOPDEntity;

@interface GEOPublisherViewResultFilterAddress : NSObject {
    GEOPDPublisherViewResultFilterAddress *_filterAddressIdentifier;
    GEOPDEntity *_placeEntity;
}

@property (readonly, nonatomic) GEOMapItemIdentifier *filterAddressIdentifier;
@property (readonly, nonatomic) NSString *displayString;
@property (readonly, nonatomic) GEOPDPublisherViewResultFilterAddress *addressIdentifier;

- (id)initWithFilterAddressIdentifier:(id)a0 withPlaces:(id)a1;
- (void).cxx_destruct;

@end
