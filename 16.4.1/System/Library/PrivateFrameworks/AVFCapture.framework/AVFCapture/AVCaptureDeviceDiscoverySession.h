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
+ (id)allDevices;
+ (id)allVirtualDeviceTypes;
+ (id)allPointCloudDeviceTypes;
+ (id)allDeviceTypes;
+ (id)discoverySessionWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2;
+ (id)allVirtualDevices;
+ (id)allSupportedMultiCamDeviceSets;
+ (id)allVideoDevices;
+ (id)allAudioDevices;
+ (id)allAudioDeviceTypes;
+ (id)allPointCloudDevices;
+ (id)allVideoDeviceTypes;

- (void)_handleDeviceConnectedDisconnectedNotification:(id)a0;
- (void)dealloc;
- (id)_initWithDeviceTypes:(id)a0 mediaType:(id)a1 position:(long long)a2 allowIOSMacEnvironment:(BOOL)a3 prefersUnsuspendedAndAllowsAnyPosition:(BOOL)a4;
- (id)init;
- (id)description;

@end
