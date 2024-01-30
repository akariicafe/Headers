@class NSString;
@protocol SFActivityAdvertiserDelegate;

@interface SFActivityAdvertiser : SFXPCClient <SFActivityAdvertiserClient>

@property id<SFActivityAdvertiserDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedAdvertiser;

- (id)remoteObjectInterface;
- (BOOL)shouldEscapeXpcTryCatch;
- (id)machServiceName;
- (void)fetchSFPeerDevicesWithCompletionHandler:(id /* block */)a0;
- (void)pairedDevicesChanged:(id)a0;
- (void)fetchPeerForUUID:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)activityPayloadForAdvertisementPayload:(id)a0 command:(id)a1 requestedByDevice:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)_getRemoteObjectProxyOnQueue:(id /* block */)a0;
- (void)didSendPayloadForActivityIdentifier:(id)a0 toDevice:(id)a1 error:(id)a2;
- (void)advertiseAdvertisementPayload:(id)a0 options:(id)a1;
- (id)init;
- (void)fetchLoginIDWithCompletionHandler:(id /* block */)a0;
- (id)exportedInterface;

@end
