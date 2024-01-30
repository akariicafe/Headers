@class NSArray;

@interface WFAccountAccessResource : WFAccessResource {
    id _observer;
    id /* block */ _completionHandler;
}

@property (readonly, nonatomic) Class accountClass;
@property (readonly, copy, nonatomic) NSArray *accounts;

+ (id)userInterfaceProtocol;
+ (id)userInterfaceClasses;

- (BOOL)supportsMultipleAccounts;
- (id)resourceName;
- (unsigned long long)status;
- (id)username;
- (void).cxx_destruct;
- (id)name;
- (void)dealloc;
- (void)logOut;
- (id)initWithDefinition:(id)a0;
- (id)protectedResourceDescription;
- (id)settingsUIDefinition;
- (BOOL)canLogOut;
- (void)makeAvailableWithRemoteInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)errorReasonForStatus:(unsigned long long)a0;
- (id)importErrorReasonForStatus:(unsigned long long)a0;

@end
