@class UIView, NSString, NSArray, UIImage, UIImageView, CCUICAPackageView, CCUICAPackageDescription;
@protocol CCUIPunchOutCompensating, CCUIPunchOutRendering;

@interface CCUIBaseSliderView : UIControl <CCUIGroupRendering, CCUITouchContinuationProviding, CCUIContentModuleTopLevelGestureProvider> {
    UIImageView *_glyphImageView;
    CCUICAPackageView *_glyphPackageView;
    UIView<CCUIPunchOutRendering, CCUIPunchOutCompensating> *_activeGlyphView;
    UIView<CCUIPunchOutCompensating> *_compensatingGlyphView;
}

@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } glyphCenter;
@property (nonatomic) double glyphScale;
@property (nonatomic) float value;
@property (retain, nonatomic) UIImage *glyphImage;
@property (retain, nonatomic) CCUICAPackageDescription *glyphPackageDescription;
@property (retain, nonatomic) NSString *glyphState;
@property (nonatomic, getter=isGlyphVisible) BOOL glyphVisible;
@property (nonatomic, getter=isInteractiveWhenUnexpanded) BOOL interactiveWhenUnexpanded;
@property (readonly, nonatomic, getter=isGroupRenderingRequired) BOOL groupRenderingRequired;
@property (readonly, nonatomic) NSArray *punchOutRenderingViews;
@property (readonly, nonatomic) NSArray *punchOutRootLayers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *topLevelBlockingGestureRecognizers;

- (id)viewForTouchContinuation;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setGlyphState:(id)a0;
- (void).cxx_destruct;
- (double)sliderLengthForValue:(float)a0;
- (void)_setActiveGlyphView:(id)a0;
- (void)_applyGlyphState:(id)a0 performConfiguration:(BOOL)a1;
- (double)sliderHeightForValue:(float)a0;

@end
