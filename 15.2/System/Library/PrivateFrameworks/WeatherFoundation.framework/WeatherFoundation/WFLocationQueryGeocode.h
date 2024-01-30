@class NSString, MKLocalSearch, WFResponse, CLGeocoder, MKLocalSearchCompletion, WFTaskIdentifier;

@interface WFLocationQueryGeocode : NSObject <WFLocationQuery> {
    BOOL _finished;
}

@property (copy) id /* block */ resultHandler;
@property (retain) WFResponse *response;
@property (retain, nonatomic) CLGeocoder *reverseGeocoder;
@property (retain, nonatomic) MKLocalSearch *search;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } searchCoordinate;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } unshiftedCoordinate;
@property (readonly) MKLocalSearchCompletion *searchCompletion;
@property (readonly) NSString *searchString;
@property (retain) WFTaskIdentifier *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)queryWithDictionaryRepresentation:(id)a0 resultHandler:(id /* block */)a1;
+ (id)queryWithSearchCompletion:(id)a0 resultHandler:(id /* block */)a1;
+ (void)invalidateCaches;
+ (id)queryWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 resultHandler:(id /* block */)a1;
+ (id)queryWithSearchString:(id)a0 resultHandler:(id /* block */)a1;

- (void)_startCLGeocoderReverseGeo;
- (id)_mkLocalSearchRequest;
- (void)_handleErrorResponse:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (id)initWithSearchCompletion:(id)a0 resultHandler:(id /* block */)a1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 resultHandler:(id /* block */)a1;
- (void)_startMKLocalSearch;
- (id)_reverseGeocoderLocation;
- (void)cancel;
- (id)initWithSearchString:(id)a0 resultHandler:(id /* block */)a1;
- (void)handleSearchResponseWithLocation:(id)a0;

@end
