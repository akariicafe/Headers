@class CALayer, NSUUID, NSMutableDictionary, PDFPageLayerEffect, PDFScannerResult, PDFAnnotation, NSMutableArray;
@protocol PDFPageLayerInterface;

@interface PDFPageLayerEffectPrivate : NSObject {
    id<PDFPageLayerInterface> pageLayer;
    NSUUID *uuid;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pageFrame;
    BOOL shouldRotateContent;
    PDFAnnotation *annotation;
    NSMutableDictionary *markupEffectLayers;
    NSMutableArray *selections;
    NSMutableDictionary *selectionEffectLayers;
    PDFScannerResult *pdfResult;
    CALayer *rootSelectionLayer;
    PDFPageLayerEffect *noteLayer;
}

- (void).cxx_destruct;

@end
