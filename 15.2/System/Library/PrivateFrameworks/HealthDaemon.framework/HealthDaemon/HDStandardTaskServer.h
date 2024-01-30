@class NSString, NSUUID, HDProfile, HDHealthStoreClient;
@protocol HDTaskServerDelegate;

@interface HDStandardTaskServer : NSObject <HDTaskServer, HKUnitTestingTaskServerInterface>

@property (class, readonly, copy, nonatomic) NSString *taskIdentifier;

@property (readonly, copy, nonatomic) NSUUID *taskUUID;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) HDHealthStoreClient *client;
@property (readonly, weak, nonatomic) id<HDTaskServerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;

- (void)connectionInvalidated;
- (void)remote_unitTesting_createTaskServerNoOpWithCompletion:(id /* block */)a0;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (id)remoteInterface;
- (void).cxx_destruct;
- (id)exportedInterface;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;

@end
