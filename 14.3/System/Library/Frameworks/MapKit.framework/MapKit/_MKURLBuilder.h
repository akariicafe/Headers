@class GEOMapURLBuilder;

@interface _MKURLBuilder : NSObject {
    GEOMapURLBuilder *_realBuilder;
}

+ (id)URLForInternalBusiness:(id)a0 id:(unsigned long long)a1 provider:(int)a2 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a3 address:(id)a4 extraStorage:(id)a5 useWebPlaceCard:(BOOL)a6 muninViewState:(id)a7;
+ (id)URLForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 address:(id)a1 label:(id)a2 useWebPlaceCard:(BOOL)a3;
+ (id)URLForInternalBusiness:(id)a0 id:(unsigned long long)a1 provider:(int)a2 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a3 address:(id)a4 useWebPlaceCard:(BOOL)a5;
+ (id)URLForInternalBusiness:(id)a0 id:(unsigned long long)a1 provider:(int)a2 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a3 address:(id)a4 useWebPlaceCard:(BOOL)a5 mapItemData:(id)a6;
+ (id)URLForAddress:(id)a0 label:(id)a1;
+ (id)URLForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 label:(id)a1;
+ (id)URLForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 address:(id)a1 label:(id)a2;
+ (id)URLForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 address:(id)a1 label:(id)a2 extraStorage:(id)a3 useWebPlaceCard:(BOOL)a4 muninViewState:(id)a5;
+ (id)URLForSearch:(id)a0;
+ (id)URLForDirectionsFrom:(id)a0 to:(id)a1 transport:(unsigned long long)a2;
+ (id)URLForDirectionsFromHereTo:(id)a0 transport:(unsigned long long)a1;
+ (id)URLForInternalBusiness:(id)a0 id:(unsigned long long)a1 provider:(int)a2 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a3 address:(id)a4 extraStorage:(id)a5 useWebPlaceCard:(BOOL)a6;
+ (id)URLForAddress:(id)a0;
+ (id)URLForSearch:(id)a0 near:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
+ (id)URLForSearch:(id)a0 at:(struct CLLocationCoordinate2D { double x0; double x1; })a1 span:(struct { double x0; double x1; })a2;
+ (id)URLForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
+ (id)URLForSearch:(id)a0 at:(struct CLLocationCoordinate2D { double x0; double x1; })a1 zoomLevel:(double)a2;
+ (id)URLForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 address:(id)a1 label:(id)a2 extraStorage:(id)a3;
+ (id)URLForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 address:(id)a1 label:(id)a2 extraStorage:(id)a3 useWebPlaceCard:(BOOL)a4;
+ (id)URLForDirectionsFrom:(id)a0 to:(id)a1;
+ (id)URLForDirectionsFromHereTo:(id)a0;
+ (id)URLForDirectionsFromHereTo:(id)a0 label:(id)a1 muid:(unsigned long long)a2 provider:(int)a3 transport:(unsigned long long)a4;
+ (id)URLForInternalBusiness:(id)a0 id:(unsigned long long)a1 provider:(int)a2;
+ (id)URLForExternalBusiness:(id)a0 id:(id)a1 ofContentProvider:(id)a2;
+ (id)URLForInternalBusiness:(id)a0 id:(unsigned long long)a1 provider:(int)a2 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a3 address:(id)a4;
+ (id)URLForInternalBusiness:(id)a0 id:(unsigned long long)a1 provider:(int)a2 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a3 address:(id)a4 extraStorage:(id)a5;
+ (id)URLForCollectionStorage:(id)a0;

- (void)setDisplayRegion:(struct { struct CLLocationCoordinate2D { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)build;
- (void).cxx_destruct;
- (void)setTransportType:(unsigned long long)a0;
- (void)setNear:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (void)setMapType:(unsigned long long)a0;
- (void)setStartAddress:(id)a0;
- (id)buildForWeb;
- (id)initForSearch:(id)a0;
- (void)setSearchLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0 span:(struct { double x0; double x1; })a1;
- (void)setSearchLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0 zoomLevel:(double)a1;
- (id)initForAddress:(id)a0 label:(id)a1;
- (id)initForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 address:(id)a1 label:(id)a2;
- (id)initForDirectionsTo:(id)a0;
- (void)setDestinationLabel:(id)a0;
- (void)setDestinationMUID:(unsigned long long)a0 provider:(int)a1;
- (void)setBusinessCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (void)setBusinessAddress:(id)a0;
- (id)initForInternalBusiness:(id)a0 id:(unsigned long long)a1 provider:(int)a2;
- (id)initForExternalBusiness:(id)a0 id:(id)a1 ofContentProvider:(id)a2;
- (void)setContentProvider:(id)a0;
- (id)initForCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 label:(id)a1;

@end
