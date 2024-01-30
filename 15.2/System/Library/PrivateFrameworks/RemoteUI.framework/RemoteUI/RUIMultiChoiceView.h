@class UIColor, UIStackView, NSMutableArray, UIActivityIndicatorView, UIVisualEffectView, RUIHTMLHeaderView, RUIHTMLHeaderElement;
@protocol RUIMultiChoiceActionHandler;

@interface RUIMultiChoiceView : UIView <RUIHeaderDelegate> {
    UIStackView *_stackView;
    NSMutableArray *_choices;
    NSMutableArray *_choiceButtons;
    NSMutableArray *_buttonsWidthConstraint;
    UIActivityIndicatorView *_activityIndicatorView;
    UIVisualEffectView *_trayBackdrop;
    double _headerHeight;
}

@property (weak, nonatomic) id<RUIMultiChoiceActionHandler> target;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) RUIHTMLHeaderElement *header;
@property (retain, nonatomic) RUIHTMLHeaderView *HTMLHeaderView;
@property (nonatomic) BOOL removeBlurEffect;
@property (nonatomic) BOOL useNonObKitStyleButtons;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setupStackView;
- (id)viewForElementIdentifier:(id)a0;
- (void)setStackViewElementSpacing:(double)a0;
- (void)setStackViewTopAndBottomMarginSpacing:(double)a0;
- (void)addChoice:(id)a0;
- (void)startActivityIndicatorForChoice:(id)a0;
- (void)stopActivityIndicatorForChoice:(id)a0;
- (void)didTapChoice:(id)a0;
- (void)headerView:(id)a0 activatedLinkWithURL:(id)a1;
- (void)setupTrayBackdrop;
- (id)_createActivityIndicatorView;
- (void)_configureHTMLHeaderView;
- (void)setChoiceHidden:(BOOL)a0 atIndex:(unsigned long long)a1;
- (id)getAllChoices;

@end
