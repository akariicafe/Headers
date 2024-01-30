@class UIStackView, UIView, OBLinkableTemplateLabel, OBPrivacyLinkController, OBButtonTrayLayoutGuide, NSMutableArray, UIViewController, NSLayoutConstraint;

@interface OBButtonTray : UIView

@property (weak, nonatomic) UIViewController *parentViewController;
@property (nonatomic) long long backdropStyle;
@property (retain, nonatomic) NSMutableArray *buttons;
@property (retain, nonatomic) OBButtonTrayLayoutGuide *buttonLayoutGuide;
@property (retain, nonatomic) OBPrivacyLinkController *privacyLinkController;
@property (retain, nonatomic) OBLinkableTemplateLabel *captionLabel;
@property (nonatomic) long long captionStyle;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIView *backdropContainer;
@property (retain, nonatomic) UIView *effectView;
@property (retain, nonatomic) NSLayoutConstraint *buttonViewTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *buttonViewBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *buttonViewLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *buttonViewTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *privacyLinkControllerLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *privacyLinkControllerTrailingConstraint;
@property (retain, nonatomic) UIView *privacyContainer;
@property (nonatomic, getter=isDetached) BOOL detached;

- (double)topPadding;
- (double)bottomPadding;
- (void)removeFromSuperview;
- (void)addButton:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)hasContent;
- (void).cxx_destruct;
- (void)setPrivacyLinkForBundles:(id)a0;
- (void)setCaptionText:(id)a0;
- (void)showButtonsBusy;
- (void)_setUpBackdrops;
- (void)addCaptionText:(id)a0;
- (void)_setCaptionText:(id)a0 style:(long long)a1 learnMoreURL:(id)a2;
- (BOOL)_shouldHandleLandscapeiPhoneLayout;
- (void)_updateButtonConstraints;
- (void)_updateCaptionTextAppearance;
- (void)_updateTrayVisibility;
- (void)addPrivacyLinkForBundles:(id)a0;
- (struct CGSize { double x0; double x1; })detachedSize;
- (void)removeAllButtons;
- (void)removeButton:(id)a0;
- (void)setCaptionText:(id)a0 learnMoreURL:(id)a1;
- (void)setCaptionText:(id)a0 style:(long long)a1;
- (void)setCaptionText:(id)a0 style:(long long)a1 learnMoreURL:(id)a2;
- (void)showButtonsAvailable;

@end
