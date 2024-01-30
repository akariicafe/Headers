@class UILabel, UIButton, UIView;
@protocol CSEraseDeviceViewControllerDelegate;

@interface CSEraseDeviceViewController : UIViewController {
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UIView *_labelsContainerView;
    UIButton *_cancelButton;
    UIButton *_eraseDeviceButton;
    UIButton *_eraseDeviceButtonForIPad;
}

@property (nonatomic) double buttonsBottomSpacing;
@property (weak, nonatomic) id<CSEraseDeviceViewControllerDelegate> delegate;

- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)loadView;
- (void)_activateConstraints;
- (void)_handleCancelButtonAction;
- (void)_handleEraseButtonAction;
- (void)setBodyLabelTextWithTimeout:(id)a0;
- (void)setDeviceEraseButtonForIPad:(id)a0;

@end
