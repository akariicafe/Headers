@class NSString;
@protocol SFRemoteHotspotSessionDelegate, SFRemoteHotspotProtocol;

@interface SFRemoteHotspotSession : NSObject <SFRemoteHotspotClient, SFCompanionXPCManagerObserver>

@property BOOL browsing;
@property (retain) id<SFRemoteHotspotProtocol> connectionProxy;
@property (weak, nonatomic) id<SFRemoteHotspotSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopBrowsing;
- (void)updatedFoundDeviceList:(id)a0;
- (void)removeDedicatedCellularBearerWithCompletion:(id /* block */)a0;
- (void)enableHotspotForDevice:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)startBrowsing;
- (void)enableRemoteHotspotForDevice:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)addDedicatedCellularBearer:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)xpcManagerConnectionInterrupted;

@end
