@class UILabel, UIImageView, CLKDevice;

@interface CompassBaseRichCircularDialView : CompassRichDialView {
    CLKDevice *_device;
    UILabel *_headingLabel;
    UILabel *_directionLabel;
    UIImageView *_ticks;
    UIImageView *_north;
    UIImageView *_south;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initFullColorImageViewWithDevice:(id)a0;
- (void)configureWithImageProvider:(id)a0 reason:(long long)a1;
- (id)monochromeAccentViews;
- (id)monochromeOtherViews;
- (long long)_supportedFamily;
- (id)_ticksImageName;
- (id)_needleNorthImageName;
- (id)_needleSouthImageName;
- (id)_needleShadowImageName;
- (id)_newTicksView;
- (id)_newNeedleView;

@end
