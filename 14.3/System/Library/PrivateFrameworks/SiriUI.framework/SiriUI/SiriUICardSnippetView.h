@class SiriUISnippetViewController, UIView, SiriUISashView, UIButton;
@protocol SiriUICardSnippetViewDataSource, SiriUICardSnippetViewDelegate;

@interface SiriUICardSnippetView : UIView {
    UIView *_cardView;
    SiriUISashView *_sashView;
}

@property (nonatomic, getter=isNavigating) BOOL navigating;
@property (nonatomic) BOOL shouldClipTopOfCard;
@property (readonly, nonatomic) UIButton *backNavigationButton;
@property (weak, nonatomic) SiriUISnippetViewController *backingViewController;
@property (weak, nonatomic) id<SiriUICardSnippetViewDataSource> dataSource;
@property (weak, nonatomic) id<SiriUICardSnippetViewDelegate> delegate;

- (void)reloadData;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityIdentifier;
- (void)setCardView:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_sashViewRecognizedTapGestureWithGestureRecognizer:(id)a0;

@end
