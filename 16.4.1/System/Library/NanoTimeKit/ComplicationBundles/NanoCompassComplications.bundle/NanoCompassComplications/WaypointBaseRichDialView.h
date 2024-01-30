@class WaypointRichComplicationTicksView, UIImageView, UIImage, UIView, NSDictionary, NSMutableDictionary;

@interface WaypointBaseRichDialView : NanoCompassBaseRichView {
    UIImage *_defaultWaypointImage;
    UIImage *_defaultSmartWaypointImage;
    UIImage *_deletedWaypointImage;
    UIImageView *_needleImageView;
    struct { double symbolSize; double symbolMargin; double dialDiameter; struct CGSize { double width; double height; } largeTickSize; struct CGSize { double width; double height; } smallTickSize; double needleHeight; double blurAmount; } _layoutConstants;
    NSDictionary *_symbolSizeAdjustments;
    NSMutableDictionary *_waypointSymbolCache;
}

@property (retain, nonatomic) UIView *needleView;
@property (retain, nonatomic) WaypointRichComplicationTicksView *ticksView;
@property (retain, nonatomic) UIImageView *waypointView;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (struct { double x0; double x1; double x2; struct CGSize { double x0; double x1; } x3; struct CGSize { double x0; double x1; } x4; double x5; double x6; })_layoutConstantsForDevice:(id)a0;
- (void)configureWithImageProvider:(id)a0 reason:(long long)a1;
- (id)initFullColorImageViewWithDevice:(id)a0;
- (void)_configureSampleTemplateWithImageProvider:(id)a0;
- (id)_defaultSmartWaypointImage;
- (id)_defaultWaypointImage;
- (id)_deletedWaypointImage;
- (id)_pointSizeConfigurationForSymbol:(id)a0;
- (id)_symbolSizeAdjustmentsForDevice:(id)a0;
- (id)_tickColorForWaypointColor:(id)a0;
- (id)_waypointImageForSymbol:(id)a0;
- (id)monochromeAccentViews;
- (id)monochromeOtherViews;

@end
