@class NSString, CLLocationManager;

@interface MapsSuggestionsMapsLocationAllowedTriggeringToggle : MapsSuggestionsTriggeringToggle <CLLocationManagerDelegate> {
    CLLocationManager *_locationManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isTrue;
- (void)didAddFirstObserver;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didRemoveLastObserver;

@end
