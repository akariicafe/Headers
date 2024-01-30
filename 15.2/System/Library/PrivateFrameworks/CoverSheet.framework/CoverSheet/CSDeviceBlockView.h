@class UIButton, UIView;
@protocol CSDeviceBlockViewDelegate;

@interface CSDeviceBlockView : CSModalView {
    UIButton *_eraseDeviceButton;
    UIButton *_emergencyButton;
}

@property (retain, nonatomic) UIView *eraseDeviceView;
@property (retain, nonatomic) UIView *authenticationView;
@property (readonly, nonatomic) double buttonsBottomSpacing;
@property (readonly, nonatomic) BOOL isShowingAuthenticationView;
@property (weak, nonatomic) id<CSDeviceBlockViewDelegate> deviceBlockDelegate;

- (void).cxx_destruct;
- (void)_activateConstraints;
- (void)_handleEraseButtonAction;
- (double)_buttonsBottomSpacing;
- (void)_handleEmergencyButtonAction;
- (void)_updateViewForShowingEraseDeviceView:(BOOL)a0;
- (void)addDeviceEraseButtons;
- (void)removeDeviceEraseButtons;

@end
