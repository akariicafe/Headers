@class NSString;
@protocol PKPaletteInkingTool, PKPaletteErasingTool;

@interface PKPaletteConcreteHandwritingTool : PKPaletteConcreteBaseTool <PKPaletteHandwritingTool>

@property (readonly, nonatomic) NSString *toolIdentifier;
@property (readonly, nonatomic) id<PKPaletteInkingTool> inkingTool;
@property (readonly, nonatomic) id<PKPaletteErasingTool> erasingTool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isHandwritingTool;

@end
