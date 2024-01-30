@class TPSCloudCallingThumperProvisioningURLController, NSString, TPSCloudCallingThumperController;

@interface TPSCloudCallingThumperDeviceListController : TPSCloudCallingDeviceListController <TUCallCapabilitiesDelegatePrivate>

@property (readonly, nonatomic) TPSCloudCallingThumperProvisioningURLController *provisioningURLController;
@property (readonly, nonatomic) TPSCloudCallingThumperController *thumperController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)didChangeThumperCallingProvisionalURLForSenderIdentityWithUUID:(id)a0;
- (void)didChangeThumperCallingCapabilitiesForSenderIdentityWithUUID:(id)a0;
- (id)isMainSwitchOn:(id)a0;
- (id)isDeviceSwitchOn:(id)a0;
- (void)setDeviceSwitchOn:(id)a0 specifier:(id)a1;
- (void)setMainSwitchOn:(id)a0 specifier:(id)a1;

@end
