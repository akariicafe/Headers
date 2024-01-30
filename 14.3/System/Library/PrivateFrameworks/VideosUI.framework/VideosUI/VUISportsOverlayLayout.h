@class VUIScoreboardLayout, VUITextBadgeLayout, TVImageLayout;

@interface VUISportsOverlayLayout : TVViewLayout

@property (retain, nonatomic) VUIScoreboardLayout *scoreboardLayout;
@property (retain, nonatomic) VUITextBadgeLayout *textBadgeLayout;
@property (retain, nonatomic) TVImageLayout *appImageLayout;
@property (retain, nonatomic) TVImageLayout *logoImageLayout;

+ (id)overlayLayoutForElement:(id)a0 cardLayoutType:(long long)a1;
+ (long long)_scoreboardTypeForElement:(id)a0;
+ (id)_sportsOverlayALayoutWithElement:(id)a0;
+ (id)_sportsOverlayBLayoutWithElement:(id)a0;
+ (id)_sportsOverlayCLayoutWithElement:(id)a0;

- (void).cxx_destruct;

@end
