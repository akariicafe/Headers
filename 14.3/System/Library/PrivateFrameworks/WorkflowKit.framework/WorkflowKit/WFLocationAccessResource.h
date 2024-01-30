@class NSString, CLLocationManager;

@interface WFLocationAccessResource : WFAccessResource <CLLocationManagerDelegate>

@property (retain, nonatomic) CLLocationManager *locationManager;
@property (copy, nonatomic) id /* block */ makeAvailableCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSystemResource;

- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (id)icon;
- (id)name;
- (id)initWithDefinition:(id)a0 persistentIdentifier:(id)a1;
- (unsigned long long)globalLevelStatus;
- (id)protectedResourceDescription;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;
- (void)finishMakingAvailableWithSuccess:(BOOL)a0 error:(id)a1;

@end
