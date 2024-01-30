@class UIColor, UIStackView, UIActivityIndicatorView, UIVisualEffectView, NSMutableArray;
@protocol RUIMultiChoiceActionHandler;

@interface RUIMultiChoiceView : UIView {
    UIStackView *_stackView;
    NSMutableArray *_choices;
    NSMutableArray *_choiceButtons;
    NSMutableArray *_buttonsWidthConstraint;
    UIActivityIndicatorView *_activityIndicatorView;
    UIVisualEffectView *_trayBackdrop;
}

@property (weak, nonatomic) id<RUIMultiChoiceActionHandler> target;
@property (retain, nonatomic) UIColor *backgroundColor;

- (void).cxx_destruct;
- (void)setupStackView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)viewForElementIdentifier:(id)a0;
- (void)addChoice:(id)a0;
- (void)startActivityIndicatorForChoice:(id)a0;
- (void)stopActivityIndicatorForChoice:(id)a0;
- (void)didTapChoice:(id)a0;
- (void)setupTrayBackdrop;
- (void)setChoiceHidden:(BOOL)a0 atIndex:(unsigned long long)a1;

@end
