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
- (BOOL)handleAccessoryWiFiInformationForWirelessCarPlay:(id)a0;
- (id)copyDeviceWiFiNetworkInformation;
- (BOOL)isDeviceConnectedToWiFi;
- (BOOL)hasWAPICapability;
- (BOOL)handleAccessoryWiFiInformation:(id)a0;

@end
