@class IDSService, NSString, NSObject;
@protocol OS_dispatch_queue, IDSServiceDelegate, DEDClientProtocol;

@interface DEDIDSConnection : NSObject <IDSServiceDelegate, DEDSecureArchiving>

@property (retain) IDSService *service;
@property (retain) IDSService *localService;
@property (retain) NSObject<OS_dispatch_queue> *run_queue;
@property (retain) NSObject<OS_dispatch_queue> *discovery_queue;
@property (retain) id<IDSServiceDelegate> incomingDelegate;
@property (copy) id /* block */ deviceStatusCallback;
@property (weak) id<DEDClientProtocol> remoteSideDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)archivedClasses;
+ (id)packPayload:(id)a0;
+ (id)unpackProtobuf:(id)a0;

- (void).cxx_destruct;
- (void)startBugSessionWithIdentifier:(id)a0 configuration:(id)a1 caller:(id)a2 target:(id)a3;
- (void)setDeviceCallback:(id /* block */)a0;
- (void)discoverDevicesWithCompletion:(id /* block */)a0;
- (void)didStartBugSessionWithInfo:(id)a0 forID:(id)a1;
- (id)initWithConroller:(id)a0;
- (BOOL)sendMessage:(int)a0 withData:(id)a1 forIDSDeviceIDs:(id)a2 isResponse:(BOOL)a3;
- (BOOL)sendMessage:(int)a0 withData:(id)a1 forIDSDeviceIDs:(id)a2 localIDSDeviceIDs:(id)a3 isResponse:(BOOL)a4;
- (BOOL)sendMessage:(int)a0 withData:(id)a1 forDevices:(id)a2 isResponse:(BOOL)a3;
- (BOOL)sendMessage:(int)a0 withData:(id)a1 forIDSDeviceID:(id)a2 isResponse:(BOOL)a3;
- (void)incomingDeviceReceived:(id)a0;

@end
