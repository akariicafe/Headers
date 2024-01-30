@class IFColor, NSString;

@interface ISClippingRecipe : NSObject <ISCompositorRecipe>

@property (retain) IFColor *badgeTintColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)layerTreeForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (void).cxx_destruct;
- (id)hintedShadowBlur;
- (id)hintedShadowOffset;
- (id)hintedBadgeRect;
- (id)hintedFontSize;
- (id)hintedTextRect;
- (id)hintedPaperRect;
- (id)hintedCornerSize;
- (id)hintedPageCurlSize;

@end
