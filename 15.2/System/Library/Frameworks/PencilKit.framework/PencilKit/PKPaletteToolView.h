@class PKPaletteAttributeViewController, UIImageView, NSString, NSLayoutConstraint, UIView, NSDictionary;
@protocol PKPaletteErasingTool, PKPaletteInkingTool, PKPaletteTool, PKPaletteHandwritingTool;

@interface PKPaletteToolView : UIControl <PKPaletteTool, PKPaletteEdgeLocating, PKPaletteViewSizeScaling>

@property (retain, nonatomic) UIView *toolShadowView;
@property (retain, nonatomic) NSLayoutConstraint *imageViewTopAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageViewBottomAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageViewLeftAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageViewRightAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageViewWidthAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageViewHeigthAnchorConstraint;
@property (retain, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) id<PKPaletteTool> tool;
@property (readonly, nonatomic) PKPaletteAttributeViewController *attributeViewController;
@property (readonly, nonatomic) NSString *toolName;
@property (copy, nonatomic) NSDictionary *toolProperties;
@property (nonatomic) long long colorUserInterfaceStyle;
@property (nonatomic) BOOL supportsDisplayingSelectedColor;
@property (readonly, nonatomic) NSString *toolIdentifier;
@property (readonly, nonatomic) id<PKPaletteInkingTool> inkingTool;
@property (readonly, nonatomic) id<PKPaletteErasingTool> erasingTool;
@property (readonly, nonatomic) id<PKPaletteHandwritingTool> handwritingTool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long edgeLocation;
@property (nonatomic) double scalingFactor;

+ (id)toolViewWithIdentifier:(id)a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithToolIdentifier:(id)a0;
- (BOOL)isInkingTool;
- (BOOL)isErasingTool;
- (BOOL)isRulerTool;
- (BOOL)isLassoTool;
- (BOOL)isHandwritingTool;
- (id)initWithToolIdentifier:(id)a0 toolProperties:(id)a1;
- (double)_toolSelectedOffset;
- (void)_reloadToolImage;
- (void)_updateToolShadowView;
- (void)_reloadToolImageSizeConstraints;

@end
