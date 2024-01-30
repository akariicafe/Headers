@class UIStackView, RUIHTMLHeaderElement, RUIHTMLHeaderView, UILayoutGuide, NSMutableArray, UIVisualEffectView, UIActivityIndicatorView, UIColor;
@protocol RUIMultiChoiceActionHandler;

@interface RUIMultiChoiceView : UIView <RUIHeaderDelegate> {
    UIStackView *_stackView;
    NSMutableArray *_choices;
    NSMutableArray *_choiceButtons;
    NSMutableArray *_buttonsWidthConstraint;
    UIActivityIndicatorView *_activityIndicatorView;
    UIVisualEffectView *_trayBackdrop;
    double _headerHeight;
    UILayoutGuide *_contentLayoutGuide;
}

@property (weak, nonatomic) id<RUIMultiChoiceActionHandler> target;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) RUIHTMLHeaderElement *header;
@property (retain, nonatomic) RUIHTMLHeaderView *HTMLHeaderView;
@property (nonatomic) BOOL removeBlurEffect;
@property (nonatomic) BOOL useNonObKitStyleButtons;
@property (readonly, nonatomic) UILayoutGuide *contentLayoutGuide;

- (void)_keyboardWillShow:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)_keyboardWillHide:(id)a0;
- (void).cxx_destruct;
- (void)setupStackView;
- (id)viewForElementIdentifier:(id)a0;
- (void)stopActivityIndicatorForChoice:(id)a0;
- (void)_configureHTMLHeaderView;
- (id)_createActivityIndicatorView;
- (void)addChoice:(id)a0;
- (void)didTapChoice:(id)a0;
- (void)didUpdateTitleForChoice:(id)a0;
- (double)estimatedViewHeight;
- (id)getAllChoices;
- (void)headerView:(id)a0 activatedLinkWithURL:(id)a1;
- (void)setChoiceEnabled:(BOOL)a0 atIndex:(unsigned long long)a1;
- (void)setChoiceHidden:(BOOL)a0 atIndex:(unsigned long long)a1;
- (void)setStackViewElementSpacing:(double)a0;
- (void)setStackViewTopAndBottomMarginSpacing:(double)a0;
- (void)setupTrayBackdrop;
- (void)startActivityIndicatorForChoice:(id)a0;

@end
