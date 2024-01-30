@class NSString, HKProxyProvider;

@interface HKEntitlementStore : NSObject <_HKXPCExportable, HKEntitlementStoreClient> {
    HKProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (void)connectionInvalidated;
- (void).cxx_destruct;
- (id)remoteInterface;
- (id)exportedInterface;
- (void)fetchContainerAppExtensionEntitlementsWithCompletion:(id /* block */)a0;
- (id)initWithHealthStore:(id)a0;

@end
