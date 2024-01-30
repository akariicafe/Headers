@class IDSService, NSString;
@protocol NNMKSyncServiceTransportDelegate;

@interface NNMKSyncServiceIDSTransport : NSObject <IDSServiceDelegate, NNMKSyncServiceTransport>

@property (retain, nonatomic) IDSService *idsService;
@property (nonatomic) unsigned long long connectivityState;
@property (weak, nonatomic) id<NNMKSyncServiceTransportDelegate> delegate;
@property (retain, nonatomic) NSString *serviceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL forceFailureForAllRequests;
@property (nonatomic) BOOL simulateCloudConnectedOnly;

- (void)service:(id)a0 nearbyDevicesChanged:(id)a1;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void)service:(id)a0 account:(id)a1 incomingResourceAtURL:(id)a2 metadata:(id)a3 fromID:(id)a4 context:(id)a5;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 hasBeenDeliveredWithContext:(id)a3;
- (void)_handleConnectivityChange;
- (id)initWithServiceName:(id)a0 queue:(id)a1 delegate:(id)a2;
- (void)service:(id)a0 devicesChanged:(id)a1;
- (id)sendProtobufData:(id)a0 type:(unsigned long long)a1 priority:(unsigned long long)a2 timeoutCategory:(unsigned long long)a3 allowCloudDelivery:(BOOL)a4;
- (id)sendProtobufData:(id)a0 type:(unsigned long long)a1 priority:(unsigned long long)a2 timeout:(double)a3 allowCloudDelivery:(BOOL)a4;
- (void)service:(id)a0 account:(id)a1 incomingUnhandledProtobuf:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)dealloc;
- (void)serviceSpaceDidBecomeAvailable:(id)a0;
- (void)service:(id)a0 activeAccountsChanged:(id)a1;
- (double)_timeIntervalFromTimeoutCategory:(unsigned long long)a0;
- (id)sendResourceAtURL:(id)a0 metadata:(id)a1 priority:(unsigned long long)a2 timeoutCategory:(unsigned long long)a3;
- (void).cxx_destruct;
- (unsigned long long)_connectivityState;

@end
