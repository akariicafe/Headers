@class UIView, UILabel, PKDiscoveryCallToActionFooterView, UITapGestureRecognizer, PKDiscoveryCardViewTemplateInformation, UIImageView, PKContinuousButton, PKDiscoveryMedia, PKDiscoveryCard, PKMiniDiscoveryCard, PKDiscoveryArticleLayout, UIColor;
@protocol PKDiscoveryCardViewDelegate;

@interface PKDiscoveryCardView : UIView {
    PKDiscoveryCard *_card;
    PKMiniDiscoveryCard *_miniCard;
    PKDiscoveryMedia *_largeCardMedia;
    PKDiscoveryMedia *_miniCardMedia;
    UIImageView *_backgroundImageView;
    UIView *_miniCardBackgroundColorView;
    UIColor *_backgroundColor;
    UILabel *_headingLabel;
    UILabel *_titleLabel;
    UIImageView *_shadowView;
    UIImageView *_maskImageView;
    PKDiscoveryCallToActionFooterView *_ctaFooterView;
    UITapGestureRecognizer *_tapRecognizer;
    PKContinuousButton *_dismissButton;
    BOOL _shouldDisplayAsLarge;
    long long _displayType;
    long long _currentCardSize;
}

@property (retain, nonatomic) PKDiscoveryArticleLayout *articleLayout;
@property (readonly, nonatomic) long long priority;
@property (weak, nonatomic) id<PKDiscoveryCardViewDelegate> delegate;
@property (nonatomic, getter=isRemoving) BOOL removing;
@property (retain, nonatomic) PKDiscoveryCardViewTemplateInformation *cardTemplateInformation;
@property (nonatomic) BOOL hasSafeAreaInsetOverride;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } safeAreaOverrideInsets;
@property (copy, nonatomic) id /* block */ callToActionTappedOverride;
@property (copy, nonatomic) id /* block */ dismissAction;

+ (struct CGSize { double x0; double x1; })expandedSize;
+ (double)compressedWidth;
+ (double)cornerRadius;
+ (struct CGSize { double x0; double x1; })compressedSize;
+ (double)expandedWidth;
+ (double)expandedHeight;
+ (double)compressedHeight;
+ (struct CGSize { double x0; double x1; })miniCompressedSize;

- (void)layoutSubviews;
- (void)setDisplayType:(long long)a0;
- (void)tapGestureRecognized:(id)a0;
- (id)_titleLabelFont;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_currentContentInsets;
- (id)initWithArticleLayout:(id)a0 dismissImage:(id)a1 cardTemplateInformation:(id)a2;
- (void)loadAndUploadImageData;
- (void)setCardSize:(long long)a0;
- (id)initWithArticleLayout:(id)a0 dismissImage:(id)a1 cardTemplateInformation:(id)a2 callToActionTappedOverride:(id /* block */)a3;
- (id)_headingLabelFont;
- (id)_headingLabelTextColor;
- (id)_titleLabelTextColor;
- (id)_dismissButtonTintColor;
- (void)_dismissButtonPressed:(id)a0;
- (void)_updateForDisplayType;
- (struct CGSize { double x0; double x1; })_miniCardImageSize;
- (double)_yOffsetToHeadingLabel;

@end
