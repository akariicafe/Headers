@class GEOApplicationAuditToken;
@protocol GEORouteManagerDelegate;

@interface GEORouteManager : NSObject

@property (weak, nonatomic) id<GEORouteManagerDelegate> delegate;
@property (retain, nonatomic) GEOApplicationAuditToken *auditToken;

+ (void)setShouldRequestServerLatencyInfo:(BOOL)a0;

- (void)didReceiveRoutes:(id)a0;
- (id)refineErrorFromServerError:(id)a0 directionsError:(id)a1;
- (void)handleResponse:(id)a0 fromRequest:(id)a1 forTicket:(id)a2;
- (void).cxx_destruct;
- (void)handleError:(id)a0 directionsError:(id)a1 forTicket:(id)a2;
- (void)fetchDirectionsForTicket:(id)a0 networkActivity:(id /* block */)a1 completionHandler:(id /* block */)a2;

@end
