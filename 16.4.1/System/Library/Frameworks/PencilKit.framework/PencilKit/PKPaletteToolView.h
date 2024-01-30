@class PKToolConfiguration, PKPaletteAttributeViewController, NSString, UIImageView, NSDictionary, PKPaletteToolShadowPathView, NSLayoutConstraint, UIPointerInteraction;
@protocol PKPaletteErasingTool, PKPaletteInkingTool, PKPaletteTool, PKPaletteHandwritingTool;

@interface PKPaletteToolView : UIControl <PKPaletteTool, PKPaletteEdgeLocating, PKPaletteViewSizeScaling, UIPointerInteractionDelegate>

@property (retain, nonatomic) PKPaletteToolShadowPathView *toolShadowView;
@property (retain, nonatomic) NSLayoutConstraint *toolShadowViewTopAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *toolShadowViewLeftAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *toolShadowViewBottomAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *toolShadowViewRightAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageViewTopAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageViewBottomAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageViewLeftAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageViewRightAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageViewWidthAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageViewHeightAnchorConstraint;
@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) id<PKPaletteTool> tool;
@property (readonly, nonatomic) PKPaletteAttributeViewController *attributeViewController;
@property (readonly, nonatomic) NSString *toolName;
@property (copy, nonatomic) NSDictionary *toolProperties;
@property (nonatomic) long long colorUserInterfaceStyle;
@property (nonatomic) BOOL supportsDisplayingSelectedColor;
@property (copy, nonatomic) PKToolConfiguration *configuration;
@property (retain, nonatomic) UIPointerInteraction *pointerInteraction;
@property (readonly, nonatomic) NSString *toolIdentifier;
@property (readonly, nonatomic) NSString *toolVariant;
@property (readonly, nonatomic) id<PKPaletteInkingTool> inkingTool;
@property (readonly, nonatomic) id<PKPaletteErasingTool> erasingTool;
@property (readonly, nonatomic) id<PKPaletteHandwritingTool> handwritingTool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long edgeLocation;
@property (nonatomic) double scalingFactor;

+ (id)toolViewWithIdentifier:(id)a0 variant:(id)a1 configuration:(id)a2;

- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)setSelected:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;
- (void)_reloadToolImageSizeConstraints;
- (void)_reloadToolImage;
- (double)_toolSelectedOffset;
- (void)_updateToolShadowView;
- (id)initWithToolIdentifier:(id)a0 configuration:(id)a1 toolProperties:(id)a2;
- (id)initWithToolIdentifier:(id)a0 variant:(id)a1 configuration:(id)a2;
- (BOOL)isCustomTool;
- (BOOL)isErasingTool;
- (BOOL)isHandwritingTool;
- (BOOL)isInkingTool;
- (BOOL)isLassoTool;
- (BOOL)isRulerTool;
- (void)showTooltip:(id)a0;

@end
