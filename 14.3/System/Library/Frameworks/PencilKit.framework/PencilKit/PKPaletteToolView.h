@class PKPaletteAttributeViewController, UIImageView, NSString, NSLayoutConstraint, UIView, NSDictionary;
@protocol PKPaletteInkingTool, PKPaletteErasingTool, PKPaletteTool;

@interface PKPaletteToolView : UIControl <PKPaletteTool, PKEdgeLocatable, PKPaletteViewSizeScaling>

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
@property (readonly, nonatomic) NSString *toolIdentifier;
@property (readonly, nonatomic) id<PKPaletteInkingTool> inkingTool;
@property (readonly, nonatomic) id<PKPaletteErasingTool> erasingTool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long edgeLocation;
@property (nonatomic) double scalingFactor;

+ (BOOL)_toolIdentifierIsBitmapEraser:(id)a0;
+ (BOOL)_toolIdentifierIsObjectEraser:(id)a0;
+ (id)_toolIdentifierFromInk:(id)a0;
+ (BOOL)_toolIdentifierIsRuler:(id)a0;
+ (BOOL)_toolIdentifierIsEraser:(id)a0;
+ (BOOL)_isHandwritingToolIdentfier:(id)a0;
+ (id)toolViewWithIdentifier:(id)a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)setSelected:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithToolIdentifier:(id)a0 toolProperties:(id)a1;
- (id)initWithToolIdentifier:(id)a0;
- (double)_toolSelectedOffset;
- (void)_reloadToolImage;
- (BOOL)isInkingTool;
- (BOOL)isErasingTool;
- (BOOL)isRulerTool;
- (BOOL)isLassoTool;
- (BOOL)isHandwritingTool;
- (void)_updateToolShadowView;
- (void)_reloadToolImageSizeConstraints;

@end
