@class UIView, IKViewElement, NSString, VUILabel, VUITextBadgeView, CALayer, VUICountDownProgressIndicator, VUIUpNextOverlayLayout, NSNumber, VUIProgressView;

@interface VUIUpNextOverlayView : UIView <VUITextBadgeViewDelegate>

@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) IKViewElement *progressViewElement;
@property (retain, nonatomic) IKViewElement *appImageElement;
@property (retain, nonatomic) IKViewElement *logoImageElement;
@property (retain, nonatomic) IKViewElement *textElement;
@property (retain, nonatomic) IKViewElement *subtitleElement;
@property (retain, nonatomic) IKViewElement *badgeElement;
@property (retain, nonatomic) IKViewElement *textBadgeElement;
@property (retain, nonatomic) NSNumber *autoPlayDuration;
@property (retain, nonatomic) VUICountDownProgressIndicator *autoPlayIndicator;
@property (nonatomic) double gradientSizeHeightMultiplier;
@property (retain, nonatomic) VUIUpNextOverlayLayout *overlayLayout;
@property (retain, nonatomic) VUIProgressView *progressView;
@property (retain, nonatomic) UIView *appImageView;
@property (retain, nonatomic) UIView *logoImageView;
@property (retain, nonatomic) VUILabel *textLabel;
@property (retain, nonatomic) VUILabel *subtitleLabel;
@property (retain, nonatomic) UIView *badgeView;
@property (retain, nonatomic) VUITextBadgeView *textBadge;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) CALayer *gradientLayer;
@property (nonatomic) BOOL progressViewShowOnlyOnFocus;
@property (nonatomic) BOOL appImageViewShowOnlyOnFocus;
@property (nonatomic) BOOL logoImageViewShowOnlyOnFocus;
@property (nonatomic) BOOL textLabelShowOnlyOnFocus;
@property (nonatomic) BOOL subtitleLabelShowOnlyOnFocus;
@property (nonatomic) BOOL badgeShowOnlyOnFocus;
@property (nonatomic) BOOL isFocused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)overlayViewFromElement:(id)a0 overlayLayout:(id)a1 existingView:(id)a2;

- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)textBadgeViewContentsUpdated:(id)a0;

@end
