@class NSNumberFormatter, HACCBatteryGroupView, UIImageView, BCBatteryDevice, UILabel, BCBatteryDeviceController, NSString;
@protocol HACCContentModuleDelegate;

@interface HACCStatusView : UIControl <BCBatteryDeviceObserving, HACCContentModule> {
    NSNumberFormatter *_numberFormatter;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) HACCBatteryGroupView *batteryView;
@property (retain) BCBatteryDevice *batteryDevice;
@property (retain, nonatomic) BCBatteryDeviceController *batteryController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HACCContentModuleDelegate> delegate;
@property (nonatomic) unsigned long long module;

+ (id)_backgroundUpdateQueue;

- (id)accessibilityLabel;
- (void)connectedDevicesDidChange:(id)a0;
- (void)buttonTapped:(id)a0;
- (BOOL)enabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (void)updateValue;
- (id)_productIdentifierFromBluetoothRoute:(id)a0;
- (id)contentValue;
- (id)liveListenImageNameFromBluetoothRoute:(id)a0;
- (struct CGSize { double x0; double x1; })liveListenImageSize:(id)a0 forProductID:(id)a1;

@end
