@class UIView, NSString, UIActivityIndicatorView, _UIBatteryView, PNPDeviceState, NSLayoutConstraint, UILabel, PNPConnectButton;
@protocol PNPChargingStatusViewDelegate;

@interface PNPChargingStatusView : UIView <PNPDeviceStateConfigurable> {
    PNPDeviceState *_deviceState;
    UIView *_contentAreaView;
    UIView *_batterySectionView;
    UILabel *_deviceNameLabel;
    _UIBatteryView *_batteryView;
    UILabel *_percentageLabel;
    PNPConnectButton *_tapToConnectButton;
    NSLayoutConstraint *_alignDeviceNameToTopConstraint;
    NSLayoutConstraint *_centerDeviceNameConstraint;
    UIActivityIndicatorView *_spinnerView;
    double _maxPillWidth;
    BOOL _didStartBatteryAnimation;
    BOOL _isFadingOutDeviceName;
}

@property (weak, nonatomic) id<PNPChargingStatusViewDelegate> delegate;
@property (nonatomic) BOOL showsCharging;
@property (nonatomic) BOOL isTransitioningToBatteryUI;
@property (nonatomic) BOOL didStartBatteryTransition;
@property (nonatomic) long long chargingState;
@property (nonatomic) BOOL alphaOutName;
@property (copy, nonatomic) PNPDeviceState *deviceState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_batteryPercentageTextColor;
- (BOOL)_showBatteryStatus;
- (void)_setAndAnimateChargingStateToConnecting;
- (void)_performAnimations:(id /* block */)a0 completion:(id /* block */)a1;
- (void)beginPairing;
- (void)updateChargingState:(long long)a0;

@end
