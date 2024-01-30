@class NSArray, NSString;

@interface AVCaptureDeviceDiscoverySession : NSObject {
    NSArray *_deviceTypes;
    long long _position;
    NSString *_mediaType;
    NSArray *_supportedMultiCamDeviceSets;
}

@property (readonly, nonatomic) NSArray *devices;
@property (readonly, nonatomic) NSArray *supportedMultiCamDeviceSets;

+ (void)initialize;
+ (id)allDeviceTypes;
+ (id)allVirtualDevices;
+ (id)allPointCloudDeviceTypes;
+ (id)allDevices;
+ (id)allVideoDevices;
+ (id)allPointCloudDevices;
+ (id)allAudioDevices;
+ (id)allVideoDeviceTypes;
+ (id)allAudioDeviceTypes;
+ (id)allSupportedMultiCamDeviceSets;
+ (id)discoverySessionWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2;
+ (id)allVirtualDeviceTypes;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)_handleDeviceConnectedDisconnectedNotification:(id)a0;
- (id)_initWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2 allowIOSMacEnvironment:(BOOL)a3 prefersUnsuspendedAndAllowsAnyPosition:(BOOL)a4;

@end
