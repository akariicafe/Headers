@class NSString, HKProxyProvider;

@interface HKNotificationStore : NSObject <_HKXPCExportable, HKNotificationStoreClient> {
    HKProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (id)remoteInterface;
- (void)connectionInvalidated;
- (id)initWithHealthStore:(id)a0;
- (id)exportedInterface;
- (void)setBadge:(id)a0 forDomain:(long long)a1 completion:(id /* block */)a2;
- (void)postNotificationWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)postCompanionUserNotificationOfType:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)fetchBadgeForDomain:(long long)a0 completion:(id /* block */)a1;

@end
