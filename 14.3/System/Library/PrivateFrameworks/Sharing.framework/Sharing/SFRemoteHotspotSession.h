@class NSString;
@protocol SFRemoteHotspotSessionDelegate, SFRemoteHotspotProtocol;

@interface SFRemoteHotspotSession : NSObject <SFRemoteHotspotClient, SFCompanionXPCManagerObserver>

@property BOOL browsing;
@property (retain) id<SFRemoteHotspotProtocol> connectionProxy;
@property (weak) id<SFRemoteHotspotSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopBrowsing;
- (id)init;
- (void).cxx_destruct;
- (void)startBrowsing;
- (void)updatedFoundDeviceList:(id)a0;
- (void)enableRemoteHotspotForDevice:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)xpcManagerConnectionInterrupted;
- (void)enableHotspotForDevice:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
