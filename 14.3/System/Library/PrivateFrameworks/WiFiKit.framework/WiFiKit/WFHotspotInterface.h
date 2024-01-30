@class NSSet, SFRemoteHotspotSession, NSString, NSObject;
@protocol OS_dispatch_queue, WFHotspotInterfaceDelegate;

@interface WFHotspotInterface : NSObject <SFRemoteHotspotSessionDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, getter=isScanning) BOOL scanning;
@property (retain) NSSet *networks;
@property (retain) SFRemoteHotspotSession *hotspotSession;
@property (weak) id<WFHotspotInterfaceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopBrowsing;
- (id)init;
- (void).cxx_destruct;
- (void)startBrowsing;
- (void)session:(id)a0 updatedFoundDevices:(id)a1;
- (id)enableHotspot:(id)a0 error:(out id *)a1;
- (void)_stopBrowsingRemoveCache:(BOOL)a0;
- (void)updateNetworksWithHotspots:(id)a0;

@end
