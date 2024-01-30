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

- (void)stopPlugin;
- (void)initPlugin;
- (BOOL)handleAccessoryWiFiInformationForWirelessCarPlay:(id)a0;
- (void)startPlugin;
- (id)copyDeviceWiFiNetworkInformation;
- (BOOL)hasWAPICapability;
- (BOOL)handleAccessoryWiFiInformation:(id)a0;
- (BOOL)isDeviceConnectedToWiFi;

@end
