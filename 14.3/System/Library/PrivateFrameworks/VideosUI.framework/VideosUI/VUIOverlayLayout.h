@class TVImageLayout, VUITextLayout, VUIProgressBarLayout, VUITextBadgeLayout;

@interface VUIOverlayLayout : TVViewLayout {
    BOOL _isDarkTheme;
}

@property (nonatomic) long long overlayType;
@property (retain, nonatomic) VUITextLayout *titleLayout;
@property (retain, nonatomic) VUITextBadgeLayout *textBadgeLayout;
@property (retain, nonatomic) TVImageLayout *badgeLayout;
@property (retain, nonatomic) VUIProgressBarLayout *progressBarLayout;

+ (id)layoutWithLayout:(id)a0 overlayType:(long long)a1 element:(id)a2;
+ (id)layoutWithLayout:(id)a0 overlayType:(long long)a1 mediaItem:(id)a2;

- (void).cxx_destruct;
- (void)_updateLayoutWithElement:(id)a0 andType:(long long)a1;
- (void)_updateLayoutWithMediaItem:(id)a0 type:(long long)a1;
- (id)_navBrickTitleLayout;
- (id)_editorialTitleLayout;
- (id)_spotlightTitleLayout;
- (id)_ribbonTitleLayout;

@end
