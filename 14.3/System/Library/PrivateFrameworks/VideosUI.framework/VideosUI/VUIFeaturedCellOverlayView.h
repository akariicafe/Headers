@class IKViewElement, VUIFeaturedCellOverlayLayout, VUILabel, UIView, NSArray;

@interface VUIFeaturedCellOverlayView : UIView

@property (retain, nonatomic) VUIFeaturedCellOverlayLayout *overlayLayout;
@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) UIView *appleTVChannelLogoView;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUILabel *subtitleLabel;
@property (retain, nonatomic) VUILabel *disclaimerLabel;
@property (retain, nonatomic) NSArray *buttons;
@property (nonatomic) BOOL usesDefaultOverlayType;

+ (id)featuredCellOverViewFromElement:(id)a0 overlayType:(long long)a1 existingView:(id)a2;

- (void).cxx_destruct;
- (void)layoutSubviews;

@end
