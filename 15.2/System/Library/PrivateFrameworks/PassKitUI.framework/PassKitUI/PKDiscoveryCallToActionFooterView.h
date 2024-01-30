@class PKContinuousButton, NSString, PKDiscoveryCallToAction, PKDiscoveryMedia, UIImageView, UILabel, PKLinkedApplication;
@protocol PKDiscoveryCardViewDelegate;

@interface PKDiscoveryCallToActionFooterView : UIView <PKLinkedApplicationObserver> {
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
    PKLinkedApplication *_linkedApplication;
    id /* block */ _callToActionTappedOverride;
}

@property (nonatomic) BOOL showActivityIndicator;
@property (weak, nonatomic) id<PKDiscoveryCardViewDelegate> delegate;
@property (nonatomic) long long displayType;
@property (copy, nonatomic) NSString *itemIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (id)_titleLabelFont;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_iconSize;
- (void)_buttonPressed:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)_titleLabelColor;
- (void)linkedApplicationDidChangeState:(id)a0;
- (id)_titleLabelWithLocalizedTitle:(id)a0;
- (id)_descriptionLabelWithLocalizedDescription:(id)a0;
- (void)_loadImageData;
- (id)initWithCallToAction:(id)a0 displayType:(long long)a1 itemIdentifier:(id)a2;
- (struct CGSize { double x0; double x1; })_buttonSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_editorialDescriptionLabelFont;
- (id)_descriptionLabelColor;
- (double)_buttonWidthForLabelWidth:(double)a0;
- (id)initWithCallToAction:(id)a0 displayType:(long long)a1;
- (void)setCallToActionTappedOverride:(id /* block */)a0;

@end
