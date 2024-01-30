@class RUIElement, UIView, RUISubHeaderElement, UIButton, RUIModernHeaderView, NSLayoutConstraint, UIVisualEffectView, RUIChoiceViewElement, UIScrollView;
@protocol RUIHeader;

@interface RUIChoiceView : UIView {
    RUIModernHeaderView *_headerView;
    UIVisualEffectView *_trayBackdrop;
    UIScrollView *_scrollView;
    long long _currentStyle;
    NSLayoutConstraint *_trayHeightConstraint;
}

@property (readonly, nonatomic) UIButton *bigChoice;
@property (readonly, nonatomic) UIButton *smallChoice;
@property (readonly, nonatomic) UIView *buttonTray;
@property (weak, nonatomic) RUIChoiceViewElement *target;
@property (retain, nonatomic) RUIElement *header;
@property (retain, nonatomic) RUISubHeaderElement *subHeader;
@property (readonly, nonatomic) UIView<RUIHeader> *headerView;
@property (nonatomic) BOOL usesTwoButtonLayout;

- (id)init;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)layoutSubviews;
- (void)setHeaderTitle:(id)a0;
- (void)setImage:(id)a0;
- (id)viewForElementIdentifier:(id)a0;
- (void)_setupTrayConstraints;
- (void)choiceTapped:(id)a0;
- (BOOL)headerUsesModernHeaderView;
- (void)setFirstChoiceTitle:(id)a0 withColor:(id)a1;
- (void)setSecondChoiceTitle:(id)a0 withColor:(id)a1;
- (void)setHelpLinkTitle:(id)a0;

@end
