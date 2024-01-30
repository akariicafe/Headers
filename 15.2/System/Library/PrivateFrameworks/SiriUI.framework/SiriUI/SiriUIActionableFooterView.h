@class SiriUISnippetViewController, NSString, SiriUIKeyline, UIButton;
@protocol SiriUIActionableFooterViewDelegate;

@interface SiriUIActionableFooterView : SiriUIReusableFooterView {
    UIButton *_button;
    SiriUIKeyline *_keyline;
    SiriUISnippetViewController *_snippetViewController;
}

@property (weak, nonatomic) id<SiriUIActionableFooterViewDelegate> delegate;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL hasKeyline;

+ (double)defaultHeight;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_buttonTapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;
- (id)snippetViewController;
- (void)setSnippetViewController:(id)a0;

@end
