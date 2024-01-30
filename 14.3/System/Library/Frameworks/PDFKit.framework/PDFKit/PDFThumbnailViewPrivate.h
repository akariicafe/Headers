@class PDFView, UIColor, PDFIconsView;

@interface PDFThumbnailViewPrivate : NSObject {
    PDFView *pdfView;
    struct CGSize { double width; double height; } thumbnailSize;
    UIColor *backgroundColor;
    long long layoutMode;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
    PDFIconsView *iconsView;
}

- (void).cxx_destruct;

@end
