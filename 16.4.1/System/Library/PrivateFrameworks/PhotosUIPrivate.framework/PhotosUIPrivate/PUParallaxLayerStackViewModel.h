@class NSString, PFParallaxLayerStack, PIParallaxStyle, PUParallaxLayerStackViewManager, PFParallaxLayout;
@protocol PISegmentationItem;

@interface PUParallaxLayerStackViewModel : PXObservable <PUParallaxLayerStackMutableViewModel, NSCopying>

@property (retain, nonatomic) id<PISegmentationItem> segmentationItem;
@property (retain, nonatomic) NSString *clockLayerOrder;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentNormalizedVisibleFrame;
@property (nonatomic) BOOL didSetContainerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } portraitVisibleFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } landscapeVisibleFrame;
@property (retain, nonatomic) PFParallaxLayout *lastPortraitLayout;
@property (readonly, nonatomic) PFParallaxLayerStack *currentLayerStack;
@property (readonly, nonatomic) PFParallaxLayout *currentLayout;
@property (readonly, nonatomic) long long environment;
@property (readonly, nonatomic) PUParallaxLayerStackViewManager *viewManager;
@property (readonly, nonatomic) long long layoutOrder;
@property (readonly, nonatomic) PIParallaxStyle *style;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } inactiveFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } normalizedVisibleFrame;
@property (readonly, nonatomic) BOOL clockAppearsAboveForeground;
@property (readonly, nonatomic) unsigned long long clockIntersection;
@property (readonly, nonatomic) BOOL depthEnabled;
@property (readonly, nonatomic) BOOL parallaxDisabled;
@property (readonly, nonatomic) BOOL canApplyParallax;
@property (readonly, nonatomic) BOOL hasEnoughRoomForParallax;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } parallaxVector;
@property (readonly, nonatomic) BOOL canEnableDepthEffect;
@property (readonly, nonatomic) BOOL hasMatte;
@property (readonly, nonatomic) long long backlightLuminance;
@property (readonly, nonatomic) double visibilityAmount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performChanges:(id /* block */)a0;
- (void)setDepthEnabled:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void).cxx_destruct;
- (void)setStyle:(id)a0;
- (void)setNormalizedVisibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithLayerStack:(id)a0;
- (void)setClockIntersection:(unsigned long long)a0;
- (void)setLayoutOrder:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_layoutRectForViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateVisibleFrameWithContainerFrameSetFirstTime:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_viewRectForLayoutRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithSegmentationItem:(id)a0 initialStyle:(id)a1 layerStack:(id)a2;
- (void)setBacklightLuminance:(long long)a0;
- (void)setClockAreaLuminance:(double)a0;
- (void)setContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setParallaxDisabled:(BOOL)a0;
- (void)setParallaxVector:(struct CGPoint { double x0; double x1; })a0;
- (void)setVisibilityAmount:(double)a0;
- (void)updateLayerStack:(id)a0;

@end
