@class NSString, WFWorkflow, CLLocationManager;

@interface WFLocationAccessResource : WFAccessResource <CLLocationManagerDelegate> {
    WFWorkflow *_workflow;
}

@property (retain, nonatomic) CLLocationManager *locationManager;
@property (copy, nonatomic) id /* block */ makeAvailableCompletionHandler;
@property (nonatomic) int authorizationStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSystemResource;

- (id)icon;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (unsigned long long)status;
- (void).cxx_destruct;
- (id)name;
- (void)setWorkflow:(id)a0;
- (id)workflow;
- (void)finishMakingAvailableWithSuccess:(BOOL)a0 error:(id)a1;
- (void)makeAvailableWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)protectedResourceDescription;

@end
