@class CPSNavigationAlertFocusButton;

@interface CPSNavigationAlertButtonView : UIView

@property (retain, nonatomic) CPSNavigationAlertFocusButton *primaryButton;
@property (retain, nonatomic) CPSNavigationAlertFocusButton *secondaryButton;

- (void).cxx_destruct;
- (id)initWithPrimaryAction:(id)a0 secondaryAction:(id)a1 progressView:(id)a2;

@end
