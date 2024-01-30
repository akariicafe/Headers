@class NSArray, UIImageView, UIView, CLKDevice;

@interface LevelBaseRichCircularComplicationView : LevelRichComplicationView {
    CLKDevice *_device;
    UIView *_ticksView;
    UIView *_curvedLabelsContainerView;
    NSArray *_curvedLabelViews;
    UIImageView *_overlayCrossView;
    UIImageView *_fixedBubbleView;
    UIImageView *_floatingBubbleView;
    double _cachedHeading;
}

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)configureWithImageProvider:(id)a0 reason:(long long)a1;
- (id)initFullColorImageViewWithDevice:(id)a0;
- (void)_createDialLabels;
- (id)_curvedLabelViewForLocStringKey:(id)a0 font:(id)a1 textColor:(id)a2 centerAngle:(double)a3;
- (id)_fixedBubbleImageName;
- (id)_floatingBubbleImageName;
- (void)_hideDialLabels:(BOOL)a0;
- (double)_maxBubbleDeflection;
- (id)_newFixedBubbleView;
- (id)_newFixedOverlayView;
- (id)_newFloatingBubbleView;
- (id)_overlayImageName;
- (long long)_supportedFamily;
- (id)monochromeAccentViews;
- (id)monochromeOtherViews;
- (id)ticksView;

@end
