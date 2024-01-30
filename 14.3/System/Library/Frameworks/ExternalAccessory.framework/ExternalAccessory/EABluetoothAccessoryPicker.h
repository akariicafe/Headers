@class NSString, BTDevicePicker;
@protocol EABluetoothAccessoryPickerDelegate;

@interface EABluetoothAccessoryPicker : NSObject <BTDevicePickerDelegate> {
    BTDevicePicker *_picker;
}

@property (nonatomic) id<EABluetoothAccessoryPickerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)wakeSelectedBluetoothAccessories:(id)a0;

- (void)show;
- (void)devicePicker:(id)a0 didDismissWithResult:(long long)a1 device:(id)a2;
- (void)dealloc;
- (id)initWithPredicate:(id)a0;
- (void)dismissPicker;

@end
