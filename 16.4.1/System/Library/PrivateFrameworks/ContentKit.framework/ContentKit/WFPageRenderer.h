@class UIPrintPageRenderer;

@interface WFPageRenderer : NSObject

@property (readonly, nonatomic) double margin;
@property (readonly, nonatomic) UIPrintPageRenderer *renderer;
@property (nonatomic) struct CGSize { double width; double height; } inputSize;
@property (nonatomic) BOOL matchInputSize;
@property (nonatomic) BOOL includeMargin;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForPageAtIndex:(long long)a0;
- (void)_renderToPDF:(id)a0 startingAtPage:(long long)a1 endingAtPage:(long long)a2 completionHandler:(id /* block */)a3;
- (void)renderPDFPageIndex:(long long)a0 pages:(long long)a1 measuredIndicesByFormatter:(id)a2 drawnIndicesByFormatter:(id)a3 linkMetricsByWebView:(id)a4 y:(double)a5 paperSize:(struct CGSize { double x0; double x1; })a6 shouldDrawPageAtIndexHandler:(id /* block */)a7 completionHandler:(id /* block */)a8;
- (id)renderToImage;
- (void)renderToPDF:(id)a0 startingAtPage:(long long)a1 endingAtPage:(long long)a2 completionHandler:(id /* block */)a3;
- (void)updateRendererSize;

@end
