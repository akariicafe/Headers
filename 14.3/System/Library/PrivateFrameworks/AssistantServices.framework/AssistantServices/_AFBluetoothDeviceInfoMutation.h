@class NSString, AFBluetoothDeviceInfo, NSUUID;

@interface _AFBluetoothDeviceInfoMutation : NSObject <AFBluetoothDeviceInfoMutating> {
    AFBluetoothDeviceInfo *_baseModel;
    NSString *_address;
    NSUUID *_deviceUID;
    unsigned int _vendorID;
    unsigned int _productID;
    BOOL _isAdvancedAppleAudioDevice;
    BOOL _supportsInEarDetection;
    BOOL _supportsVoiceTrigger;
    BOOL _supportsSpokenNotification;
    BOOL _supportsListeningModeANC;
    BOOL _supportsListeningModeTransparency;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasAddress : 1; unsigned char hasDeviceUID : 1; unsigned char hasVendorID : 1; unsigned char hasProductID : 1; unsigned char hasIsAdvancedAppleAudioDevice : 1; unsigned char hasSupportsInEarDetection : 1; unsigned char hasSupportsVoiceTrigger : 1; unsigned char hasSupportsSpokenNotification : 1; unsigned char hasSupportsListeningModeANC : 1; unsigned char hasSupportsListeningModeTransparency : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setVendorID:(unsigned int)a0;
- (void)setProductID:(unsigned int)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setAddress:(id)a0;
- (id)generate;
- (void)setSupportsInEarDetection:(BOOL)a0;
- (void)setIsAdvancedAppleAudioDevice:(BOOL)a0;
- (void)setSupportsVoiceTrigger:(BOOL)a0;
- (void)setSupportsSpokenNotification:(BOOL)a0;
- (void)setSupportsListeningModeANC:(BOOL)a0;
- (void)setSupportsListeningModeTransparency:(BOOL)a0;
- (id)initWithBaseModel:(id)a0;
- (void)setDeviceUID:(id)a0;

@end
