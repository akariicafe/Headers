@class NSArray;

@interface WFAccountAccessResource : WFAccessResource {
    id _observer;
    id /* block */ _completionHandler;
}

@property (readonly, nonatomic) Class accountClass;
@property (readonly, copy, nonatomic) NSArray *accounts;

- (void).cxx_destruct;
- (void)dealloc;
- (void)logOut;
- (id)username;
- (id)resourceName;
- (id)name;
- (id)initWithDefinition:(id)a0;
- (unsigned long long)globalLevelStatus;
- (id)protectedResourceDescription;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)settingsUIDefinition;
- (BOOL)canLogOut;
- (id)errorReasonForGlobalLevelStatus:(unsigned long long)a0;
- (id)importErrorReasonForGlobalLevelStatus:(unsigned long long)a0;
- (void)makeAvailableAtGlobalLevelWithWebAuthenticationSessionInUserInterface:(id)a0 completionHandler:(id /* block */)a1;

@end
