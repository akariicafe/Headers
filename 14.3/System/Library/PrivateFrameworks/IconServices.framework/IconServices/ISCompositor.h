@class NSMutableArray;
@protocol ISCompositorRecipe;

@interface ISCompositor : NSObject

@property (retain) id<ISCompositorRecipe> recipe;
@property (retain) NSMutableArray *elements;
@property (readonly) BOOL canUseCoreImage;
@property unsigned long long renderingMode;

+ (id)iosmacAppIconRecipe;
+ (id)macosIconRecipe;
+ (id)iosAppIconRecipe;
+ (id)watchAppIconRecipe;
+ (id)messagesAppIconRecipeWithBorder:(BOOL)a0;
+ (id)macosDocumentRecipe;
+ (id)iosmacDocumentRecipe;
+ (id)iosAppBadgeDocumentRecipe;
+ (id)iosGlyphBadgeDocumentRecipe;

- (void)drawLayer:(id)a0 resourceProvider:(id)a1 inContext:(id)a2;
- (id)initWithRecipe:(id)a0;
- (void)addElementWithRecipe:(id)a0 resources:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)imageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (BOOL)canUseCoreImage;
- (void)reset;
- (void)addElement:(id)a0;
- (void)clearResources;
- (id)maskImageForLayer:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 resourceProvider:(id)a3;
- (id)scaledImageFromContent:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;
- (void)setResource:(id)a0 named:(id)a1;
- (id)filterForLayer:(id)a0 scale:(double)a1 resourceProvider:(id)a2;
- (void)addResourcesFromDictionary:(id)a0;
- (void)drawInContext:(id)a0;
- (void)drawElement:(id)a0 inContext:(id)a1;

@end
