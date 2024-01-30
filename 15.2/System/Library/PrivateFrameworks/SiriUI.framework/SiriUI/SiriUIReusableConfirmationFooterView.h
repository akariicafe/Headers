@class SiriUIContentButton, SiriUIKeyline, SAUIConfirmationOptions, SiriUISnippetViewController;

@interface SiriUIReusableConfirmationFooterView : SiriUIReusableFooterView {
    SiriUIKeyline *_verticalKeyline;
    SiriUISnippetViewController *_snippetViewController;
}

@property (retain, nonatomic) SAUIConfirmationOptions *confirmationOptions;
@property (readonly, nonatomic) SiriUIContentButton *cancelButton;
@property (readonly, nonatomic) SiriUIContentButton *confirmButton;

+ (double)defaultHeight;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;
- (id)snippetViewController;
- (void)setSnippetViewController:(id)a0;

@end
