@class NSString, FMXPCSession, FMXPCServiceDescription, NSObject;
@protocol SPAdvertisementCacheXPCProtocol, OS_dispatch_queue;

@interface SPAdvertisementCache : NSObject <SPAdvertisementCaching, SPBeaconPayloadCaching>

@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) id<SPAdvertisementCacheXPCProtocol> proxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)remoteInterface;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)clearCacheWithCompletion:(id /* block */)a0;
- (void)mockingEnabled:(BOOL)a0;
- (void)advertisementsForSearchCriteria:(id)a0 completion:(id /* block */)a1;
- (void)beaconAdvertisementAtFileURL:(id)a0 beaconIdentifier:(id)a1 scanDate:(id)a2 completion:(id /* block */)a3;
- (void)beaconPayloadsForSearchCriteria:(id)a0 completion:(id /* block */)a1;
- (void)markAdvertisementsProcessed:(id)a0 completion:(id /* block */)a1;
- (void)markBeaconPayloadsProcessed:(id)a0 completion:(id /* block */)a1;
- (void)markRecordsProcessed:(id)a0 completion:(id /* block */)a1;
- (void)saveAdvertisements:(id)a0 completion:(id /* block */)a1;
- (void)saveBeaconPayloads:(id)a0 completion:(id /* block */)a1;

@end
