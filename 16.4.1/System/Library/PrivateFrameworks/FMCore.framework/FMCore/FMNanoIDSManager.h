@class NSString, NSMutableDictionary, NSArray, NSObject, IDSService;
@protocol OS_dispatch_queue;

@interface FMNanoIDSManager : NSObject <IDSServiceDelegate>

@property (retain, nonatomic) IDSService *service;
@property (retain, nonatomic) NSString *serviceId;
@property (nonatomic) unsigned int minVersion;
@property (retain, nonatomic) NSMutableDictionary *outstandingRequests;
@property (retain, nonatomic) NSMutableDictionary *registeredRequestHandlers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *outstandingRequestsModQueue;
@property (readonly, copy, nonatomic) NSArray *devices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_sendMessageWithProtobuf:(id)a0 inResponseToRequest:(id)a1 withPriority:(long long)a2 timeout:(double)a3 bypassingDuet:(BOOL)a4 deviceID:(id)a5 responseHandler:(id /* block */)a6;
- (void)sendMessageWithProtobuf:(id)a0 inResponseToRequest:(id)a1 withPriority:(long long)a2 timeout:(double)a3 bypassingDuet:(BOOL)a4 deviceID:(id)a5 requestAcceptedHandler:(id /* block */)a6 responseHandler:(id /* block */)a7;
- (BOOL)cancelMessageWithId:(id)a0;
- (id)initWithServiceId:(id)a0 minimumVersion:(long long)a1;
- (void)handleRequestsOfType:(unsigned short)a0 withHandler:(id /* block */)a1;
- (BOOL)_checkMinVersionDeviceID:(id)a0;
- (void)service:(id)a0 account:(id)a1 incomingUnhandledProtobuf:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)sendMessageWithProtobuf:(id)a0 inResponseToRequest:(id)a1 withPriority:(long long)a2 timeout:(double)a3 bypassingDuet:(BOOL)a4 requestAcceptedHandler:(id /* block */)a5 responseHandler:(id /* block */)a6;
- (id)_sendProtobuf:(id)a0 priority:(long long)a1 responseIdentifier:(id)a2 expectsResponse:(BOOL)a3 bypassingDuet:(BOOL)a4 deviceID:(id)a5;
- (void)start;
- (void).cxx_destruct;

@end
