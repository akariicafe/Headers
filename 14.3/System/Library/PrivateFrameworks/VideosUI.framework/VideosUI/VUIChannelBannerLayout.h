@class VUIProductUberBackgroundViewLayout, VUIButtonLayout, VUITextLayout, VUIAppleTVChannelLogoLayout;

@interface VUIChannelBannerLayout : TVViewLayout

@property (nonatomic) BOOL isSubscribed;
@property (nonatomic) BOOL descriptionPreferredOnPhoneSizeClass;
@property (retain, nonatomic) VUIAppleTVChannelLogoLayout *channelLogoLayout;
@property (retain, nonatomic) VUITextLayout *descriptionTextLayout;
@property (retain, nonatomic) VUITextLayout *textLayout;
@property (retain, nonatomic) VUITextLayout *disclaimerTextLayout;
@property (retain, nonatomic) VUIButtonLayout *subscribeButtonLayout;
@property (retain, nonatomic) VUIProductUberBackgroundViewLayout *uberBackgroundViewLayout;

+ (id)layoutWithLayout:(id)a0 element:(id)a1;
+ (void)_updateTextColorForDisclaimerLayout:(id)a0 hasBgImage:(BOOL)a1;
+ (void)_updateTextColorForDescriptionLayout:(id)a0 hasBgImage:(BOOL)a1;

- (id)init;
- (void).cxx_destruct;

@end
