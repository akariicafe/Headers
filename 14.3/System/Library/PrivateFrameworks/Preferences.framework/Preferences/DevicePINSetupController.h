@interface DevicePINSetupController : PSSetupController {
    BOOL _success;
}

@property (nonatomic) BOOL allowOptionsButton;

- (id)init;
- (BOOL)canBeShownFromSuspendedState;
- (void)showController:(id)a0 animate:(BOOL)a1;
- (BOOL)usePopupStyle;
- (BOOL)popupStyleIsModal;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)success;

@end
