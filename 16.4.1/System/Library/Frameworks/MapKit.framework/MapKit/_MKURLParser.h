@class NSString, NSArray, GEOMuninViewState, MKMapCamera, GEOMapURLParser, GEOURLExtraStorage, GEOUserSessionEntity, GEOURLCollectionStorage;

@interface _MKURLParser : NSObject {
    GEOMapURLParser *parser;
}

@property (readonly, nonatomic) unsigned long long mapType;
@property (readonly, nonatomic) unsigned long long transportType;
@property (readonly, nonatomic) BOOL trackingModeSpecified;
@property (readonly, nonatomic) long long trackingMode;
@property (readonly, nonatomic) BOOL exactPositionSpecified;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } centerCoordinate;
@property (readonly, nonatomic) struct { double x0; double x1; } span;
@property (readonly, nonatomic) float zoomLevel;
@property (readonly, nonatomic) NSString *addressString;
@property (readonly, nonatomic) NSString *directionsSourceAddressString;
@property (readonly, nonatomic) NSArray *directionsDestinationAddressStrings;
@property (readonly, nonatomic) NSString *directionsDestinationAddressString;
@property (readonly, nonatomic) NSString *searchQuery;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } searchCoordinate;
@property (readonly, nonatomic) struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; } searchRegion;
@property (readonly, nonatomic) int searchProviderID;
@property (readonly, nonatomic) unsigned long long searchUID;
@property (readonly, nonatomic) NSString *contentProvider;
@property (readonly, nonatomic) NSString *contentProviderID;
@property (readonly, nonatomic) NSString *abRecordID;
@property (readonly, nonatomic) NSString *abAddressID;
@property (readonly, nonatomic) NSString *cnContactIdentifier;
@property (readonly, nonatomic) NSString *cnAddressIdentifier;
@property (readonly, nonatomic) GEOUserSessionEntity *userSessionEntity;
@property (readonly, nonatomic) double altitude;
@property (readonly, nonatomic) double rotation;
@property (readonly, nonatomic) double tilt;
@property (readonly, nonatomic) double roll;
@property (readonly, nonatomic) MKMapCamera *mapCamera;
@property (readonly, nonatomic) unsigned long long lineMUID;
@property (readonly, copy, nonatomic) NSString *lineName;
@property (readonly, nonatomic) long long favoritesType;
@property (readonly, nonatomic) BOOL tester;
@property (readonly, nonatomic) GEOURLCollectionStorage *collectionStorage;
@property (readonly, nonatomic) GEOURLExtraStorage *extraStorage;
@property (readonly, nonatomic) GEOMuninViewState *muninViewState;
@property (readonly, nonatomic) BOOL showCarDestinations;
@property (readonly, nonatomic) unsigned long long curatedCollectionMUID;
@property (readonly, nonatomic) unsigned long long publisherMUID;
@property (readonly, nonatomic) BOOL showAllCuratedCollections;

+ (BOOL)isValidMapURL:(id)a0;
+ (BOOL)isAppleMapsGuidesURL:(id)a0;
+ (id)transformMapsURLIfNecessary:(id)a0;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)parseIncludingCustomParameters:(BOOL)a0;

@end
