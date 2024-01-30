@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HDSharedSummaryCloudSyncManagerServer : HDStandardTaskServer <HKSharedSummaryCloudSyncManagerServerInterface> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (id)remoteInterface;
- (void)remote_fetchAccountInfoWithCompletion:(id /* block */)a0;
- (void)remote_pushWithCompletion:(id /* block */)a0;
- (void)remote_pullWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)exportedInterface;

@end
