@class NSString, PKToolConfiguration;
@protocol PKPaletteInkingTool, PKPaletteHandwritingTool, PKPaletteErasingTool;

@interface PKPaletteConcreteBaseTool : NSObject <PKPaletteTool> {
    PKToolConfiguration *_cachedConfiguration;
}

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

- (void).cxx_destruct;
- (BOOL)isCustomTool;
- (BOOL)isErasingTool;
- (BOOL)isHandwritingTool;
- (BOOL)isInkingTool;
- (BOOL)isLassoTool;
- (BOOL)isRulerTool;

@end
