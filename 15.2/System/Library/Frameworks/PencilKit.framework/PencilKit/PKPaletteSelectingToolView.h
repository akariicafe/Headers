@class PKInk, NSString;
@protocol PKPaletteInkingTool, PKPaletteHandwritingTool, PKPaletteErasingTool;

@interface PKPaletteSelectingToolView : PKPaletteToolView <PKPaletteInkingTool, PKPaletteSelectingTool>

@property (retain, nonatomic) id<PKPaletteInkingTool> inkTool;
@property (readonly, nonatomic) PKInk *ink;
@property (readonly, nonatomic) NSString *toolIdentifier;
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
- (void)setInkWeight:(double)a0;
- (id)initWithToolIdentifier:(id)a0;
- (id)attributeViewController;

@end
