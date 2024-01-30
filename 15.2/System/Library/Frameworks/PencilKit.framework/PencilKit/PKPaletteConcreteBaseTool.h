@class NSString;
@protocol PKPaletteInkingTool, PKPaletteHandwritingTool, PKPaletteErasingTool;

@interface PKPaletteConcreteBaseTool : NSObject <PKPaletteTool>

@property (readonly, nonatomic) NSString *toolIdentifier;
@property (readonly, nonatomic) id<PKPaletteInkingTool> inkingTool;
@property (readonly, nonatomic) id<PKPaletteErasingTool> erasingTool;
@property (readonly, nonatomic) id<PKPaletteHandwritingTool> handwritingTool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isInkingTool;
- (BOOL)isErasingTool;
- (BOOL)isRulerTool;
- (BOOL)isLassoTool;
- (BOOL)isHandwritingTool;

@end
