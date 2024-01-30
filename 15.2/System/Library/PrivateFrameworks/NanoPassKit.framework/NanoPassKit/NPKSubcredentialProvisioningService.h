@class NSMutableDictionary, NSString, NSObject, IDSService;
@protocol OS_dispatch_queue;

@interface NPKSubcredentialProvisioningService : NSObject <IDSServiceDelegate>

@property (retain, nonatomic) IDSService *subcredentialService;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *subcredentialProvisioningQueue;
@property (retain, nonatomic) NSMutableDictionary *outstandingRequests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)service:(id)a0 activeAccountsChanged:(id)a1;
- (void)service:(id)a0 devicesChanged:(id)a1;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (id)_sendOptions;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isPairedDeviceConnected;
- (id)sendProtobuf:(id)a0 responseExpected:(BOOL)a1;
- (void)trackOutstandingRequestWithMessageIdentifier:(id)a0 completionHandler:(id)a1 errorHandler:(id /* block */)a2;
- (id)sendProtobuf:(id)a0 responseExpected:(BOOL)a1 extraOptions:(id)a2;
- (void)registerProtobufActionsForService:(id)a0;
- (void)_setUpSubcredentialProvisioningQueue;
- (void)_setUpSubcredentialProvisioningService;
- (id)_sendProtobuf:(id)a0 responseExpected:(BOOL)a1 extraOptions:(id)a2;
- (void)_trackOutstandingRequestWithMessageIdentifier:(id)a0 completionHandler:(id)a1 errorHandler:(id /* block */)a2;

@end
