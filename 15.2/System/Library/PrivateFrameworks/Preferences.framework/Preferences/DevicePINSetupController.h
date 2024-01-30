@interface DevicePINSetupController : PSSetupController {
    BOOL _success;
}

@property (nonatomic) BOOL allowOptionsButton;

- (BOOL)canBeShownFromSuspendedState;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)usePopupStyle;
- (BOOL)popupStyleIsModal;
- (BOOL)success;
- (id)init;
- (void)showController:(id)a0 animate:(BOOL)a1;

@end
