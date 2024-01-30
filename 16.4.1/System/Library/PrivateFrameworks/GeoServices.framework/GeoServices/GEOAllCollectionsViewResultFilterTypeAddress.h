@class NSString, GEOPDAllCollectionsViewResultFilterTypeAddress, GEOMapItemIdentifier, GEOPDEntity;

@interface GEOAllCollectionsViewResultFilterTypeAddress : NSObject {
    GEOPDAllCollectionsViewResultFilterTypeAddress *_filterAddressIdentifier;
    GEOPDEntity *_placeEntity;
}

@property (readonly, nonatomic) GEOMapItemIdentifier *filterAddressIdentifier;
@property (readonly, nonatomic) NSString *displayString;
@property (readonly, nonatomic) GEOPDAllCollectionsViewResultFilterTypeAddress *addressIdentifier;

- (void).cxx_destruct;
- (id)initWithFilterAddressIdentifier:(id)a0 withPlaces:(id)a1;

@end
