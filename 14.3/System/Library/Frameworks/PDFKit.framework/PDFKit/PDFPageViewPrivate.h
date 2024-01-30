@class PDFPageViewAnnotationController, UIImage, PDFPageLayer, PDFPageLayerEffect, NSMutableDictionary, CALayer, PDFPage, NSMutableArray, NSObject, NSTextStorage, PDFRenderingProperties, PDFAnnotation;
@protocol PDFPageLayerGeometryInterface;

@interface PDFPageViewPrivate : NSObject {
    NSObject<PDFPageLayerGeometryInterface> *geometryInterface;
    PDFRenderingProperties *renderingProperties;
    PDFPage *page;
    PDFPageLayer *pageLayer;
    PDFPageLayerEffect *searchLayer;
    NSMutableArray *pageAnnotationEffects;
    PDFAnnotation *activeAnnotation;
    NSMutableDictionary *activeControls;
    NSTextStorage *activeTextStorage;
    NSMutableArray *pageSignatures;
    PDFPageViewAnnotationController *annotationController;
    CALayer *backgroundLayer;
    UIImage *backgroundImage;
    int backgroundQuality;
    unsigned long long visibilityDelegateIndex;
    BOOL isPerformingUndo;
    CALayer *bookmarkLayer;
    struct CGSize { double width; double height; } bookmarkSize;
}

- (void).cxx_destruct;

@end
