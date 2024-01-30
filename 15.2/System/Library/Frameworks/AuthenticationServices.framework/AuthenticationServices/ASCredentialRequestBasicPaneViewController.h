@class NSString, UIImage, ASCredentialRequestInfoLabelSubPane;

@interface ASCredentialRequestBasicPaneViewController : ASCredentialRequestPaneViewController {
    NSString *_title;
    NSString *_subtitle;
    UIImage *_icon;
    ASCredentialRequestInfoLabelSubPane *_subtitleSubPane;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 icon:(id)a2;
- (void)_setUpIconView;
- (void)_setUpView;
- (void)_setUpSubtitleLabel;
- (void)updateSubtitle:(id)a0;
- (void)_setUpTitleLabel;
- (void)_addBottomFillerView;
- (void)_addTopFillerViewWithMargin:(double)a0;

@end
