@class TVImageLayout, VUITextLayout, VUIProgressBarLayout, VUITextBadgeLayout;

@interface VUIUpNextOverlayLayout : TVViewLayout

@property (retain, nonatomic) TVImageLayout *appImageLayout;
@property (retain, nonatomic) TVImageLayout *logoImageLayout;
@property (retain, nonatomic) VUIProgressBarLayout *progressBarLayout;
@property (retain, nonatomic) TVImageLayout *badgeLayout;
@property (retain, nonatomic) VUITextLayout *titleLayout;
@property (retain, nonatomic) VUITextLayout *subtitleLayout;
@property (retain, nonatomic) VUITextBadgeLayout *textBadgeLayout;

+ (id)layoutWithLayout:(id)a0 element:(id)a1;
+ (id)logoImageLayout;
+ (id)appImageLayout;
+ (void)_setAppImageDefaultSize:(id)a0;
+ (void)_setLogoImageDefaultSize:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
