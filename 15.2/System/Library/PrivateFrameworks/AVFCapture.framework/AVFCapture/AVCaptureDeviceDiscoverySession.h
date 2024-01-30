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
+ (id)allPointCloudDevices;
+ (id)allVideoDeviceTypes;
+ (id)discoverySessionWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2;
+ (id)allVirtualDeviceTypes;
+ (id)allAudioDeviceTypes;
+ (id)allAudioDevices;
+ (id)allVideoDevices;
+ (id)allVirtualDevices;
+ (id)allDeviceTypes;
+ (id)allSupportedMultiCamDeviceSets;
+ (id)allDevices;
+ (id)allPointCloudDeviceTypes;

- (void)_handleDeviceConnectedDisconnectedNotification:(id)a0;
- (id)description;
- (id)_initWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2 allowIOSMacEnvironment:(BOOL)a3 prefersUnsuspendedAndAllowsAnyPosition:(BOOL)a4;
- (id)init;
- (void)dealloc;

@end
