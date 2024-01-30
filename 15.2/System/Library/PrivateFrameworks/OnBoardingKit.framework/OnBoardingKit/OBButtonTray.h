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
@property (retain, nonatomic) NSLayoutConstraint *privacyLinkControllerLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *privacyLinkControllerTrailingConstraint;
@property (retain, nonatomic) UIView *privacyContainer;
@property (nonatomic, getter=isDetached) BOOL detached;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)_updateTrayVisibility;
- (void)addCaptionText:(id)a0;
- (double)bottomPadding;
- (void)didMoveToSuperview;
- (void)showButtonsAvailable;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setPrivacyLinkForBundles:(id)a0;
- (void)removeAllButtons;
- (void)_updateButtonConstraints;
- (void)addButton:(id)a0;
- (void)_setUpBackdrops;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })detachedSize;
- (void)showButtonsBusy;
- (double)topPadding;
- (BOOL)_shouldHandleLandscapeiPhoneLayout;
- (void)removeFromSuperview;
- (void)setCaptionText:(id)a0;
- (void)removeButton:(id)a0;
- (void)setCaptionText:(id)a0 style:(long long)a1;
- (void)addPrivacyLinkForBundles:(id)a0;
- (BOOL)hasContent;
- (void)_updateCaptionTextAppearance;

@end
