@class NSString;

@interface MTSDeviceSetupRequestHandler : NSObject <NSExtensionRequestHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginRequestWithExtensionContext:(id)a0;
- (void)configureDeviceWithName:(id)a0 room:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchRoomsInHome:(id)a0 completionHandler:(id /* block */)a1;
- (void)pairDeviceInHome:(id)a0 onboardingPayload:(id)a1 uuid:(id)a2 completionHandler:(id /* block */)a3;
- (void)selectThreadNetworkFromScanResults:(id)a0 completionHandler:(id /* block */)a1;
- (void)selectWiFiNetworkFromScanResults:(id)a0 completionHandler:(id /* block */)a1;
- (void)validateDeviceCredential:(id)a0 completionHandler:(id /* block */)a1;

@end
