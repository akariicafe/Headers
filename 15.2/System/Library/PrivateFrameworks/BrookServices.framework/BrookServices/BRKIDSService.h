@class IDSService, NSString, NSObject;
@protocol BRKIDSServiceCompanionDataCollectionDelegate, BRKIDSServiceContextManagerDelegate, OS_dispatch_queue, BRKIDSServiceCompanionContextManagerDelegate;

@interface BRKIDSService : NSObject <IDSServiceDelegate> {
    NSObject<OS_dispatch_queue> *_idsQueue;
}

@property (weak, nonatomic) id<BRKIDSServiceContextManagerDelegate> contextManagerDelegate;
@property (weak, nonatomic) id<BRKIDSServiceCompanionContextManagerDelegate> companionContextManagerDelegate;
@property (weak, nonatomic) id<BRKIDSServiceCompanionDataCollectionDelegate> dataCollectionDelegate;
@property (retain, nonatomic) IDSService *idsService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)service:(id)a0 activeAccountsChanged:(id)a1;
- (void)service:(id)a0 devicesChanged:(id)a1;
- (void)service:(id)a0 account:(id)a1 incomingUnhandledProtobuf:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void)service:(id)a0 account:(id)a1 incomingResourceAtURL:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)locationManagerDidEnterRegion:(id)a0;
- (void)locationManagerDidExitRegion:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)locationManagerStartMonitoringForRegion:(id)a0;
- (void)locationManagerStopMonitoringForRegion:(id)a0;
- (id)sendProtobuf:(id)a0 type:(unsigned short)a1 priority:(long long)a2 completionHandler:(id /* block */)a3 withTimeout:(double)a4;
- (id)sendResourceAtURL:(id)a0 metadata:(id)a1 priority:(long long)a2 completionHandler:(id /* block */)a3 withTimeout:(double)a4;

@end
