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

- (BOOL)hasWAPICapability;
- (BOOL)isDeviceConnectedToWiFi;
- (BOOL)handleAccessoryWiFiInformation:(id)a0;
- (void)initPlugin;
- (void)startPlugin;
- (BOOL)handleAccessoryWiFiInformationForWirelessCarPlay:(id)a0;
- (void)stopPlugin;
- (id)copyDeviceWiFiNetworkInformation;

@end
