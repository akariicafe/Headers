@class NSString, HMDResidentSyncServer, HMDHome, HMDResidentSyncClient;

@interface HMDResidentSyncManager : NSObject <HMFLogging, HMDResidentSyncClient, HMDResidentSyncServer> {
    HMDHome *_home;
    HMDResidentSyncClient *_client;
    HMDResidentSyncServer *_server;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (void)performSync;
- (void)performResidentRequest:(id)a0 options:(unsigned long long)a1;
- (id)initWithHome:(id)a0 notificationCenter:(id)a1 persistence:(id)a2 logEventSubmitter:(id)a3;
- (id)initWithHome:(id)a0 notificationCenter:(id)a1 persistence:(id)a2 logEventSubmitter:(id)a3 isResidentCapable:(BOOL)a4 clientDataSource:(id)a5;
- (void)interceptRemoteResidentRequest:(id)a0 proceed:(id /* block */)a1;

@end
