@class NSString, NSMutableDictionary, RPCompanionLinkClient, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, HMDRapportMessagingClientFactory;

@interface HMDRapportMessaging : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_workQueue;
    id<HMDRapportMessagingClientFactory> _clientFactory;
    RPCompanionLinkClient *_discoveryClient;
    id /* block */ _requestHandler;
    NSMutableArray *_requestQueue;
    NSMutableDictionary *_deviceClients;
}

@property (readonly) NSString *currentDeviceIDSIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)configureDiscoveryClient;
- (id)initWithClientFactory:(id)a0;
- (void)registerRequestHandler:(id /* block */)a0;
- (void)sendRequest:(id)a0 destinationID:(id)a1 options:(id)a2 responseHandler:(id /* block */)a3;
- (void)_configureDiscoveryClient;
- (void)_handleRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (void)_queueRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (void)_completeQueuedRequests;
- (id)_clientForIDSIdentifier:(id)a0;
- (id)_deviceForIDSIdentifier:(id)a0;
- (id)_createRapportClientForDevice:(id)a0;
- (void)_invalidateDestinationDevice:(id)a0;

@end
