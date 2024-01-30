@class UILabel, UIImageView, CLKDevice;

@interface CompassBaseRichCircularDialView : CompassRichDialView {
    CLKDevice *_device;
    UILabel *_headingLabel;
    UILabel *_directionLabel;
    UIImageView *_ticks;
    UIImageView *_north;
    UIImageView *_south;
}

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)configureWithImageProvider:(id)a0 reason:(long long)a1;
- (id)initFullColorImageViewWithDevice:(id)a0;
- (id)_ticksImageName;
- (id)_gossamer_newNeedleView;
- (id)_needleNorthImageName;
- (id)_needleShadowImageName;
- (id)_needleSouthImageName;
- (id)_newNeedleView;
- (id)_newTicksView;
- (id)_pregossamer_newNeedleView;
- (long long)_supportedFamily;
- (id)monochromeAccentViews;
- (id)monochromeOtherViews;

@end
