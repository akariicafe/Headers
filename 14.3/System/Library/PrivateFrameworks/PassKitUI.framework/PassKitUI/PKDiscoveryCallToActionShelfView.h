@class PKContinuousButton, PKDiscoveryMedia, PKDiscoveryCallToAction, UIImageView, UILabel, PKDiscoveryCallToActionShelf;
@protocol PKDiscoveryCardViewDelegate;

@interface PKDiscoveryCallToActionShelfView : PKDiscoveryShelfView {
    PKDiscoveryCallToActionShelf *_ctaShelf;
    PKDiscoveryCallToAction *_callToAction;
    PKDiscoveryMedia *_media;
    UILabel *_titleLabel;
    UILabel *_editorialDescriptionLabel;
    UIImageView *_iconImageView;
    PKContinuousButton *_button;
    struct CGSize { double width; double height; } _iconSize;
}

@property (weak, nonatomic) id<PKDiscoveryCardViewDelegate> delegate;
@property (nonatomic) BOOL showActivityIndicator;

- (void).cxx_destruct;
- (void)_buttonPressed:(id)a0;
- (id)initWithShelf:(id)a0;
- (struct CGSize { double x0; double x1; })_iconSize;
- (void)layoutSubviews;
- (double)_leadingTitleSpace;
- (double)_leadingEditorialTextSpace;
- (struct CGSize { double x0; double x1; })_sizeForMedia;
- (void)setImage:(id)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
