@class UIButton, NSString, UIAction, UIView, MTVisualStylingProvider, UILabel;

@interface PLPlatterDiscoveryView : PLPlatterView {
    UILabel *_titleTextLabel;
    UILabel *_bodyTextLabel;
    UIView *_graphicContainerView;
    UIButton *_clearButton;
}

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *bodyText;
@property (retain, nonatomic) UIAction *defaultAction;
@property (retain, nonatomic) UIView *graphicView;
@property (retain, nonatomic) MTVisualStylingProvider *strokeVisualStylingProvider;
@property (retain, nonatomic) UIAction *clearAction;

- (void)_configureTitleTextLabelIfNeccessary;
- (void)_configureBodyLabelIfNeccessary;
- (void)visualStylingProviderDidChange:(id)a0 forCategory:(long long)a1 outgoingProvider:(id)a2;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)requiredVisualStyleCategories;
- (id)visualStylingProviderForCategory:(long long)a0;
- (void)_layoutSubviewInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 measuringOnly:(out struct CGSize { double x0; double x1; } *)a1;
- (void)updateVisualStylingOfView:(id)a0 style:(long long)a1 visualStylingProvider:(id)a2 outgoingProvider:(id)a3;
- (void)_configureClearButtonIfNeccessary;
- (void)layoutSubviews;
- (id)init;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void).cxx_destruct;

@end
