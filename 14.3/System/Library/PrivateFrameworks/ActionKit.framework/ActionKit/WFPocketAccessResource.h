@class PocketAPI, NSString;

@interface WFPocketAccessResource : WFAccessResource <PocketAPIDelegate>

@property (retain, nonatomic) PocketAPI *pocket;
@property (copy, nonatomic) id /* block */ loginHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)logOut;
- (id)username;
- (id)resourceName;
- (unsigned long long)globalLevelStatus;
- (id)associatedAppIdentifier;
- (id)protectedResourceDescription;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;
- (void)refreshAvailabilityWithNotification:(BOOL)a0;
- (BOOL)canLogOut;
- (void)pocketAPILoggedIn:(id)a0;
- (void)pocketAPI:(id)a0 hadLoginError:(id)a1;
- (void)pocketAPI:(id)a0 requestedOpenURL:(id)a1 completionHandler:(id /* block */)a2;
- (id)pocketCallbackScheme;

@end
