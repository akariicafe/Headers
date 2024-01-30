@class PKContinuousButton, PKDiscoveryMedia, UIImageView, PKDiscoveryCallToAction, UILabel;
@protocol PKDiscoveryCardViewDelegate;

@interface PKDiscoveryCallToActionFooterView : UIView {
    PKDiscoveryCallToAction *_callToAction;
    PKDiscoveryMedia *_media;
    UIImageView *_iconImageView;
    PKContinuousButton *_button;
    UILabel *_titleLabel;
    UILabel *_editorialDescriptionLabel;
    UILabel *_expandedTitleLabel;
    UILabel *_expandedEditorialDescriptionLabel;
    BOOL _hasIcon;
    BOOL _hasButton;
    BOOL _useAccessibilityLayout;
    id /* block */ _callToActionTappedOverride;
}

@property (nonatomic) BOOL showActivityIndicator;
@property (weak, nonatomic) id<PKDiscoveryCardViewDelegate> delegate;
@property (nonatomic) long long displayType;

- (void).cxx_destruct;
- (void)_buttonPressed:(id)a0;
- (id)_titleLabelFont;
- (id)_titleLabelWithLocalizedTitle:(id)a0;
- (id)_descriptionLabelWithLocalizedDescription:(id)a0;
- (void)_loadImageData;
- (struct CGSize { double x0; double x1; })_buttonSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_editorialDescriptionLabelFont;
- (id)_descriptionLabelColor;
- (double)_buttonWidthForLabelWidth:(double)a0;
- (id)initWithCallToAction:(id)a0 displayType:(long long)a1;
- (void)setCallToActionTappedOverride:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })_iconSize;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_titleLabelColor;

@end
