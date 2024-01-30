@class GEOPDRestaurantReservationLink, NSArray, NSMapTable;

@interface GEORestaurantFeaturesLink : NSObject {
    NSMapTable *_attributionMap;
}

@property (retain, nonatomic) GEOPDRestaurantReservationLink *restaurantReservationLink;
@property (readonly, nonatomic) BOOL hasFeatures;
@property (readonly, nonatomic) NSArray *featureProviders;
@property (readonly, nonatomic) NSArray *featureTypes;

- (id)applicationsForVendorID:(id)a0;
- (id)displayNameForVendorID:(id)a0;
- (id)initWithRestaurantReservationLink:(id)a0 attributionMap:(id)a1;
- (unsigned long long)extensionModeForVendorID:(id)a0;
- (void).cxx_destruct;

@end
