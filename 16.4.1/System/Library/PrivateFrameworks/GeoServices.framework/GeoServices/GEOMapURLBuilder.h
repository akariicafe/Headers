@class GEOURLCollectionStorage, GEOURLExtraStorage, NSMutableDictionary, GEOMuninViewState;

@interface GEOMapURLBuilder : NSObject {
    NSMutableDictionary *_dict;
}

@property (retain, nonatomic) GEOURLCollectionStorage *collectionStorage;
@property (retain, nonatomic) GEOURLExtraStorage *extraStorage;
@property (retain, nonatomic) GEOMuninViewState *muninViewState;

+ (id)URLForCoordinate:(struct { double x0; double x1; })a0 address:(id)a1 label:(id)a2 extraStorage:(id)a3 useWebPlaceCard:(BOOL)a4;
+ (id)URLForCollectionStorage:(id)a0;
+ (id)URLForSearch:(id)a0 at:(struct { double x0; double x1; })a1 span:(struct { double x0; double x1; })a2;
+ (id)URLForAddress:(id)a0 label:(id)a1;
+ (id)URLForDirectionsFrom:(id)a0 toDestinations:(id)a1;
+ (id)URLForDirectionsFrom:(id)a0 toDestinations:(id)a1 transport:(int)a2;
+ (id)URLForAddress:(id)a0;
+ (id)URLForDirectionsFrom:(id)a0 to:(id)a1 transport:(int)a2;
+ (id)URLForDirectionsFrom:(id)a0 to:(id)a1;
+ (id)URLForCoordinate:(struct { double x0; double x1; })a0 label:(id)a1;
+ (id)URLForInternalBusiness:(id)a0 id:(unsigned long long)a1 provider:(int)a2;
+ (id)URLForDirectionsFromHereToDestinations:(id)a0;
+ (id)URLForDirectionsFromHereTo:(id)a0;
+ (id)URLForSearch:(id)a0 at:(struct { double x0; double x1; })a1 zoomLevel:(double)a2;
+ (id)URLForInternalBusiness:(id)a0 id:(unsigned long long)a1 provider:(int)a2 coordinate:(struct { double x0; double x1; })a3 address:(id)a4 extraStorage:(id)a5 useWebPlaceCard:(BOOL)a6 muninViewState:(id)a7;
+ (id)URLForCoordinate:(struct { double x0; double x1; })a0 address:(id)a1 label:(id)a2 extraStorage:(id)a3;
+ (id)URLForCoordinate:(struct { double x0; double x1; })a0;
+ (id)URLForSearch:(id)a0;
+ (id)URLForExternalBusiness:(id)a0 id:(id)a1 ofContentProvider:(id)a2;
+ (id)URLForSearch:(id)a0 near:(struct { double x0; double x1; })a1;
+ (id)URLForInternalBusiness:(id)a0 id:(unsigned long long)a1 provider:(int)a2 coordinate:(struct { double x0; double x1; })a3 address:(id)a4 extraStorage:(id)a5;
+ (id)URLForInternalBusiness:(id)a0 id:(unsigned long long)a1 provider:(int)a2 coordinate:(struct { double x0; double x1; })a3 address:(id)a4;
+ (id)URLForDirectionsFromHereTo:(id)a0 transport:(int)a1;
+ (id)URLForDirectionsFromHereToDestinations:(id)a0 transport:(int)a1;
+ (id)URLForInternalBusiness:(id)a0 id:(unsigned long long)a1 provider:(int)a2 coordinate:(struct { double x0; double x1; })a3 address:(id)a4 extraStorage:(id)a5 useWebPlaceCard:(BOOL)a6;
+ (id)URLForCoordinate:(struct { double x0; double x1; })a0 address:(id)a1 label:(id)a2 extraStorage:(id)a3 useWebPlaceCard:(BOOL)a4 muninViewState:(id)a5;
+ (id)URLForCoordinate:(struct { double x0; double x1; })a0 address:(id)a1 label:(id)a2;
+ (id)URLForDirectionsFromHereTo:(id)a0 label:(id)a1 muid:(unsigned long long)a2 provider:(int)a3 transport:(int)a4;
+ (id)URLForCameraAt:(struct { double x0; double x1; })a0 altitude:(double)a1 rotation:(double)a2 tilt:(double)a3 roll:(double)a4;
+ (id)URLForCameraAt:(struct { double x0; double x1; })a0 zoomLevel:(double)a1 rotation:(double)a2 tilt:(double)a3 roll:(double)a4;
+ (id)URLForCuratedCollection:(unsigned long long)a0 provider:(int)a1;
+ (id)URLForPublisher:(unsigned long long)a0 provider:(int)a1;
+ (id)URLForShowFavoritesType:(long long)a0;
+ (id)URLForTransitLine:(unsigned long long)a0 withName:(id)a1 mapRegion:(id)a2;

- (void)setTransportType:(int)a0;
- (void)setMapRegion:(id)a0;
- (id)build;
- (void)setMapType:(int)a0;
- (void)setDisplayRegion:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_removeParametersAllBut:(id)a0;
- (id)_stringForCoordinate2DPointer:(struct { double x0; double x1; } *)a0;
- (id)_stringForCoordinateSpanPointer:(struct { double x0; double x1; } *)a0;
- (void)addCodable:(id)a0 key:(id)a1 compressedKey:(id)a2;
- (id)buildForCollections;
- (id)buildForWeb;
- (id)buildForWebPlaceCard;
- (id)initForAddress:(id)a0 label:(id)a1;
- (id)initForCameraAt:(struct { double x0; double x1; })a0 altitude:(double)a1 rotation:(double)a2 tilt:(double)a3 roll:(double)a4;
- (id)initForCameraAt:(struct { double x0; double x1; })a0 zoomLevel:(double)a1 rotation:(double)a2 tilt:(double)a3 roll:(double)a4;
- (id)initForCollectionStorage:(id)a0;
- (id)initForCoordinate:(struct { double x0; double x1; })a0 address:(id)a1 label:(id)a2;
- (id)initForCoordinate:(struct { double x0; double x1; })a0 label:(id)a1;
- (id)initForCuratedCollection:(unsigned long long)a0 provider:(int)a1;
- (id)initForDirectionsTo:(id)a0;
- (id)initForDirectionsToAddresses:(id)a0;
- (id)initForExternalBusiness:(id)a0 id:(id)a1 ofContentProvider:(id)a2;
- (id)initForInternalBusiness:(id)a0 id:(unsigned long long)a1 provider:(int)a2;
- (id)initForPublisher:(unsigned long long)a0 provider:(int)a1;
- (id)initForSearch:(id)a0;
- (id)initForShowFavoritesType:(long long)a0;
- (id)initForTransitLine:(unsigned long long)a0 withName:(id)a1 mapRegion:(id)a2;
- (void)setBusinessAddress:(id)a0;
- (void)setBusinessCoordinate:(struct { double x0; double x1; })a0;
- (void)setContentProvider:(id)a0;
- (void)setDestinationLabel:(id)a0;
- (void)setDestinationMUID:(unsigned long long)a0 provider:(int)a1;
- (void)setNear:(struct { double x0; double x1; })a0;
- (void)setSearchLocation:(struct { double x0; double x1; })a0 span:(struct { double x0; double x1; })a1;
- (void)setSearchLocation:(struct { double x0; double x1; })a0 zoomLevel:(double)a1;
- (void)setStartAddress:(id)a0;

@end
