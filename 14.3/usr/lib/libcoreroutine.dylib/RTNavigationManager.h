@class GEONavigationListener, NSString, GEONavigationRouteSummary, RTAuthorizationManager;

@interface RTNavigationManager : RTNotifier <GEONavigationListenerDelegate>

@property (retain, nonatomic) GEONavigationListener *navigationListener;
@property (nonatomic) BOOL monitorRouteSummary;
@property (retain, nonatomic) GEONavigationRouteSummary *routeSummary;
@property (retain, nonatomic) RTAuthorizationManager *authorizationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setup;
- (void)onAuthorizationNotification:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)navigationListener:(id)a0 didUpdateRouteSummary:(id)a1;
- (id)initWithAuthorizationManager:(id)a0;

@end
