@class UIColor, UIScreen, UIFont, UIImage, NSString, NSBundle, NSMutableDictionary;

@interface TKStyleProvider : NSObject <TKVibrationRecorderStyleProvider> {
    NSBundle *_bundle;
    NSMutableDictionary *_cachedStyleProperties;
}

@property (readonly, nonatomic) double defaultAnimationDuration;
@property (readonly, nonatomic) UIColor *vibrationRecorderBarsBackgroundColor;
@property (retain, nonatomic) UIScreen *screen;
@property (readonly, nonatomic) UIFont *vibrationRecorderInstructionsLabelFont;
@property (readonly, nonatomic) UIColor *vibrationRecorderInstructionsLabelTextColor;
@property (readonly, nonatomic) UIColor *vibrationRecorderInstructionsLabelBackgroundColor;
@property (readonly, nonatomic) struct UIOffset { double x0; double x1; } vibrationRecorderInstructionsLabelPositionOffset;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } vibrationRecorderInstructionsLabelEdgeInsets;
@property (readonly, nonatomic) double vibrationRecorderInstructionsLabelFadeAnimationDuration;
@property (readonly, nonatomic) double vibrationRecorderControlsToolbarVerticalOffset;
@property (readonly, nonatomic) double vibrationRecorderControlsToolbarAdditionalHeight;
@property (readonly, nonatomic) double vibrationRecorderControlsToolbarItemsHorizontalOffsetFromEdge;
@property (readonly, nonatomic) double vibrationRecorderProgressToolbarVerticalOffset;
@property (readonly, nonatomic) double vibrationRecorderProgressToolbarAdditionalHeight;
@property (readonly, nonatomic) double vibrationRecorderProgressViewHorizontalOffsetFromEdge;
@property (readonly, nonatomic) double vibrationRecorderProgressViewHeight;
@property (readonly, nonatomic) UIColor *vibrationRecorderProgressViewTrackColor;
@property (readonly, nonatomic) double vibrationRecorderProgressViewDotHorizontalInset;
@property (readonly, nonatomic) UIColor *vibrationRecorderProgressViewDotTintColor;
@property (readonly, nonatomic) UIImage *vibrationRecorderProgressViewResizableDotImage;
@property (readonly, nonatomic) double vibrationRecorderProgressViewAccessibilityAdditionalHeight;
@property (readonly, nonatomic) UIColor *vibrationRecorderRippleViewBackgroundColor;
@property (readonly, nonatomic) double vibrationRecorderRippleRingLineWidth;
@property (readonly, nonatomic) double vibrationRecorderRippleInitialRadius;
@property (readonly, nonatomic) double vibrationRecorderRippleFinalRadius;
@property (readonly, nonatomic) double vibrationRecorderRippleFingerStillSpeed;
@property (readonly, nonatomic) double vibrationRecorderRippleFingerMovingSpeed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_didReceiveMemoryWarning:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_bundle;
- (void)dealloc;
- (id)_cachedStyleObjectForPropertyWithSelector:(SEL)a0;
- (void)_setCachedStyleObject:(id)a0 forPropertyWithSelector:(SEL)a1;
- (id)_cachedResizableImageForPropertyWithSelector:(SEL)a0 capInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 size:(struct CGSize { double x0; double x1; })a2 imageRenderingMode:(long long)a3 withDrawingActions:(id /* block */)a4;
- (id)_cachedImageWithName:(id)a0 forPropertyWithSelector:(SEL)a1;

@end
