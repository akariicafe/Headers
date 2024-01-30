@class GEONavigationListener, NSString, GEONavigationRouteSummary, RTAuthorizationManager;

@interface RTNavigationManager : RTService <GEONavigationListenerDelegate>

@property (retain, nonatomic) GEONavigationListener *navigationListener;
@property (nonatomic) BOOL monitorRouteSummary;
@property (retain, nonatomic) GEONavigationRouteSummary *routeSummary;
@property (retain, nonatomic) RTAuthorizationManager *authorizationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (id)initWithAuthorizationManager:(id)a0;
- (void)setup;
- (void).cxx_destruct;
- (void)onAuthorizationNotification:(id)a0;
- (id)init;
- (void)dealloc;
- (void)navigationListener:(id)a0 didUpdateRouteSummary:(id)a1;

@end
