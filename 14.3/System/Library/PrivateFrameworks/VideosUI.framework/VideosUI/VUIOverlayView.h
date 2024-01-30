@class UIView, IKViewElement, NSArray, VUIOverlayLayout, VUITextBadgeView, VUILabel, CALayer, VUIProgressView;

@interface VUIOverlayView : UIView

@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) IKViewElement *titleElement;
@property (retain, nonatomic) IKViewElement *textBadgeElement;
@property (nonatomic) BOOL hasPageControlDisplayedOnTop;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUITextBadgeView *textBadge;
@property (retain, nonatomic) VUIProgressView *progressView;
@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) CALayer *gradientLayer;
@property (copy, nonatomic) NSArray *badgeViewWrappers;
@property (retain, nonatomic) VUIOverlayLayout *overlayLayout;

+ (BOOL)_hasPageControlDisplayedOnTopOfOverlayElement:(id)a0;
+ (id)overlayViewFromElement:(id)a0 overlayLayout:(id)a1 existingView:(id)a2;
+ (id)overlayViewFromMediaItem:(id)a0 overlayLayout:(id)a1 existingView:(id)a2;

- (void).cxx_destruct;
- (void)reset;
- (void)layoutSubviews;

@end
