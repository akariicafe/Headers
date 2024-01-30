@class BluetoothDevice;

@interface SBVoiceControlPresentationSource : NSObject

@property (readonly, nonatomic) long long sourceType;
@property (readonly, nonatomic) BluetoothDevice *bluetoothDevice;

+ (id)sourceFromHomeButton;
+ (id)sourceFromHeadsetButton;
+ (id)sourceFromBluetoothDevice:(id)a0;

- (void).cxx_destruct;
- (id)_initWithSourceType:(long long)a0;

@end
