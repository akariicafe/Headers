@class VUILabel, NSArray, UIView;

@interface VUIFeaturedCellOverlayView : VUIBaseView

@property (retain, nonatomic) UIView *appleTVChannelLogoView;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUILabel *subtitleLabel;
@property (retain, nonatomic) VUILabel *disclaimerLabel;
@property (retain, nonatomic) NSArray *buttons;
@property (nonatomic) BOOL usesDefaultOverlayType;

- (void)_layoutSubviews;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
