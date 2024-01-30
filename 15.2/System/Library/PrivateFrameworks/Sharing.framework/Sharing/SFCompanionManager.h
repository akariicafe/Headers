@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, SFCompanionServiceManagerProtocol;

@interface SFCompanionManager : NSObject <SFCompanionServiceManagerClient, SFCompanionXPCManagerObserver>

@property (copy) NSString *identifier;
@property (retain) id<SFCompanionServiceManagerProtocol> managerProxy;
@property (copy) NSString *deviceID;
@property (copy) NSString *deviceIP;
@property (copy) NSString *deviceName;
@property (retain) NSMutableDictionary *services;
@property (retain) NSMutableDictionary *streamHandlers;
@property (retain) NSObject<OS_dispatch_queue> *serviceIdentifierQueue;
@property (retain) NSObject<OS_dispatch_semaphore> *managerSemaphore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceManager;

- (id)serviceForIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)xpcManagerDidInvalidate:(id)a0;
- (id)streamDataForIdentifier:(id)a0;
- (void)getStreamsForData:(id)a0 withStreamHandler:(id /* block */)a1;
- (void)supportStreamsWithIdentifier:(id)a0 withStreamHandler:(id /* block */)a1;
- (void)disableStreamSupportForIdentifier:(id)a0;
- (void)streamToService:(id)a0 withFileHandle:(id)a1 acceptReply:(id /* block */)a2;
- (void)dealloc;
- (void)retrieveManagerProxy;
- (void)signalSemaphore;
- (void)streamsFromFileHandle:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)xpcManagerConnectionInterrupted;

@end
