@class NSString;

@interface ISMultipleFilesRecipe : NSObject <ISCompositorRecipe>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)layerTreeForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)hintedPaperRect;
- (id)documentLayerWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withPageFold:(BOOL)a1 iconSize:(struct CGSize { double x0; double x1; })a2 scale:(double)a3;
- (id)hintedCornerSize;
- (id)hintedPageCurlSize;
- (id)hintedShadowBlur;
- (id)hintedShadowOffset;
- (id)hintedUnderPaperRect;

@end
