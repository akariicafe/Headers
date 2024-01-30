@class UIImageView, CLKDevice;

@interface LevelRichCornerComplicationView : LevelRichComplicationView {
    CLKDevice *_device;
    UIImageView *_overlayCross;
    UIImageView *_brightRingView;
    UIImageView *_mutedRingView;
    UIImageView *_centeredBubbleView;
    UIImageView *_floatingBubbleView;
}

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)configureWithImageProvider:(id)a0 reason:(long long)a1;
- (id)initFullColorImageViewWithDevice:(id)a0;
- (id)_fixedBubbleImageName;
- (id)_floatingBubbleImageName;
- (double)_maxBubbleDeflection;
- (id)_newFixedBubbleView;
- (id)_newFixedOverlayView;
- (id)_newFloatingBubbleView;
- (id)_overlayImageName;
- (long long)_supportedFamily;
- (id)monochromeAccentViews;
- (id)monochromeOtherViews;

@end
