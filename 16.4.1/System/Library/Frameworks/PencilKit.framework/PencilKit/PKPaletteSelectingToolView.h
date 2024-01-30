@class PKInk, NSString, PKToolConfiguration;
@protocol PKPaletteInkingTool, PKPaletteHandwritingTool, PKPaletteErasingTool;

@interface PKPaletteSelectingToolView : PKPaletteToolView <PKPaletteInkingTool, PKPaletteSelectingTool>

@property (retain, nonatomic) id<PKPaletteInkingTool> inkTool;
@property (readonly, nonatomic) PKInk *ink;
@property (readonly, nonatomic) NSString *toolIdentifier;
@property (readonly, nonatomic) NSString *toolVariant;
@property (readonly, nonatomic) PKToolConfiguration *configuration;
@property (readonly, nonatomic) id<PKPaletteInkingTool> inkingTool;
@property (readonly, nonatomic) id<PKPaletteErasingTool> erasingTool;
@property (readonly, nonatomic) id<PKPaletteHandwritingTool> handwritingTool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)setInkColor:(id)a0;
- (id)attributeViewController;
- (id)initWithToolIdentifier:(id)a0 configuration:(id)a1;
- (void)setInkWeight:(double)a0;

@end
