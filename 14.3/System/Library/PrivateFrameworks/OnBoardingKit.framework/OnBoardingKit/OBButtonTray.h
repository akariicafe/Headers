@class UIStackView, UIView, NSLayoutConstraint, OBPrivacyLinkController, OBButtonTrayLayoutGuide, NSMutableArray, UIViewController, OBTemplateLabel, UIVisualEffectView;

@interface OBButtonTray : UIView

@property (weak, nonatomic) UIViewController *parentViewController;
@property (nonatomic) long long backdropStyle;
@property (retain, nonatomic) NSMutableArray *buttons;
@property (retain, nonatomic) OBButtonTrayLayoutGuide *buttonLayoutGuide;
@property (retain, nonatomic) OBPrivacyLinkController *privacyLinkController;
@property (retain, nonatomic) OBTemplateLabel *captionLabel;
@property (nonatomic) long long captionStyle;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIView *backdropContainer;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) NSLayoutConstraint *buttonViewTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *buttonViewBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *buttonViewLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *buttonViewTrailingConstraint;
@property (nonatomic, getter=isDetached) BOOL detached;

- (BOOL)hasContent;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)topPadding;
- (void)addButton:(id)a0;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (void)_setUpBackdrops;
- (void)_updateTrayVisibility;
- (void)_updateButtonConstraints;
- (void)_updateCaptionTextAppearance;
- (void)setCaptionText:(id)a0;
- (void)setCaptionText:(id)a0 style:(long long)a1;
- (BOOL)_shouldHandleLandscapeiPhoneLayout;
- (void)removeButton:(id)a0;
- (void)removeAllButtons;
- (void)addPrivacyLinkForBundles:(id)a0;
- (void)addCaptionText:(id)a0;
- (struct CGSize { double x0; double x1; })detachedSize;
- (double)bottomPadding;
- (void)layoutSubviews;
- (void)setPrivacyLinkForBundles:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;

@end
