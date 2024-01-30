@class PocketAPI, NSString;

@interface WFPocketAccessResource : WFAccessResource <PocketAPIDelegate>

@property (retain, nonatomic) PocketAPI *pocket;
@property (copy, nonatomic) id /* block */ loginHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)username;
- (unsigned long long)status;
- (void).cxx_destruct;
- (id)resourceName;
- (id)associatedAppIdentifier;
- (BOOL)canLogOut;
- (void)logOut;
- (void)makeAvailableWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)protectedResourceDescription;
- (void)refreshAvailabilityWithNotification:(BOOL)a0;
- (void)pocketAPI:(id)a0 hadLoginError:(id)a1;
- (void)pocketAPI:(id)a0 requestedOpenURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)pocketAPILoggedIn:(id)a0;
- (id)pocketCallbackScheme;

@end
