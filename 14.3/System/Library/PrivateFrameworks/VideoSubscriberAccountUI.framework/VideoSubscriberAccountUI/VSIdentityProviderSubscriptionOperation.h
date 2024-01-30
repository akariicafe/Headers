@class NSOperationQueue, VSIdentityProvider, NSArray;

@interface VSIdentityProviderSubscriptionOperation : VSAsyncOperation

@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) VSIdentityProvider *identityProvider;
@property (copy, nonatomic) NSArray *subscriptionsToAdd;
@property (copy, nonatomic) NSArray *subscriptionsToRemoveByBundleID;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)_authorizedBundleIdsFromAppDescriptions:(id)a0;
- (void)_removeSubscriptionsForBundleIdentifiers:(id)a0 withAuthorizedBundleIdentifiers:(id)a1;
- (void)_registerSubscriptions:(id)a0 withAuthorizedBundleIdentifiers:(id)a1;

@end
