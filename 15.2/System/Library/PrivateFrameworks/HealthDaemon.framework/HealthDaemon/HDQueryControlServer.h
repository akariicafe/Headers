@class NSString, NSMutableDictionary, HDProfile, HDHealthStoreServer, NSObject, HDHealthStoreClient;
@protocol OS_dispatch_queue;

@interface HDQueryControlServer : NSObject <HDQueryServerDelegate, HDTaskServerEndpointDelegate> {
    NSMutableDictionary *_queryServersByUUID;
    NSMutableDictionary *_queryServerEndpointsByUUID;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HDHealthStoreServer *_server;
    HDHealthStoreClient *_client;
    HDProfile *_profile;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)queryServer:(id)a0 shouldStartWithCompletion:(id /* block */)a1;
- (id)initWithParentServer:(id)a0 connectionQueue:(id)a1;
- (id)createQueryServerEndpointForIdentifier:(id)a0 queryUUID:(id)a1 configuration:(id)a2 forceReactivation:(BOOL)a3 error:(id *)a4;
- (void)queryServer:(id)a0 requestsAuthorizationWithContext:(id)a1 completion:(id /* block */)a2;
- (void)taskServerDidInvalidate:(id)a0;
- (void)queryServerDidFinish:(id)a0;
- (BOOL)hasActiveQueries;
- (void).cxx_destruct;
- (void)invalidate;
- (void)taskServerDidFailToInitializeForUUID:(id)a0;
- (void)taskServerDidFinishInitialization:(id)a0;

@end
