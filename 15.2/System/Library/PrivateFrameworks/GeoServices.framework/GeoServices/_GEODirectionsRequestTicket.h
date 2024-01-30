@class NSError, NSString, NSArray, GEOComposedRoute, GEODirectionsRequest, NSDictionary, GEODirectionsRequester, NSNumber, _GEODirectionsServiceRequestBuilder;

@interface _GEODirectionsRequestTicket : NSObject <GEODirectionServiceTicket> {
    _GEODirectionsServiceRequestBuilder *_requestBuilder;
    GEODirectionsRequest *_request;
    NSError *_previousError;
    NSDictionary *_userInfo;
}

@property (nonatomic) BOOL isReroute;
@property (retain, nonatomic) GEOComposedRoute *originalRoute;
@property (retain, nonatomic) NSArray *waypoints;
@property (readonly, nonatomic) BOOL active;
@property (readonly, nonatomic) BOOL canceled;
@property (copy, nonatomic) NSNumber *requestPriority;
@property (nonatomic) BOOL isDoom;
@property (weak, nonatomic) GEODirectionsRequester *directionsRequester;
@property (copy, nonatomic) id /* block */ requestCallback;
@property (readonly, nonatomic) NSDictionary *responseUserInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_submitWithHandler:(id /* block */)a0 auditToken:(id)a1 networkActivity:(id /* block */)a2;
- (id)initWithRequestBuilder:(id)a0 directionsRequester:(id)a1;
- (void).cxx_destruct;
- (void)submitWithHandler:(id /* block */)a0 auditToken:(id)a1 networkActivity:(id /* block */)a2;
- (void)cancel;

@end
