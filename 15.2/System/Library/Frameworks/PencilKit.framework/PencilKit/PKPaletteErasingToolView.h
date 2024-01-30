@class NSString, PKPaletteAttributeViewController;
@protocol PKPaletteInkingTool, PKPaletteHandwritingTool, PKPaletteErasingTool;

@interface PKPaletteErasingToolView : PKPaletteToolView <PKPaletteErasingTool, PKPaletteErasingAttributesViewControllerDelegate> {
    PKPaletteAttributeViewController *_attributeViewController;
}

@property (nonatomic, getter=isBitmapEraser) BOOL bitmapEraser;
@property (readonly, nonatomic) NSString *toolIdentifier;
@property (readonly, nonatomic) id<PKPaletteInkingTool> inkingTool;
@property (readonly, nonatomic) id<PKPaletteErasingTool> erasingTool;
@property (readonly, nonatomic) id<PKPaletteHandwritingTool> handwritingTool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)erasingAttributesViewControllerDidChangeErasingType:(id)a0;
- (id)initWithToolIdentifier:(id)a0;
- (id)attributeViewController;
- (void)_updateAttributesViewController;

@end
