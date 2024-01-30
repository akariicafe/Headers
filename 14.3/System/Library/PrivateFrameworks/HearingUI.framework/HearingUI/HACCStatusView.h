@class NSNumberFormatter, HACCBatteryGroupView, UIImageView, BCBatteryDevice, UILabel, BCBatteryDeviceController, NSString;
@protocol HACCContentModuleDelegate;

@interface HACCStatusView : UIControl <BCBatteryDeviceObserving, HACCContentModule> {
    NSNumberFormatter *_numberFormatter;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) HACCBatteryGroupView *batteryView;
@property (retain, nonatomic) BCBatteryDevice *batteryDevice;
@property (retain, nonatomic) BCBatteryDeviceController *batteryController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HACCContentModuleDelegate> delegate;
@property (nonatomic) unsigned long long module;

+ (id)_backgroundUpdateQueue;

- (BOOL)enabled;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)updateValue;
- (void)updateConstraints;
- (void)buttonTapped:(id)a0;
- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_productIdentifierForBTDevice:(id)a0;
- (id)accessibilityValue;
- (void)connectedDevicesDidChange:(id)a0;
- (id)contentValue;
- (id)liveListenImageName:(id)a0;
- (struct CGSize { double x0; double x1; })liveListenImageSize:(id)a0 forDevice:(id)a1;

@end
