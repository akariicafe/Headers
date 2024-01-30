@class UIColor, TVImageLayout, VUITextLayout;

@interface VUIFavoriteBannerLayout : NSObject

@property (nonatomic) BOOL isPreModeBanner;
@property (nonatomic) struct _VUICornerRadii { double topLeft; double topRight; double bottomLeft; double bottomRight; } borderRadii;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } margin;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *highlightedBackgroundColor;
@property (nonatomic) double bannerMinHeight;
@property (nonatomic) double maxTextWidth;
@property (nonatomic) double subtitleBaseLine;
@property (readonly, nonatomic) VUITextLayout *titleLayout;
@property (readonly, nonatomic) VUITextLayout *subtitleLayout;
@property (readonly, nonatomic) TVImageLayout *imageLayout;
@property (nonatomic) unsigned long long bannerStyle;

- (void).cxx_destruct;
- (unsigned long long)bannerStyleForSizeClass:(long long)a0;

@end
