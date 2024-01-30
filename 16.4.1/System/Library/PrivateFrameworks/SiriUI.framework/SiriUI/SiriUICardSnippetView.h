@class SiriUISnippetViewController, NSString, UIView, SiriUISashView, UIButton;
@protocol SiriUICardSnippetViewDataSource, SiriUICardSnippetViewDelegate;

@interface SiriUICardSnippetView : UIView <SiriSharedUISnippetLoadingStateProviding> {
    UIView *_cardView;
    SiriUISashView *_sashView;
}

@property (nonatomic, getter=isNavigating) BOOL navigating;
@property (nonatomic) BOOL shouldClipTopOfCard;
@property (readonly, nonatomic) UIButton *backNavigationButton;
@property (weak, nonatomic) SiriUISnippetViewController *backingViewController;
@property (weak, nonatomic) id<SiriUICardSnippetViewDataSource> dataSource;
@property (weak, nonatomic) id<SiriUICardSnippetViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessibilityIdentifier;
- (BOOL)isLoading;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setCardView:(id)a0;
- (void)_sashViewRecognizedTapGestureWithGestureRecognizer:(id)a0;

@end
