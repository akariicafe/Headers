@class PDFPage, PDFRenderingProperties;
@protocol PDFTilePoolDelegate;

@interface TileRenderRequest : NSObject {
    id<PDFTilePoolDelegate> target;
    PDFPage *page;
    PDFRenderingProperties *renderingProperties;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } tileFrame;
    double zoomFactor;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } matrix;
    int tag;
}

- (void).cxx_destruct;

@end
