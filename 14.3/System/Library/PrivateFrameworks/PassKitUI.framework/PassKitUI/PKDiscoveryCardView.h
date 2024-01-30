@class PKContinuousButton, UITapGestureRecognizer, UIImageView, PKDiscoveryMedia, PKDiscoveryCallToActionFooterView, PKDiscoveryArticleLayout, PKDiscoveryCard, UILabel;
@protocol PKDiscoveryCardViewDelegate;

@interface PKDiscoveryCardView : UIView {
    PKDiscoveryCard *_card;
    PKDiscoveryMedia *_media;
    UIImageView *_backgroundImageView;
    UILabel *_headingLabel;
    UILabel *_titleLabel;
    UIImageView *_shadowView;
    UIImageView *_maskImageView;
    PKDiscoveryCallToActionFooterView *_ctaFooterView;
    UITapGestureRecognizer *_tapRecognizer;
    PKContinuousButton *_dismissButton;
}

@property (retain, nonatomic) PKDiscoveryArticleLayout *articleLayout;
@property (readonly, nonatomic) long long priority;
@property (weak, nonatomic) id<PKDiscoveryCardViewDelegate> delegate;
@property (nonatomic) long long displayType;
@property (nonatomic, getter=isRemoving) BOOL removing;
@property (nonatomic) BOOL hasSafeAreaInsetOverride;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } safeAreaOverrideInsets;
@property (copy, nonatomic) id /* block */ callToActionTappedOverride;
@property (copy, nonatomic) id /* block */ dismissAction;

+ (double)cornerRadius;
+ (double)expandedWidth;
+ (struct CGSize { double x0; double x1; })expandedSize;
+ (double)compressedWidth;
+ (double)expandedHeight;
+ (double)compressedHeight;
+ (struct CGSize { double x0; double x1; })compressedSize;

- (void).cxx_destruct;
- (void)_loadImageData;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_currentContentInsets;
- (void)layoutSubviews;
- (id)initWithArticleLayout:(id)a0 displayType:(long long)a1 dismissImage:(id)a2 callToActionTappedOverride:(id /* block */)a3;
- (id)_headingLabelFont;
- (id)_headingLabelTextColor;
- (id)_titleLabelTextColor;
- (id)_dismissButtonTintColor;
- (void)_dismissButtonPressed:(id)a0;
- (void)_updateForDisplayType;
- (double)_yOffsetToHeadingLabel;
- (id)initWithArticleLayout:(id)a0 displayType:(long long)a1 dismissImage:(id)a2;
- (void)tapGestureRecognized:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
