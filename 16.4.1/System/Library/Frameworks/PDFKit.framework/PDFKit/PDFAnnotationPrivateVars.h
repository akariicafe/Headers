@class NSMutableDictionary, NSTextStorage, PDFPage, NSDictionary, PDFAnnotation, PDFAccessibilityNode, NSLayoutManager, NSString, PDFAKAnnotationAdaptor, NSIndexSet, NSArray, NSLock, NSUUID;
@protocol NSCopying;

@interface PDFAnnotationPrivateVars : NSObject {
    BOOL loggingEnabled;
    BOOL shouldExport;
    PDFPage *page;
    struct CGPDFDictionary { } *sourceDictionary;
    struct __CFDictionary { } *dictionaryRef;
    NSUUID *pdfAnnotationUUID;
    struct CGPDFAnnotation { } *cgAnnotation;
    NSMutableDictionary *PDFAnnotationDictionary;
    NSDictionary *PDFAnnotationKeyMapping;
    NSMutableDictionary *internalPDFAnnotationDictionary;
    struct CGPDFForm { } *normalAppearance;
    struct CGPDFForm { } *rolloverAppearance;
    struct CGPDFForm { } *downAppearance;
    struct CGPDFForm { } *normalOffAppearance;
    struct CGPDFForm { } *rolloverOffAppearance;
    struct CGPDFForm { } *downOffAppearance;
    BOOL saveAppearance;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } cachedAppearancesLock;
    NSMutableDictionary *cachedAppearances;
    BOOL isSelected;
    BOOL isHighlighted;
    NSIndexSet *quadPointsIndexSet;
    struct CGPath { } *quadPointsPath;
    PDFAnnotation *parent;
    PDFAnnotation *popup;
    struct CGPDFDictionary { } *popupDictionary;
    BOOL popupDrawCloseWidget;
    BOOL popupDrawText;
    struct CGPath **cgPaths;
    NSLock *pathLock;
    BOOL isSignature;
    BOOL shouldBurnIn;
    NSString *widgetOnStateString;
    id control;
    BOOL pointerIsOverAnnotation;
    BOOL shouldHideInteractiveBackgroundColor;
    NSLayoutManager *layoutManager;
    NSTextStorage *textStorage;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } textInsets;
    struct { BOOL didGenerate; NSString *contentType; } textContentType;
    BOOL restoreLinePoints;
    BOOL restoreQuadPoints;
    struct CGPoint { double x; double y; } startPoint;
    struct CGPoint { double x; double y; } endPoint;
    NSArray *quadPoints;
    BOOL isTransparent;
    PDFAccessibilityNode *accessibilityNode;
    double scaleFactor;
    BOOL isFullyConstructed;
    BOOL constructingDictionaryRef;
    PDFAKAnnotationAdaptor *akAnnotationAdaptor;
    id<NSCopying> akAnnotationForCopying;
}

- (void).cxx_destruct;

@end
