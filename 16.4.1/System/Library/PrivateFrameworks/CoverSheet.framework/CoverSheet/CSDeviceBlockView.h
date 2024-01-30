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
- (double)_buttonsBottomSpacing;
- (void)_handleEmergencyButtonAction;
- (void)_handleEraseButtonAction;
- (void)addDeviceEraseButtons;
- (void)removeDeviceEraseButtons;
- (void)updateViewForEraseDeviceView;

@end
