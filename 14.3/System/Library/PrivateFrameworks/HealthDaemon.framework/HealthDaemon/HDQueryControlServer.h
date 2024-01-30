@class NSString, HDProfile, NSMutableDictionary, HDHealthStoreServer, NSObject, HDHealthStoreClient;
@protocol OS_dispatch_queue;

@interface HDQueryControlServer : NSObject <HDQueryServerDelegate, HDTaskServerEndpointDelegate> {
    NSMutableDictionary *_queryServersByUUID;
    NSMutableDictionary *_queryServerEndpointsByUUID;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, weak, nonatomic) HDHealthStoreServer *server;
@property (readonly, nonatomic) HDHealthStoreClient *client;
@property (readonly, nonatomic) HDProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)taskServerDidInvalidate:(id)a0;
- (BOOL)hasActiveQueries;
- (void).cxx_destruct;
- (void)queryServer:(id)a0 shouldStartWithCompletion:(id /* block */)a1;
- (id)taskServerWithUUID:(id)a0;
- (id)createQueryServerEndpointForIdentifier:(id)a0 queryUUID:(id)a1 configuration:(id)a2 error:(id *)a3;
- (BOOL)_lock_hasActiveQueries;
- (id)initWithParentServer:(id)a0 connectionQueue:(id)a1;
- (void)queryServerDidFinish:(id)a0;
- (void)taskServerDidFinishInitialization:(id)a0;
- (void)_startQueryServer:(id)a0 completion:(id /* block */)a1;
- (void)taskServerDidFailToInitializeForUUID:(id)a0;
- (void)queryServer:(id)a0 requestsAuthorizationForSamples:(id)a1 completion:(id /* block */)a2;
- (void)invalidate;

@end
