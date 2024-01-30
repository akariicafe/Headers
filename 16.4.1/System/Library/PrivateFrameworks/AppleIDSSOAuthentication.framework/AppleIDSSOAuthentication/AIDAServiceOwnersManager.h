@class NSSet, NSArray, NSDictionary, NSString, ACAccountStore;

@interface AIDAServiceOwnersManager : NSObject <AIDAServiceOwnerProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _serviceOwnersLock;
    ACAccountStore *_accountStore;
}

@property (class, readonly, copy, nonatomic) NSSet *serviceOwnerBundles;
@property (class, readonly, copy) NSArray *supportedServices;

@property (copy, nonatomic) NSDictionary *serviceOwners;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAccountStore:(id)a0;
- (id)altDSIDForAccount:(id)a0 service:(id)a1;
- (void)signOutService:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)signInToServices:(id)a0 usingContext:(id)a1 completion:(id /* block */)a2;
- (id)_buildServiceOwnerMapping;
- (id)DSIDForAccount:(id)a0 service:(id)a1;
- (id)accountForService:(id)a0;
- (void)signInService:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (id)nameComponentsForAccount:(id)a0 service:(id)a1;
- (void)signOutOfAllServicesUsingContext:(id)a0 completion:(id /* block */)a1;
- (void)signInToAllServicesInBackgroundUsingContext:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (id)_postCloudSupportedServicesForAltDSID:(id)a0;
- (void)signOutOfServices:(id)a0 usingContext:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)signInToAllServicesInBackground:(BOOL)a0 usingContext:(id)a1 completion:(id /* block */)a2;

@end
