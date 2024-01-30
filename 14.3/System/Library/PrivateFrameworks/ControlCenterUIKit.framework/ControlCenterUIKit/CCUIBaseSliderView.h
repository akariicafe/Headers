@class NSString, NSArray, UIImage, CALayer, UIImageView, CCUICAPackageDescription, MTVisualStylingProvider, CCUICAPackageView;

@interface CCUIBaseSliderView : UIControl <CCUIGroupRendering, CCUITouchContinuationProviding, CCUIContentModuleTopLevelGestureProvider> {
    UIImageView *_glyphImageView;
    CCUICAPackageView *_glyphPackageView;
    CCUICAPackageView *_compensatingGlyphPackageView;
    MTVisualStylingProvider *_visualStylingProvider;
    BOOL _didConfigureGlyphPackageView;
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
@property (readonly, nonatomic) NSArray *punchOutRootLayers;
@property (readonly, nonatomic) CALayer *punchOutRootLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *topLevelBlockingGestureRecognizers;

- (void).cxx_destruct;
- (id)viewForTouchContinuation;
- (void)didMoveToWindow;
- (void)_setGlyphState:(id)a0;
- (double)sliderLengthForValue:(float)a0;
- (void)layoutSubviews;
- (void)_updateGlyphImageViewVisualStyling;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_newGlyphPackageView;
- (void)_configureGlyphPackageView:(id)a0;
- (void)_configureCompensatingGlyphPackageView:(id)a0;
- (double)sliderHeightForValue:(float)a0;

@end
