@class UIStackView, NSArray, UIButton, QLDetailItemViewControllerState, UIView, NSString, QLFileIconImageView;

@interface QLDetailItemViewController : QLItemViewController {
    QLFileIconImageView *_filePreviewImageView;
    UIStackView *_informationStackView;
    UIButton *_actionIconButton;
    UIButton *_actionButton;
    BOOL _isSettingStateAnimated;
    UIView *_currentActionButtonView;
    NSString *_previewTitle;
}

@property (retain, nonatomic) QLDetailItemViewControllerState *state;
@property (retain, nonatomic) NSArray *information;

- (void)performAction;
- (void)setState:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)_scalableSystemFontOfSize:(double)a0;
- (void)_setActionButtonView:(id)a0 animated:(BOOL)a1 actionButtonLabel:(id)a2 informationVisible:(BOOL)a3;
- (void)_updateInformation;
- (void)loadPreviewControllerWithContents:(id)a0 context:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)canSwipeToDismiss;
- (BOOL)canPinchToDismiss;
- (BOOL)canEnterFullScreen;
- (void)setAppearance:(id)a0 animated:(BOOL)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
