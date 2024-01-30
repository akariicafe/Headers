@class BluetoothDevice;

@interface SBVoiceControlPresentationSource : NSObject

@property (readonly, nonatomic) long long sourceType;
@property (readonly, nonatomic) BluetoothDevice *bluetoothDevice;

+ (id)sourceFromBluetoothDevice:(id)a0;
+ (id)sourceFromHeadsetButton;
+ (id)sourceFromHomeButton;

- (void).cxx_destruct;
- (id)_initWithSourceType:(long long)a0;

@end
