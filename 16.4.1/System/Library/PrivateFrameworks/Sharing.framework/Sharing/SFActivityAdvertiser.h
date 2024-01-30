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
- (void)_getRemoteObjectProxyOnQueue:(id /* block */)a0;
- (id)exportedInterface;
- (void)fetchPeerForUUID:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)pairedDevicesChanged:(id)a0;
- (void)advertiseAdvertisementPayload:(id)a0 options:(id)a1;
- (void)fetchSFPeerDevicesWithCompletionHandler:(id /* block */)a0;
- (BOOL)shouldEscapeXpcTryCatch;
- (id)machServiceName;
- (void)didSendPayloadForActivityIdentifier:(id)a0 toDevice:(id)a1 error:(id)a2;
- (id)init;
- (void)activityPayloadForAdvertisementPayload:(id)a0 command:(id)a1 requestedByDevice:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)fetchLoginIDWithCompletionHandler:(id /* block */)a0;

@end
