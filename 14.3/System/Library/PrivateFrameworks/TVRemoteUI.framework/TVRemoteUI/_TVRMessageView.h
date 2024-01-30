@class UIButton, UIView;
@protocol TVRUIStyleProvider;

@interface _TVRMessageView : UIView

@property (retain, nonatomic) UIView *currentView;
@property (nonatomic) unsigned long long messageType;
@property (retain, nonatomic) UIButton *turnOnWiFiButton;
@property (nonatomic, getter=isWifiConnectInProgress) BOOL wifiConnectInProgress;
@property (retain, nonatomic) id<TVRUIStyleProvider> styleProvider;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)clearContent;
- (void)showMessageWithTitle:(id)a0 message:(id)a1;
- (void)showPairingMessageWithCode:(id)a0;
- (void)showNoWIFIConnectionMessage;
- (void)showMessageWithError:(id)a0 device:(id)a1;
- (void)showMessageWithTitle:(id)a0 message:(id)a1 titleFont:(id)a2;
- (void)showNoAssociatedNetworkMessage;
- (void)showLoadingSpinner;
- (void)showSearchingSpinner;
- (id)_deviceTypeString;
- (BOOL)_largeAccessibilityFontSizesEnabled;
- (id)_localizedLegacyPairingMessageForDeviceModel;
- (id)_convertToAttributedStringWithReplacement:(id)a0 imagePointSize:(double)a1;
- (void)_turnOnWireless:(id)a0;
- (id)_loadingViewWithTitle:(id)a0 forSize:(struct CGSize { double x0; double x1; })a1;

@end
