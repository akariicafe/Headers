@class VUITextBadgeView, VUILabel, VUIBaseView, CALayer, NSArray, VUIProgressView;

@interface VUIOverlayView : VUIBaseView

@property (nonatomic) BOOL hasPageControlDisplayedOnTop;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUITextBadgeView *textBadge;
@property (retain, nonatomic) VUIProgressView *progressView;
@property (retain, nonatomic) VUIBaseView *gradientView;
@property (retain, nonatomic) CALayer *gradientLayer;
@property (copy, nonatomic) NSArray *badgeViewWrappers;
@property (nonatomic) long long overlayType;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;

+ (id)overlayViewFromMediaItem:(id)a0 overlayType:(long long)a1 existingView:(id)a2;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_overlayPadding;

@end
