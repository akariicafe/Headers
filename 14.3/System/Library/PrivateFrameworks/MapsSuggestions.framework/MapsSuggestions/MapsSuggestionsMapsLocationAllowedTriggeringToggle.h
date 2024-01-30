@class NSString, CLLocationManager;

@interface MapsSuggestionsMapsLocationAllowedTriggeringToggle : MapsSuggestionsTriggeringToggle <CLLocationManagerDelegate> {
    CLLocationManager *_locationManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didRemoveLastObserver;
- (void)didAddFirstObserver;
- (BOOL)shouldRun;
- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;

@end
