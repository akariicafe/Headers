@class UIColor, TVImageLayout, VUITextLayout;

@interface VUIFavoriteBannerLayout : NSObject

@property (nonatomic) BOOL isPreModeBanner;
@property (nonatomic) struct TVCornerRadii { double topLeft; double topRight; double bottomLeft; double bottomRight; } borderRadii;
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

+ (id)postModeBannerLayout;
+ (id)preModeBannerLayout;

- (void).cxx_destruct;
- (id)initWithBannerType:(BOOL)a0;

@end
