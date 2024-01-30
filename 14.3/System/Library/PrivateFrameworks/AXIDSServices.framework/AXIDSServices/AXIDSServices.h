@class NSArray, AXUIClient, NSString, NSHashTable;

@interface AXIDSServices : NSObject <AXUIClientDelegate> {
    NSHashTable *_clients;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clientsLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectedDevicesLock;
}

@property (readonly, nonatomic) AXUIClient *idsServerClient;
@property (retain, nonatomic) NSArray *cachedConnectedDevices;
@property (readonly, nonatomic) NSArray *connectedDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)userInterfaceClient:(id)a0 accessQueueForProcessingMessageWithIdentifier:(unsigned long long)a1;
- (id)userInterfaceClient:(id)a0 processMessageFromServer:(id)a1 withIdentifier:(unsigned long long)a2 error:(id *)a3;
- (id)_init;
- (id)publishData:(id)a0 requestingResponse:(BOOL)a1;
- (id)publishMessage:(id)a0 requestingResponse:(BOOL)a1;
- (id)publishResourceAtURL:(id)a0 requestingResponse:(BOOL)a1;
- (id)publishData:(id)a0 priority:(unsigned long long)a1 requestingResponse:(BOOL)a2;
- (id)publishMessage:(id)a0 priority:(unsigned long long)a1 requestingResponse:(BOOL)a2;
- (id)publishResourceAtURL:(id)a0 priority:(unsigned long long)a1 requestingResponse:(BOOL)a2;
- (id)sendPublishMessageToServer:(id)a0;
- (void)_handleIncomingDataWithMessage:(id)a0;
- (void)_handleConnectedDevicesChanged:(id)a0;
- (void)_performBlockOnClients:(id /* block */)a0;
- (void)registerForIncomingData:(id)a0;
- (void)deregisterForIncomingData:(id)a0;
- (id)publishData:(id)a0;
- (id)publishMessage:(id)a0;
- (id)publishResourceAtURL:(id)a0;

@end
