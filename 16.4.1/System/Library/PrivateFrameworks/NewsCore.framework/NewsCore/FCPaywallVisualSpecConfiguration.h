@class FCMultiResolutionImage, NSURL, FCMultiSizeVideo, FCColor;

@interface FCPaywallVisualSpecConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) FCMultiResolutionImage *multiResolutionImage;
@property (retain, nonatomic) FCMultiResolutionImage *darkStyleMultiResolutionImage;
@property (retain, nonatomic) FCMultiResolutionImage *multiResolutionBadgeImage;
@property (retain, nonatomic) FCMultiResolutionImage *darkStyleMultiResolutionBadgeImage;
@property (retain, nonatomic) FCMultiSizeVideo *multiSizeVideo;
@property (retain, nonatomic) NSURL *videoURL;
@property (nonatomic) long long videoWidth;
@property (nonatomic) long long videoHeight;
@property (retain, nonatomic) FCColor *backgroundColor;
@property (retain, nonatomic) FCColor *darkStyleBackgroundColor;
@property (retain, nonatomic) FCColor *mastheadTextColor;
@property (retain, nonatomic) FCColor *largeTextColor;
@property (retain, nonatomic) FCColor *smallTextColor;
@property (retain, nonatomic) FCColor *offersTextColor;
@property (nonatomic) double gradientPercentHeight;
@property (nonatomic) long long textTopPadding;
@property (nonatomic) long long badgeVerticalOffset;

+ (id)defaultAudioFeedPaywallVisualSpecConfigurationLarge;
+ (id)defaultAudioFeedPaywallVisualSpecConfigurationSmall;
+ (id)defaultMagazineFeedPaywallVisualSpecConfigurationLarge;
+ (id)defaultMagazineFeedPaywallVisualSpecConfigurationMedium;
+ (id)defaultMagazineFeedPaywallVisualSpecConfigurationSmall;
+ (id)defaultPaywallVisualSpecConfiguration;

- (id)initWithConfigDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMultiResolutionImage:(id)a0 darkStyleMultiResolutionImage:(id)a1 multiResolutionBadgeImage:(id)a2 darkStyleMultiResolutionBadgeImage:(id)a3 multiSizeVideo:(id)a4 videoURL:(id)a5 videoWidth:(long long)a6 videoHeight:(long long)a7 gradientPercentHeight:(double)a8 textTopPadding:(long long)a9 badgeVerticalOffset:(long long)a10 backgroundColor:(id)a11 darkStyleBackgroundColor:(id)a12 mastheadTextColor:(id)a13 largeTextColor:(id)a14 smallTextColor:(id)a15 offersTextColor:(id)a16;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;

@end
