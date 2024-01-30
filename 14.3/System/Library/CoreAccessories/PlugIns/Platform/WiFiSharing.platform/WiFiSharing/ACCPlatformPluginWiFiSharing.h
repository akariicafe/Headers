@class NSString;

@interface ACCPlatformPluginWiFiSharing : NSObject <ACCPlatformWiFiSharingProtocol, ACCPlatformPluginProtocol> {
    BOOL _hasWAPICapability;
}

@property (nonatomic) BOOL isRunning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *pluginName;

- (void)initPlugin;
- (void)startPlugin;
- (void)stopPlugin;
- (BOOL)hasWAPICapability;
- (id)copyDeviceWiFiNetworkInformation;
- (BOOL)handleAccessoryWiFiInformation:(id)a0;
- (BOOL)handleAccessoryWiFiInformationForWirelessCarPlay:(id)a0;
- (BOOL)isDeviceConnectedToWiFi;

@end
