@class VUITextLayout, VUIButtonLayout, VUIAppleTVChannelLogoLayout;

@interface VUIFeaturedCellOverlayLayout : NSObject

@property (nonatomic) long long overlayType;
@property (retain, nonatomic) VUIAppleTVChannelLogoLayout *channelLogoLayout;
@property (retain, nonatomic) VUITextLayout *titleLayout;
@property (retain, nonatomic) VUITextLayout *subtitleLayout;
@property (retain, nonatomic) VUITextLayout *disclaimerLayout;
@property (retain, nonatomic) VUIButtonLayout *buttonLayout;
@property (retain, nonatomic) VUIButtonLayout *textButtonLayout;

+ (id)layoutWithLayout:(id)a0 overlayType:(long long)a1 element:(id)a2;

- (void).cxx_destruct;
- (void)_setupLayouts;
- (id)initWithOverlayType:(long long)a0;

@end
