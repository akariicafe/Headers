@class IKLockupElement, NSString, NSLayoutConstraint, MPUContentSizeLayoutConstraint, UIView, UILabel, VideosExtrasConstrainedArtworkContainerView;

@interface VideosExtrasLockupElementViewController : VideosExtrasViewElementViewController {
    VideosExtrasConstrainedArtworkContainerView *_artworkContainerView;
    UIView *_textContainmentView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_descriptionLabel;
    NSLayoutConstraint *_artworkContainerTopConstraint;
    NSLayoutConstraint *_artworkContainerXConstraint;
    NSLayoutConstraint *_artworkContainerWidthConstraint;
    NSLayoutConstraint *_artworkContainerHeightConstraint;
    struct CGSize { double width; double height; } _artworkSize;
    NSLayoutConstraint *_textTopConstraint;
    NSLayoutConstraint *_textHeightConstraint;
    NSLayoutConstraint *_textCenterYConstraint;
    NSLayoutConstraint *_textLeadingConstraint;
    NSLayoutConstraint *_textTrailingConstraint;
    NSLayoutConstraint *_textBottomConstraint;
    NSLayoutConstraint *_titleVerticalConstraint;
    MPUContentSizeLayoutConstraint *_subtitleBaselineConstraint;
    MPUContentSizeLayoutConstraint *_descriptionBaselineConstraint;
}

@property (readonly) IKLockupElement *viewElement;
@property (readonly) NSString *descriptionTextStyle;

- (void)_handlePress:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithViewElement:(id)a0;
- (void)_configureArtworkViewForImageElement:(id)a0 overlays:(id)a1;
- (void)_configureDescriptionLabelForTextElement:(id)a0;
- (void)_configureSubtitleLabelForTextElement:(id)a0;
- (void)_configureTitleLabelForTextElement:(id)a0;
- (void)_prepareLayout;

@end
