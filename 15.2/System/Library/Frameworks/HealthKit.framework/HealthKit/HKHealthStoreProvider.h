@class NSString;
@protocol HKHealthStoreProviderProxyProvider;

@interface HKHealthStoreProvider : NSObject <_HKXPCExportable> {
    id<HKHealthStoreProviderProxyProvider> _proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (id)initWithHealthStore:(id)a0;
- (void)connectionInvalidated;
- (void)_fetchProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (id)remoteInterface;
- (void).cxx_destruct;
- (id)init;
- (id)initWithProxyProvider:(id)a0;
- (id)exportedInterface;
- (void)fetchStoreForIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)fetchAvailableIdentifiersWithCompletion:(id /* block */)a0;
- (void)requestAuthorizationToNewStoreWithCompletion:(id /* block */)a0;
- (void)requestAuthorizationToNewStoreToShareTypes:(id)a0 readTypes:(id)a1 completion:(id /* block */)a2;

@end
