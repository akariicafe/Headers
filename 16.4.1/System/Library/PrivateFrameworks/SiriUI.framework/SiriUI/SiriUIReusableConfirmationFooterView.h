@class SiriUIContentButton, SiriUIKeyline, SAUIConfirmationOptions, SiriUIProgressBarView, SiriUISnippetViewController;

@interface SiriUIReusableConfirmationFooterView : SiriUIReusableFooterView {
    SiriUIKeyline *_verticalKeyline;
    SiriUIProgressBarView *_progressBarView;
    double _automaticConfirmationThreshold;
    SiriUISnippetViewController *_snippetViewController;
}

@property (retain, nonatomic) SAUIConfirmationOptions *confirmationOptions;
@property (readonly, nonatomic) SiriUIContentButton *cancelButton;
@property (readonly, nonatomic) SiriUIContentButton *confirmButton;

+ (double)defaultHeight;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)beginProgressAnimation;
- (void)setSnippetViewController:(id)a0;
- (id)snippetViewController;

@end
