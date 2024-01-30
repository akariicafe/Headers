@class NSString, HKProxyProvider;

@interface HKSharedSummaryCloudSyncManager : NSObject <_HKXPCExportable, HKSharedSummaryCloudSyncManagerClientInterface> {
    HKProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serverInterface;
+ (id)taskIdentifier;
+ (id)clientInterface;

- (id)remoteInterface;
- (void)connectionInvalidated;
- (id)initWithHealthStore:(id)a0;
- (id)exportedInterface;
- (void).cxx_destruct;
- (void)fetchAccountInfoWithCompletion:(id /* block */)a0;
- (void)pullWithCompletion:(id /* block */)a0;
- (void)pushWithCompletion:(id /* block */)a0;

@end
