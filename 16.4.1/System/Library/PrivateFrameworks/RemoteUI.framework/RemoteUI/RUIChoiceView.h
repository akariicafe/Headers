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
@property (retain, nonatomic) RUIElement *helpLinkElement;
@property (readonly, nonatomic) UIView<RUIHeader> *headerView;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (nonatomic) BOOL usesTwoButtonLayout;

- (void)setHeaderTitle:(id)a0;
- (void)setImage:(id)a0;
- (id)titleLabel;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (void)setHelpLinkTitle:(id)a0;
- (id)viewForElementIdentifier:(id)a0;
- (void)setSecondChoiceTitle:(id)a0 withColor:(id)a1;
- (void)_setupTrayConstraints;
- (void)choiceTapped:(id)a0;
- (BOOL)headerUsesModernHeaderView;
- (void)setFirstChoiceTitle:(id)a0 withColor:(id)a1;

@end
